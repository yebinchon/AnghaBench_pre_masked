
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ point_conversion_form_t ;
struct TYPE_8__ {TYPE_1__* meth; } ;
struct TYPE_7__ {scalar_t__ conv_form; TYPE_3__* group; int * pub_key; } ;
struct TYPE_6__ {int flags; } ;
typedef TYPE_2__ EC_KEY ;
typedef int BN_CTX ;


 int VAR_0 ;
 int * FUNC_0 (TYPE_3__*) ;
 scalar_t__ FUNC_1 (TYPE_3__*,int *,unsigned char const*,size_t,int *) ;

int FUNC_2(EC_KEY *VAR_1, const unsigned char *VAR_2, size_t VAR_3,
                   BN_CTX *VAR_4)
{
    if (VAR_1 == ((void*)0) || VAR_1->group == ((void*)0))
        return 0;
    if (VAR_1->pub_key == ((void*)0))
        VAR_1->pub_key = FUNC_0(VAR_1->group);
    if (VAR_1->pub_key == ((void*)0))
        return 0;
    if (FUNC_1(VAR_1->group, VAR_1->pub_key, VAR_2, VAR_3, VAR_4) == 0)
        return 0;







    if ((VAR_1->group->meth->flags & VAR_0) == 0)
        VAR_1->conv_form = (point_conversion_form_t)(VAR_2[0] & ~0x01);
    return 1;
}
