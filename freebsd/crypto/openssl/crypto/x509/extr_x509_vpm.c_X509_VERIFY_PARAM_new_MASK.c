
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int depth; int auth_level; int trust; } ;
typedef TYPE_1__ X509_VERIFY_PARAM ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int ) ;

X509_VERIFY_PARAM *FUNC_2(void)
{
    X509_VERIFY_PARAM *VAR_3;

    VAR_3 = FUNC_0(sizeof(*VAR_3));
    if (VAR_3 == ((void*)0)) {
        FUNC_1(VAR_1, VAR_0);
        return ((void*)0);
    }
    VAR_3->trust = VAR_2;

    VAR_3->depth = -1;
    VAR_3->auth_level = -1;
    return VAR_3;
}
