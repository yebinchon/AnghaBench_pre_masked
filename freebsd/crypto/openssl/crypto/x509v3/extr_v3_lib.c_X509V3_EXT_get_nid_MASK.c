
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int ext_nid; } ;
typedef TYPE_1__ X509V3_EXT_METHOD ;


 TYPE_1__** FUNC_0 (TYPE_1__ const**,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,TYPE_1__*) ;
 TYPE_1__ const* FUNC_2 (int ,int) ;
 int VAR_2 ;

const X509V3_EXT_METHOD *FUNC_3(int VAR_3)
{
    X509V3_EXT_METHOD VAR_4;
    const X509V3_EXT_METHOD *VAR_5 = &VAR_4, *const *VAR_6;
    int VAR_7;

    if (VAR_3 < 0)
        return ((void*)0);
    VAR_4.ext_nid = VAR_3;
    VAR_6 = FUNC_0(&VAR_5, VAR_2, VAR_0);
    if (VAR_6)
        return *VAR_6;
    if (!VAR_1)
        return ((void*)0);
    VAR_7 = FUNC_1(VAR_1, &VAR_4);
    return FUNC_2(VAR_1, VAR_7);
}
