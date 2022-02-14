
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int nvlist_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,int ) ;
 int * FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *,char*) ;
 scalar_t__ FUNC_4 (int *,char*) ;
 int FUNC_5 (int *,char*) ;
 int * FUNC_6 (int,int *,int ) ;
 int VAR_2 ;

int
FUNC_7(uint64_t VAR_3, int *VAR_4, int *VAR_5)
{
 nvlist_t *VAR_6;
 int VAR_7;

 if (VAR_2 == -1) {

  VAR_1 = VAR_0;
  return (-1);
 }

 VAR_6 = FUNC_1(0);
 FUNC_0(VAR_6, "funcidx", VAR_3);
 VAR_6 = FUNC_6(VAR_2, VAR_6, 0);
 if (VAR_6 == ((void*)0))
  return (-1);
 if (FUNC_3(VAR_6, "error")) {
  VAR_7 = (int)FUNC_4(VAR_6, "error");
  FUNC_2(VAR_6);
  VAR_1 = VAR_7;
  return (-1);
 }

 *VAR_4 = FUNC_5(VAR_6, "chanfd");
 *VAR_5 = FUNC_5(VAR_6, "procfd");

 FUNC_2(VAR_6);
 return (0);
}
