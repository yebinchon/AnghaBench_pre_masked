
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int*) ;
 int FUNC_1 (int ,char*) ;
 int VAR_2 ;
 int FUNC_2 (int ,int) ;

__attribute__((used)) static int FUNC_3()
{
 int VAR_3 = 0;

 if ((FUNC_2(VAR_2, 1) != -2) &&
     (FUNC_0(VAR_1, VAR_0, &VAR_3) == -1)) {
  FUNC_1(VAR_1, "SIOCGETFF");
  return 0;
 }
 return VAR_3;
}
