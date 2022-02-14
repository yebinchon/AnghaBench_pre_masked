
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pathhead {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int,char*) ;
 int VAR_1 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,char*) ;
 char* FUNC_3 (struct pathhead*) ;

__attribute__((used)) static void
FUNC_4(struct pathhead *VAR_2)
{
 char *VAR_3;

 if ((VAR_3 = FUNC_3(VAR_2)) == ((void*)0)) {
  VAR_1 = VAR_0;
  FUNC_0(1, "building path string");
 }
 FUNC_2("%s\n", VAR_3);
 FUNC_1(VAR_3);
}
