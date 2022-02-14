
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct symbol {unsigned int kernel; int preloaded; } ;
struct module {int skip; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 struct module* FUNC_2 (char*) ;
 char* FUNC_3 (unsigned long*,void*,unsigned long) ;
 void* FUNC_4 (char const*,unsigned long*) ;
 int VAR_0 ;
 scalar_t__ FUNC_5 (char*) ;
 struct module* FUNC_6 (char*) ;
 char* FUNC_7 (char*,char) ;
 unsigned int FUNC_8 (char*,char**,int) ;
 struct symbol* FUNC_9 (char*,struct module*,int ) ;
 int FUNC_10 (char*,struct module*,unsigned int,int ) ;

__attribute__((used)) static void FUNC_11(const char *VAR_1, unsigned int VAR_2)
{
 unsigned long VAR_3, VAR_4 = 0;
 void *VAR_5 = FUNC_4(VAR_1, &VAR_3);
 char *VAR_6;

 if (!VAR_5)

  return;

 while ((VAR_6 = FUNC_3(&VAR_4, VAR_5, VAR_3))) {
  char *VAR_7, *VAR_8, *VAR_9, *VAR_10, *VAR_11;
  unsigned int VAR_12;
  struct module *VAR_13;
  struct symbol *VAR_14;

  if (!(VAR_7 = FUNC_7(VAR_6, '\t')))
   goto fail;
  *VAR_7++ = '\0';
  if (!(VAR_8 = FUNC_7(VAR_7, '\t')))
   goto fail;
  *VAR_8++ = '\0';
  if ((VAR_10 = FUNC_7(VAR_8, '\t')) != ((void*)0))
   *VAR_10++ = '\0';
  if (VAR_10 && ((VAR_11 = FUNC_7(VAR_10, '\t')) != ((void*)0)))
   *VAR_11 = '\0';
  VAR_12 = FUNC_8(VAR_6, &VAR_9, 16);
  if (*VAR_7 == '\0' || *VAR_8 == '\0' || *VAR_9 != '\0')
   goto fail;
  VAR_13 = FUNC_2(VAR_8);
  if (!VAR_13) {
   if (FUNC_5(VAR_8))
    VAR_0 = 1;
   VAR_13 = FUNC_6(VAR_8);
   VAR_13->skip = 1;
  }
  VAR_14 = FUNC_9(VAR_7, VAR_13, FUNC_0(VAR_10));
  VAR_14->kernel = VAR_2;
  VAR_14->preloaded = 1;
  FUNC_10(VAR_7, VAR_13, VAR_12, FUNC_0(VAR_10));
 }
 return;
fail:
 FUNC_1("parse error in symbol dump file\n");
}
