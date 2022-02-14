
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xdrproc_t ;
typedef int u_long ;
typedef int des_block ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int ,int *,int ,int *) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

int
FUNC_1(des_block *VAR_3)
{
 if (!FUNC_0((u_long)VAR_0, (xdrproc_t)VAR_2, ((void*)0),
   (xdrproc_t)VAR_1, VAR_3)) {
  return (-1);
 }
 return (0);
}
