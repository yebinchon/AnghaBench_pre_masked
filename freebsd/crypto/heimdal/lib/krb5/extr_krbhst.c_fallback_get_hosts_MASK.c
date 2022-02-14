
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct krb5_krbhst_info {int proto; int port; int def_port; char* hostname; struct addrinfo* ai; } ;
struct krb5_krbhst_data {int fallback_count; int flags; int realm; } ;
struct addrinfo {int dummy; } ;
typedef int portstr ;
typedef int krb5_error_code ;
typedef int krb5_context ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int,char*,int,int ,char const*) ;
 int FUNC_1 (struct krb5_krbhst_data*,struct krb5_krbhst_info*) ;
 int FUNC_2 (char**,char*,char const*,int,...) ;
 struct krb5_krbhst_info* FUNC_3 (int,int) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*,char*,struct addrinfo*,struct addrinfo**) ;
 int FUNC_6 (struct addrinfo*,int) ;
 int FUNC_7 (char*,char*,size_t) ;
 int FUNC_8 (char*,int,char*,int) ;
 size_t FUNC_9 (char*) ;

__attribute__((used)) static krb5_error_code
FUNC_10(krb5_context VAR_3, struct krb5_krbhst_data *VAR_4,
     const char *VAR_5, int VAR_6, int VAR_7)
{
    char *VAR_8 = ((void*)0);
    int VAR_9;
    struct addrinfo *VAR_10;
    struct addrinfo VAR_11;
    char VAR_12[VAR_2];

    FUNC_0(VAR_3, 2, "fallback lookup %d for realm %s (service %s)",
  VAR_4->fallback_count, VAR_4->realm, VAR_5);





    if(VAR_4->fallback_count >= 5) {
 VAR_4->flags |= VAR_1;
 return 0;
    }

    if(VAR_4->fallback_count == 0)
 VAR_9 = FUNC_2(&VAR_8, "%s.%d.", VAR_5, VAR_4->realm);
    else
 VAR_9 = FUNC_2(&VAR_8, "%s-%d.%d.",
         VAR_5, VAR_4->fallback_count, VAR_4->realm);

    if (VAR_9 < 0 || VAR_8 == ((void*)0))
 return VAR_0;

    FUNC_6(&VAR_11, VAR_7);
    FUNC_8(VAR_12, sizeof(VAR_12), "%d", VAR_6);
    VAR_9 = FUNC_5(VAR_8, VAR_12, &VAR_11, &VAR_10);
    if (VAR_9) {

 FUNC_4(VAR_8);
 VAR_4->flags |= VAR_1;
    } else {
 struct krb5_krbhst_info *VAR_13;
 size_t VAR_14 = FUNC_9(VAR_8);

 VAR_13 = FUNC_3(1, sizeof(*VAR_13) + VAR_14);
 if(VAR_13 == ((void*)0)) {
     FUNC_4(VAR_8);
     return VAR_0;
 }

 VAR_13->proto = VAR_7;
 VAR_13->port = VAR_13->def_port = VAR_6;
 VAR_13->ai = VAR_10;
 FUNC_7(VAR_13->hostname, VAR_8, VAR_14);
 VAR_13->hostname[VAR_14] = '\0';
 FUNC_4(VAR_8);
 FUNC_1(VAR_4, VAR_13);
 VAR_4->fallback_count++;
    }
    return 0;
}
