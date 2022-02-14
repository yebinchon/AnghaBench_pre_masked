
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct descr {scalar_t__ s; } ;
typedef int krb5_kdc_configuration ;
typedef scalar_t__ krb5_error_code ;
typedef int krb5_context ;
struct TYPE_6__ {int len; int * val; } ;
typedef TYPE_1__ krb5_addresses ;
typedef int a_str ;
struct TYPE_7__ {scalar_t__ type; int port; int family; } ;


 scalar_t__ VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_0 (int ,int *,struct descr*,int *,int ,scalar_t__,int ) ;
 int FUNC_1 (int ,int *,int,char*,char*,int ,char*) ;
 int FUNC_2 (int ,int,scalar_t__,char*) ;
 int FUNC_3 (int ,int,char*,unsigned long) ;
 int FUNC_4 (int ,TYPE_1__*) ;
 scalar_t__ FUNC_5 (int ,TYPE_1__*) ;
 int FUNC_6 (int *,char*,int,size_t*) ;
 struct descr* FUNC_7 (int) ;
 int FUNC_8 (int ) ;
 int VAR_2 ;
 int FUNC_9 (int ,int *,int ) ;
 int VAR_3 ;
 TYPE_2__* VAR_4 ;
 struct descr* FUNC_10 (struct descr*,int) ;
 int FUNC_11 (struct descr*,int) ;
 scalar_t__ VAR_5 ;

__attribute__((used)) static int
FUNC_12(krb5_context VAR_6,
      krb5_kdc_configuration *VAR_7,
      struct descr **VAR_8)
{
    krb5_error_code VAR_9;
    size_t VAR_10, VAR_11;
    struct descr *VAR_12;
    int VAR_13 = 0;
    krb5_addresses VAR_14;

    if (VAR_1.len) {
 VAR_14 = VAR_1;
    } else {
 VAR_9 = FUNC_5 (VAR_6, &VAR_14);
 if (VAR_9)
     FUNC_2 (VAR_6, 1, VAR_9, "krb5_get_all_server_addrs");
    }
    FUNC_9(VAR_6, VAR_7, VAR_3);
    VAR_12 = FUNC_7(VAR_14.len * VAR_2 * sizeof(*VAR_12));
    if (VAR_12 == ((void*)0))
 FUNC_3(VAR_6, 1, "malloc(%lu) failed",
    (unsigned long)VAR_2 * sizeof(*VAR_12));

    for (VAR_10 = 0; VAR_10 < VAR_2; VAR_10++){
 for (VAR_11 = 0; VAR_11 < VAR_14.len; ++VAR_11) {
     FUNC_0(VAR_6, VAR_7, &VAR_12[VAR_13], &VAR_14.val[VAR_11],
   VAR_4[VAR_10].family, VAR_4[VAR_10].type, VAR_4[VAR_10].port);
     if(VAR_12[VAR_13].s != VAR_5){
  char VAR_15[80];
  size_t VAR_16;

  FUNC_6 (&VAR_14.val[VAR_11], VAR_15,
        sizeof(VAR_15), &VAR_16);

  FUNC_1(VAR_6, VAR_7, 5, "listening on %s port %u/%s",
   VAR_15,
   FUNC_8(VAR_4[VAR_10].port),
   (VAR_4[VAR_10].type == VAR_0) ? "tcp" : "udp");

  VAR_13++;
     }
 }
    }
    FUNC_4 (VAR_6, &VAR_14);
    VAR_12 = FUNC_10(VAR_12, VAR_13 * sizeof(*VAR_12));
    if (VAR_12 == ((void*)0) && VAR_13 != 0)
 FUNC_3(VAR_6, 1, "realloc(%lu) failed",
    (unsigned long)VAR_13 * sizeof(*VAR_12));
    FUNC_11 (VAR_12, VAR_13);
    *VAR_8 = VAR_12;
    return VAR_13;
}
