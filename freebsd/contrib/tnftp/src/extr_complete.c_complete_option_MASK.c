
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct option {char* name; } ;
typedef int StringList ;


 unsigned char VAR_0 ;
 unsigned char VAR_1 ;
 unsigned char FUNC_0 (char*,int,int *) ;
 int VAR_2 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int *,int ) ;
 int * FUNC_3 () ;
 int FUNC_4 (char*) ;
 struct option* VAR_3 ;
 int FUNC_5 (int *,int) ;
 size_t FUNC_6 (char*) ;
 scalar_t__ FUNC_7 (char*,char*,size_t) ;

__attribute__((used)) static unsigned char
FUNC_8(char *VAR_4, int VAR_5)
{
 struct option *VAR_6;
 StringList *VAR_7;
 size_t VAR_8;
 unsigned char VAR_9;

 VAR_7 = FUNC_3();
 VAR_8 = FUNC_6(VAR_4);

 for (VAR_6 = VAR_3; VAR_6->name != ((void*)0); VAR_6++) {
  if (VAR_8 > FUNC_6(VAR_6->name))
   continue;
  if (FUNC_7(VAR_4, VAR_6->name, VAR_8) == 0)
   FUNC_2(VAR_7, FUNC_4(VAR_6->name));
 }

 VAR_9 = FUNC_0(VAR_4, VAR_5, VAR_7);
 if (VAR_9 == VAR_1) {
  if (FUNC_1(VAR_2, " ") == -1)
   VAR_9 = VAR_0;
 }
 FUNC_5(VAR_7, 1);
 return (VAR_9);
}
