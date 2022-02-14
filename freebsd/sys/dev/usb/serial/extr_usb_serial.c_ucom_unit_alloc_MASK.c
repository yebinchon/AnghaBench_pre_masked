
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (int *) ;
 int * VAR_0 ;

__attribute__((used)) static int
FUNC_2(void)
{
 int VAR_1;


 if (VAR_0 == ((void*)0)) {
  FUNC_0("ucom_unrhdr is NULL\n");
  return (-1);
 }
 VAR_1 = FUNC_1(VAR_0);
 FUNC_0("unit %d is allocated\n", VAR_1);
 return (VAR_1);
}
