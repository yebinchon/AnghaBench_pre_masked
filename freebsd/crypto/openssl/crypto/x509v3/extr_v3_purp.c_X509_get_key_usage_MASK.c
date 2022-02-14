
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_4__ {int ex_flags; int ex_kusage; } ;
typedef TYPE_1__ X509 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int,int) ;

uint32_t FUNC_1(X509 *VAR_2)
{

    FUNC_0(VAR_2, -1, -1);
    if (VAR_2->ex_flags & VAR_0)
        return VAR_2->ex_kusage;
    return VAR_1;
}
