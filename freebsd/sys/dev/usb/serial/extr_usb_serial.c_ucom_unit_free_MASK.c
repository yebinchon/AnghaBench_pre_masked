
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 int FUNC_1 (int *,int) ;
 int * VAR_1 ;

__attribute__((used)) static void
FUNC_2(int VAR_2)
{

 if (VAR_2 < 0 || VAR_2 >= VAR_0 || VAR_1 == ((void*)0)) {
  FUNC_0("cannot free unit number\n");
  return;
 }
 FUNC_0("unit %d is freed\n", VAR_2);
 FUNC_1(VAR_1, VAR_2);
}
