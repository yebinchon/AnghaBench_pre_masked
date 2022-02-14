
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (unsigned char*,char*,int,int) ;
 int FUNC_1 (char**,int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int *) ;

void
FUNC_6(FILE *VAR_1, time_t *VAR_2)
{
 char *VAR_3;
 int VAR_4;

 VAR_4 = FUNC_1(&VAR_3, VAR_1);
 if (VAR_4 != VAR_0) {
  FUNC_4("Expecting numeric lease time");
  FUNC_5(VAR_1);
  return;
 }
 FUNC_0((unsigned char *)VAR_2, VAR_3, 10, 32);

 *VAR_2 = FUNC_2(*VAR_2);

 FUNC_3(VAR_1);
}
