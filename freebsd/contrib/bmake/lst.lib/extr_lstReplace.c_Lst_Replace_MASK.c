
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {void* datum; } ;
typedef int ReturnStatus ;
typedef TYPE_1__* LstNode ;


 int VAR_0 ;
 int VAR_1 ;

ReturnStatus
FUNC_0(LstNode VAR_2, void *VAR_3)
{
    if (VAR_2 == ((void*)0)) {
 return (VAR_0);
    } else {
 (VAR_2)->datum = VAR_3;
 return (VAR_1);
    }
}
