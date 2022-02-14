
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_size; } ;
struct sec_add {char* name; int size; int * content; } ;
struct elfcopy {int flags; int v_sadd; } ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,struct sec_add*,int ) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 int * FUNC_5 (char const*,char*) ;
 scalar_t__ FUNC_6 (int *,int,int,int *) ;
 void* FUNC_7 (int) ;
 int VAR_2 ;
 int FUNC_8 (char const*,struct stat*) ;
 char* FUNC_9 (char const*,char) ;
 int FUNC_10 (char*,char const*,int) ;

void
FUNC_11(struct elfcopy *VAR_3, const char *VAR_4)
{
 struct sec_add *VAR_5;
 struct stat VAR_6;
 const char *VAR_7, *VAR_8;
 FILE *VAR_9;
 int VAR_10;

 if ((VAR_7 = FUNC_9(VAR_4, '=')) == ((void*)0))
  FUNC_2(VAR_0,
      "illegal format for --add-section option");
 if ((VAR_5 = FUNC_7(sizeof(*VAR_5))) == ((void*)0))
  FUNC_1(VAR_0, "malloc failed");

 VAR_10 = VAR_7 - VAR_4;
 if ((VAR_5->name = FUNC_7(VAR_10 + 1)) == ((void*)0))
  FUNC_1(VAR_0, "malloc failed");
 FUNC_10(VAR_5->name, VAR_4, VAR_10);
 VAR_5->name[VAR_10] = '\0';

 VAR_8 = VAR_7 + 1;
 if (FUNC_8(VAR_8, &VAR_6) == -1)
  FUNC_1(VAR_0, "stat failed");
 VAR_5->size = VAR_6.st_size;
 if (VAR_5->size > 0) {
  if ((VAR_5->content = FUNC_7(VAR_5->size)) == ((void*)0))
   FUNC_1(VAR_0, "malloc failed");
  if ((VAR_9 = FUNC_5(VAR_8, "r")) == ((void*)0))
   FUNC_1(VAR_0, "can not open %s", VAR_8);
  if (FUNC_6(VAR_5->content, 1, VAR_5->size, VAR_9) == 0 ||
      FUNC_4(VAR_9))
   FUNC_1(VAR_0, "fread failed");
  FUNC_3(VAR_9);
 } else
  VAR_5->content = ((void*)0);

 FUNC_0(&VAR_3->v_sadd, VAR_5, VAR_2);
 VAR_3->flags |= VAR_1;
}
