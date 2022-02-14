
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union ccb {int dummy; } ccb ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 union ccb* FUNC_0 (int,int ,int) ;

union ccb *
FUNC_1()
{
 union ccb *VAR_3;

 VAR_3 = FUNC_0(sizeof(*VAR_3), VAR_0, VAR_2|VAR_1);
 return (VAR_3);
}
