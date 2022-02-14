
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct addrinfo {int ai_socktype; int ai_addrlen; int ai_addr; int ai_protocol; int ai_family; struct addrinfo* ai_next; } ;
typedef int portstr ;
typedef scalar_t__ krb5_socket_t ;
struct TYPE_10__ {int hostname; } ;
typedef TYPE_1__ krb5_krbhst_info ;
struct TYPE_11__ {scalar_t__ length; } ;
typedef TYPE_2__ krb5_data ;
typedef TYPE_3__* krb5_context ;
typedef int hints ;
struct TYPE_12__ {int kdc_timeout; int http_proxy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char**,char*,int ) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__,int ,int ) ;
 int VAR_5 ;
 int FUNC_3 (char*) ;
 int FUNC_4 (struct addrinfo*) ;
 int FUNC_5 (char*,char*,struct addrinfo*,struct addrinfo**) ;
 int FUNC_6 (int) ;
 int FUNC_7 (char*,int ) ;
 int FUNC_8 (int,int ) ;
 int FUNC_9 (struct addrinfo*,int ,int) ;
 int FUNC_10 (int ) ;
 scalar_t__ VAR_6 ;
 int FUNC_11 (scalar_t__) ;
 int FUNC_12 (scalar_t__) ;
 int FUNC_13 (scalar_t__,int ,char*,TYPE_2__ const*,TYPE_2__*) ;
 int FUNC_14 (char*,int,char*,int) ;
 scalar_t__ FUNC_15 (int ,int,int ) ;
 char* FUNC_16 (char*,char) ;
 char* FUNC_17 (int ) ;
 scalar_t__ FUNC_18 (char*,char*,int) ;

__attribute__((used)) static int
FUNC_19 (krb5_context VAR_7,
  const krb5_krbhst_info *VAR_8,
  const krb5_data *VAR_9,
  krb5_data *VAR_10)
{
    char *VAR_11 = FUNC_17(VAR_7->http_proxy);
    char *VAR_12 = VAR_11;
    char *VAR_13 = ((void*)0);
    char *VAR_14;
    struct addrinfo VAR_15;
    struct addrinfo *VAR_16, *VAR_17;
    int VAR_18;
    krb5_socket_t VAR_19 = VAR_6;
    char VAR_20[VAR_1];

    if (VAR_12 == ((void*)0))
 return VAR_0;
    if (FUNC_18 (VAR_12, "http://", 7) == 0)
 VAR_12 += 7;

    VAR_14 = FUNC_16(VAR_12, ':');
    if(VAR_14 != ((void*)0))
 *VAR_14++ = '\0';
    FUNC_9 (&VAR_15, 0, sizeof(VAR_15));
    VAR_15.ai_family = VAR_2;
    VAR_15.ai_socktype = VAR_4;
    FUNC_14 (VAR_20, sizeof(VAR_20), "%d",
       FUNC_10(FUNC_7 (VAR_14, FUNC_6(80))));
    VAR_18 = FUNC_5 (VAR_12, VAR_20, &VAR_15, &VAR_16);
    FUNC_3 (VAR_11);
    if (VAR_18)
 return FUNC_8(VAR_18, VAR_5);

    for (VAR_17 = VAR_16; VAR_17 != ((void*)0); VAR_17 = VAR_17->ai_next) {
 VAR_19 = FUNC_15 (VAR_17->ai_family, VAR_17->ai_socktype | VAR_3, VAR_17->ai_protocol);
 if (VAR_19 < 0)
     continue;
 FUNC_11(VAR_19);
 if (FUNC_2 (VAR_19, VAR_17->ai_addr, VAR_17->ai_addrlen) < 0) {
     FUNC_12 (VAR_19);
     continue;
 }
 break;
    }
    if (VAR_17 == ((void*)0)) {
 FUNC_4 (VAR_16);
 return 1;
    }
    FUNC_4 (VAR_16);

    VAR_18 = FUNC_0(&VAR_13, "http://%d/", VAR_8->hostname);
    if(VAR_18 < 0 || VAR_13 == ((void*)0)) {
 FUNC_1(VAR_19);
 return 1;
    }
    VAR_18 = FUNC_13(VAR_19, VAR_7->kdc_timeout,
        VAR_13, VAR_9, VAR_10);
    FUNC_12 (VAR_19);
    FUNC_3(VAR_13);
    if(VAR_18 == 0 && VAR_10->length != 0)
 return 0;
    return 1;
}
