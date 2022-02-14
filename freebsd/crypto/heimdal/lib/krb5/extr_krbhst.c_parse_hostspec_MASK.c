
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct krb5_krbhst_info {char* hostname; int port; int def_port; void* proto; } ;
struct krb5_krbhst_data {int dummy; } ;
typedef int krb5_context ;


 void* VAR_0 ;
 void* VAR_1 ;
 struct krb5_krbhst_info* FUNC_0 (int,scalar_t__) ;
 int FUNC_1 (struct krb5_krbhst_info*) ;
 int FUNC_2 (int ,char*,char*,int) ;
 void* FUNC_3 (struct krb5_krbhst_data*) ;
 int FUNC_4 (char*,char const*,int) ;
 int FUNC_5 (int ) ;
 char* FUNC_6 (char const*,char) ;
 size_t FUNC_7 (char*,char*) ;
 scalar_t__ FUNC_8 (char const*) ;
 int FUNC_9 (char*) ;
 scalar_t__ FUNC_10 (char const*,char*,int) ;
 scalar_t__ FUNC_11 (char const**,char*,char*,scalar_t__) ;
 int FUNC_12 (char const*,char**,int ) ;

__attribute__((used)) static struct krb5_krbhst_info*
FUNC_13(krb5_context VAR_2, struct krb5_krbhst_data *VAR_3,
        const char *VAR_4, int VAR_5, int VAR_6)
{
    const char *VAR_7 = VAR_4, *VAR_8;
    struct krb5_krbhst_info *VAR_9;

    VAR_9 = FUNC_0(1, sizeof(*VAR_9) + FUNC_8(VAR_4));
    if(VAR_9 == ((void*)0))
 return ((void*)0);

    VAR_9->proto = FUNC_3(VAR_3);

    if(FUNC_10(VAR_7, "http://", 7) == 0){
 VAR_9->proto = VAR_0;
 VAR_7 += 7;
    } else if(FUNC_10(VAR_7, "http/", 5) == 0) {
 VAR_9->proto = VAR_0;
 VAR_7 += 5;
 VAR_5 = FUNC_5(FUNC_2 (VAR_2, "http", "tcp", 80));
    }else if(FUNC_10(VAR_7, "tcp/", 4) == 0){
 VAR_9->proto = VAR_1;
 VAR_7 += 4;
    } else if(FUNC_10(VAR_7, "udp/", 4) == 0) {
 VAR_7 += 4;
    }

    if (VAR_7[0] == '[' && (VAR_8 = FUNC_6(VAR_7, ']')) != ((void*)0)) {


 FUNC_4(VAR_9->hostname, &VAR_7[1], VAR_8 - VAR_7 - 1);
 VAR_9->hostname[VAR_8 - VAR_7 - 1] = '\0';
 VAR_7 = VAR_8 + 1;

 if (VAR_7[0] == ':')
     VAR_7++;
    } else if(FUNC_11(&VAR_7, ":", VAR_9->hostname, FUNC_8(VAR_4) + 1) < 0) {

 FUNC_1(VAR_9);
 return ((void*)0);
    }

    VAR_9->hostname[FUNC_7(VAR_9->hostname, "/")] = '\0';
    FUNC_9(VAR_9->hostname);

    VAR_9->port = VAR_9->def_port = VAR_5;
    if(VAR_7 != ((void*)0) && VAR_7[0]) {
 char *VAR_10;
 VAR_9->port = FUNC_12(VAR_7, &VAR_10, 0);
 if(VAR_10 == VAR_7) {
     FUNC_1(VAR_9);
     return ((void*)0);
 }
    }
    if (VAR_6)
 VAR_9->port = VAR_6;
    return VAR_9;
}
