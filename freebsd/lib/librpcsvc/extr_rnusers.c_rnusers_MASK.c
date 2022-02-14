
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xdrproc_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (char*,int ,int ,int ,int ,char*,int ,char*) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;

int
FUNC_1(char *VAR_5)
{
 int VAR_6;

 if (FUNC_0(VAR_5, VAR_1, VAR_2, VAR_0,
   (xdrproc_t)VAR_4, (char *) ((void*)0),
   (xdrproc_t)VAR_3, (char *) &VAR_6) != 0)
  return (-1);
 else
  return (VAR_6);
}
