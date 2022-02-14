
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct sockaddr {int dummy; } ;
struct ifaddrs {int ifa_flags; int * ifa_addr; struct ifaddrs* ifa_next; } ;
typedef int sa_zero ;
typedef scalar_t__ krb5_error_code ;
typedef int krb5_context ;
struct TYPE_6__ {unsigned int len; int * val; } ;
typedef TYPE_1__ krb5_addresses ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (char*,char*) ;
 int * FUNC_1 (unsigned int,int) ;
 scalar_t__ VAR_7 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct ifaddrs*) ;
 int FUNC_4 (struct ifaddrs**) ;
 scalar_t__ FUNC_5 (int ,int *,TYPE_1__*) ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 (int ,TYPE_1__*) ;
 scalar_t__ FUNC_8 (int ,TYPE_1__*) ;
 int FUNC_9 (int ,scalar_t__,char*,...) ;
 scalar_t__ FUNC_10 (int ,int *,int *) ;
 scalar_t__ FUNC_11 (int *) ;
 scalar_t__ FUNC_12 (int *) ;
 scalar_t__ FUNC_13 (int *,struct sockaddr*,int) ;
 int FUNC_14 (struct sockaddr*,int ,int) ;
 int FUNC_15 (scalar_t__) ;

__attribute__((used)) static krb5_error_code
FUNC_16 (krb5_context VAR_8, krb5_addresses *VAR_9, int VAR_10)
{
    struct sockaddr VAR_11;
    struct ifaddrs *VAR_12, *VAR_13;
    krb5_error_code VAR_14 = VAR_1;
    unsigned int VAR_15, VAR_16;
    krb5_addresses VAR_17;

    if (FUNC_4(&VAR_12) == -1) {
 VAR_14 = VAR_7;
 FUNC_9(VAR_8, VAR_14, "getifaddrs: %s", FUNC_15(VAR_14));
 return (VAR_14);
    }

    FUNC_14(&VAR_11, 0, sizeof(VAR_11));


    for (VAR_13 = VAR_12, VAR_15 = 0; VAR_13 != ((void*)0); VAR_13 = VAR_13->ifa_next, VAR_15++)
              ;

    if (VAR_15 == 0) {
 FUNC_3(VAR_12);
 FUNC_9(VAR_8, VAR_1, FUNC_0("no addresses found", ""));
 return (VAR_1);
    }

    if (VAR_10 & VAR_2) {

 VAR_14 = FUNC_8(VAR_8, &VAR_17);
 if(VAR_14)
     return VAR_14;
    }


    VAR_9->val = FUNC_1(VAR_15, sizeof(*VAR_9->val));
    if (VAR_9->val == ((void*)0)) {
 FUNC_7(VAR_8, &VAR_17);
 FUNC_3(VAR_12);
 FUNC_9(VAR_8, VAR_0, FUNC_0("malloc: out of memory", ""));
 return VAR_0;
    }


    for (VAR_13 = VAR_12, VAR_16 = 0; VAR_13 != ((void*)0); VAR_13 = VAR_13->ifa_next) {
 if ((VAR_13->ifa_flags & VAR_4) == 0)
     continue;
 if (VAR_13->ifa_addr == ((void*)0))
     continue;
 if (FUNC_13(VAR_13->ifa_addr, &VAR_11, sizeof(VAR_11)) == 0)
     continue;
 if (FUNC_12(VAR_13->ifa_addr))
     continue;
 if (FUNC_11(VAR_13->ifa_addr) && (VAR_10 & VAR_5) == 0)

     continue;

 VAR_14 = FUNC_10(VAR_8, VAR_13->ifa_addr, &VAR_9->val[VAR_16]);
 if (VAR_14) {






     continue;
 }

 if((VAR_10 & VAR_2) &&
    FUNC_5(VAR_8, &VAR_9->val[VAR_16], &VAR_17)) {
     FUNC_6(VAR_8, &VAR_9->val[VAR_16]);
     VAR_10 &= ~VAR_6;


     continue;
 }

 VAR_16++;
    }





    if ((VAR_10 & VAR_6) != 0 && VAR_16 == 0) {
 for (VAR_13 = VAR_12; VAR_13 != ((void*)0); VAR_13 = VAR_13->ifa_next) {
     if ((VAR_13->ifa_flags & VAR_4) == 0)
  continue;
     if (VAR_13->ifa_addr == ((void*)0))
  continue;
     if (FUNC_13(VAR_13->ifa_addr, &VAR_11, sizeof(VAR_11)) == 0)
  continue;
     if (FUNC_12(VAR_13->ifa_addr))
  continue;
     if (!FUNC_11(VAR_13->ifa_addr))
  continue;
     if ((VAR_13->ifa_flags & VAR_3) == 0)

  continue;
     VAR_14 = FUNC_10(VAR_8,
     VAR_13->ifa_addr, &VAR_9->val[VAR_16]);
     if (VAR_14)
  continue;
     if((VAR_10 & VAR_2) &&
        FUNC_5(VAR_8, &VAR_9->val[VAR_16],
       &VAR_17)) {
  FUNC_6(VAR_8, &VAR_9->val[VAR_16]);
  continue;
     }
     VAR_16++;
 }
    }

    if (VAR_10 & VAR_2)
 FUNC_7(VAR_8, &VAR_17);
    FUNC_3(VAR_12);
    if (VAR_14) {
 FUNC_2(VAR_9->val);
 VAR_9->val = ((void*)0);
    } else
 VAR_9->len = VAR_16;
    return (VAR_14);
}
