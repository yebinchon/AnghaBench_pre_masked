
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int cSpeed; int dSpeed; scalar_t__ cMem; } ;
typedef TYPE_1__ constraint_t ;
typedef scalar_t__ U32 ;


 int VAR_0 ;

__attribute__((used)) static constraint_t FUNC_0(constraint_t VAR_1) {
    VAR_1.cMem = (U32)-1;
    VAR_1.cSpeed = (VAR_1.cSpeed * VAR_0) / 100;
    VAR_1.dSpeed = (VAR_1.dSpeed * VAR_0) / 100;
    return VAR_1;
}
