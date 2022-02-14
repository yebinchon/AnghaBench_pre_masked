
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct module {int skip; } ;


 int FUNC_0 (struct module*,char*,char*) ;
 int FUNC_1 (char*) ;
 struct module* FUNC_2 (char*) ;
 char* FUNC_3 (unsigned long*,void*,unsigned long) ;
 void* FUNC_4 (char const*,unsigned long*) ;
 int VAR_0 ;
 scalar_t__ FUNC_5 (char*) ;
 struct module* FUNC_6 (char*) ;
 int FUNC_7 (void*,unsigned long) ;
 char* FUNC_8 (char*,char) ;

__attribute__((used)) static void FUNC_9(const char *VAR_1)
{
 unsigned long VAR_2, VAR_3 = 0;
 void *VAR_4 = FUNC_4(VAR_1, &VAR_2);
 char *VAR_5;

 if (!VAR_4)
  return;

 while ((VAR_5 = FUNC_3(&VAR_3, VAR_4, VAR_2))) {
  char *VAR_6, *VAR_7, *VAR_8;
  struct module *VAR_9;

  VAR_6 = VAR_5;
  VAR_7 = FUNC_8(VAR_6, '\t');
  if (!VAR_7)
   goto fail;
  *VAR_7++ = '\0';
  VAR_8 = FUNC_8(VAR_7, '\t');
  if (!VAR_8)
   goto fail;
  *VAR_8++ = '\0';
  if (*VAR_6 == '\0' || *VAR_7 == '\0')
   goto fail;

  VAR_9 = FUNC_2(VAR_7);
  if (!VAR_9) {
   VAR_9 = FUNC_6(VAR_7);
   VAR_9->skip = 1;
  }
  if (FUNC_5(VAR_7)) {
   VAR_0 = 1;
   VAR_9->skip = 0;
  }

  if (!VAR_9->skip)
   FUNC_0(VAR_9, VAR_6, VAR_8);
 }
 FUNC_7(VAR_4, VAR_2);
 return;
fail:
 FUNC_1("parse error in markers list file\n");
}
