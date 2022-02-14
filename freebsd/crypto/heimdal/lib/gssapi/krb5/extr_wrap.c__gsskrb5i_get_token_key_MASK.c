
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int krb5_keyblock ;
typedef int krb5_context ;
typedef TYPE_1__* gsskrb5_ctx ;
struct TYPE_5__ {int more_flags; } ;
typedef int OM_uint32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__* const,int ,int **) ;
 int FUNC_1 (TYPE_1__* const,int ,int **) ;
 int FUNC_2 (int ,int ,char*) ;

OM_uint32
FUNC_3(const gsskrb5_ctx VAR_2,
   krb5_context VAR_3,
   krb5_keyblock **VAR_4)
{
    FUNC_0(VAR_2, VAR_3, VAR_4);
    if(*VAR_4 == ((void*)0)) {




 if ((VAR_2->more_flags & VAR_0) == 0)
     FUNC_1(VAR_2, VAR_3, VAR_4);
    }
    if (*VAR_4 == ((void*)0)) {
 FUNC_2(VAR_3, 0, "No token key available");
 return VAR_1;
    }
    return 0;
}
