
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strlist {int dummy; } ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int ,char*) ;
 int FUNC_3 (int *) ;
 char* FUNC_4 (char*,int,int *) ;
 int FUNC_5 (char*,int ) ;
 int FUNC_6 (int) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (struct strlist*,char*) ;
 int FUNC_9 (struct strlist*) ;
 struct strlist* FUNC_10 (int,int *) ;

__attribute__((used)) static struct strlist *FUNC_11(int VAR_1)
{
 int VAR_2, VAR_3;
 FILE *VAR_4;
 char VAR_5[VAR_0];
 char *VAR_6;
 struct strlist *VAR_7;

 VAR_7 = FUNC_10(1, ((void*)0));

 VAR_4 = FUNC_2(FUNC_0(VAR_1), "r");
 while (!FUNC_3(VAR_4)) {
  VAR_6 = FUNC_4(VAR_5, VAR_0, VAR_4);
  if (!VAR_6)
   break;

  VAR_3 = FUNC_7(VAR_6) - 1;
  if (VAR_6[VAR_3] == '\n')
   VAR_6[VAR_3] = '\0';
  VAR_2 = FUNC_8(VAR_7, VAR_5);
  if (VAR_2 < 0) {
   FUNC_5("strlist__add failed: %s\n", FUNC_6(-VAR_2));
   FUNC_9(VAR_7);
   return ((void*)0);
  }
 }
 FUNC_1(VAR_4);

 return VAR_7;
}
