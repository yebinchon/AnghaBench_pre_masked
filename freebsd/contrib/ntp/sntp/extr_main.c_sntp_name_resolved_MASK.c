
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u_int ;
struct dns_ctx {char* name; int flags; } ;
struct addrinfo {char* ai_canonname; int ai_family; int ai_addr; int ai_addrlen; struct addrinfo* ai_next; } ;
struct TYPE_4__ {int addr; struct dns_ctx* dctx; } ;
typedef TYPE_1__ sent_pkt ;
typedef int SOCKET ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (struct addrinfo const*) ;
 TYPE_1__* FUNC_3 (int) ;
 int VAR_3 ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ,char*,char*,char*) ;
 char* FUNC_6 (int) ;
 int VAR_4 ;
 int FUNC_7 (int *,int ,size_t) ;
 int FUNC_8 (int ,char*,char*) ;
 size_t FUNC_9 (int ,int) ;
 int FUNC_10 (int ,char*,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_11 (int ,struct dns_ctx*,TYPE_1__*,scalar_t__) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;

void
FUNC_12(
 int VAR_10,
 int VAR_11,
 void * VAR_12,
 const char * VAR_13,
 const char * VAR_14,
 const struct addrinfo * VAR_15,
 const struct addrinfo * VAR_16
 )
{
 struct dns_ctx * VAR_17;
 sent_pkt * VAR_18;
 const struct addrinfo * VAR_19;
 SOCKET VAR_20;
 u_int VAR_21;
 u_int VAR_22;
 u_int VAR_23;
 size_t VAR_24;

 VAR_21 = 0;
 VAR_22 = 0;
 VAR_17 = VAR_12;
 if (VAR_10) {







   FUNC_5(VAR_9, "%s lookup error %s\n",
    VAR_17->name, FUNC_6(VAR_10));
 } else {
  FUNC_0(3, ("%s [%s]\n", VAR_17->name,
     (VAR_16->ai_canonname != ((void*)0))
         ? VAR_16->ai_canonname
         : ""));

  for (VAR_19 = VAR_16; VAR_19 != ((void*)0); VAR_19 = VAR_19->ai_next) {

   if (FUNC_2(VAR_19))
    continue;

   switch (VAR_19->ai_family) {

   case 129:
    VAR_20 = VAR_7;
    VAR_23 = VAR_21;
    VAR_21++;
    break;

   case 128:
    if (!VAR_4)
     continue;

    VAR_20 = VAR_8;
    VAR_23 = VAR_22;
    VAR_22++;
    break;

   default:
    FUNC_10(VAR_2, "sntp_name_resolved: unexpected ai_family: %d",
     VAR_19->ai_family);
    FUNC_4(1);
    break;
   }





   ++VAR_6;


   if (VAR_17->flags & VAR_0) {
    VAR_18 = FUNC_3(sizeof(*VAR_18));
    VAR_18->dctx = VAR_17;
    VAR_24 = FUNC_9(VAR_19->ai_addrlen, sizeof(VAR_18->addr));
    FUNC_7(&VAR_18->addr, VAR_19->ai_addr, VAR_24);
    FUNC_11(VAR_20, VAR_17, VAR_18, VAR_23);
   }
  }
 }

 --VAR_5;
 FUNC_1();
}
