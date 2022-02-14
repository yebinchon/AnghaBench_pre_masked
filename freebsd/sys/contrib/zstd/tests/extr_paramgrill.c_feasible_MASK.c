
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ cSpeed; scalar_t__ dSpeed; scalar_t__ cMem; } ;
typedef TYPE_1__ constraint_t ;
struct TYPE_8__ {scalar_t__ cSize; } ;
struct TYPE_7__ {scalar_t__ cSpeed; scalar_t__ dSpeed; scalar_t__ cMem; scalar_t__ cSize; } ;
typedef TYPE_2__ BMK_benchResult_t ;


 TYPE_3__ VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_0(const BMK_benchResult_t VAR_2, const constraint_t VAR_3) {
    return (VAR_2.cSpeed >= VAR_3.cSpeed)
        && (VAR_2.dSpeed >= VAR_3.dSpeed)
        && (VAR_2.cMem <= VAR_3.cMem)
        && (!VAR_1 || VAR_2.cSize <= VAR_0.cSize);
}
