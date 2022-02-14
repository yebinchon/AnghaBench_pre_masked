
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int * curPtr; int atEnd; int isOpen; } ;
typedef int ReturnStatus ;
typedef TYPE_1__* Lst ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

ReturnStatus
FUNC_2(Lst VAR_6)
{
 if (FUNC_1 (VAR_6) == VAR_1) {
  return (VAR_0);
 }
 (VAR_6)->isOpen = VAR_4;
 (VAR_6)->atEnd = FUNC_0 (VAR_6) ? VAR_2 : VAR_5;
 (VAR_6)->curPtr = ((void*)0);

 return (VAR_3);
}
