
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct krb5_krbhst_data {int hosts; int * index; int * end; int flags; int * realm; } ;
typedef int krb5_context ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int,char*,char const*,char const*,int) ;
 struct krb5_krbhst_data* FUNC_1 (int,int) ;
 int FUNC_2 (struct krb5_krbhst_data*) ;
 int FUNC_3 (char const*,char) ;
 int * FUNC_4 (char const*) ;

__attribute__((used)) static struct krb5_krbhst_data*
FUNC_5(krb5_context VAR_3,
     const char *VAR_4,
     const char *VAR_5,
     int VAR_6)
{
    struct krb5_krbhst_data *VAR_7;

    if((VAR_7 = FUNC_1(1, sizeof(*VAR_7))) == ((void*)0))
 return ((void*)0);

    if((VAR_7->realm = FUNC_4(VAR_5)) == ((void*)0)) {
 FUNC_2(VAR_7);
 return ((void*)0);
    }

    FUNC_0(VAR_3, 2, "Trying to find service %s for realm %s flags %x",
  VAR_4, VAR_5, VAR_6);


    if (!FUNC_3(VAR_5, '.'))
 VAR_7->flags |= VAR_0;

    if (VAR_6 & VAR_2)
 VAR_7->flags |= VAR_1;
    VAR_7->end = VAR_7->index = &VAR_7->hosts;
    return VAR_7;
}
