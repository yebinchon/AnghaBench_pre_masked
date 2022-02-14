
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int u_short ;
typedef scalar_t__ u_int ;
struct parse {int dummy; } ;
struct TYPE_5__ {char* name; scalar_t__ uptime; scalar_t__ send_errors; scalar_t__ sent; scalar_t__ ttl; scalar_t__ received; scalar_t__ peer_count; scalar_t__ mcast_count; scalar_t__ flags; scalar_t__ enabled; int bcast; int addr; } ;
typedef TYPE_1__ ifstats_row ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int VAR_3 ;
 int FUNC_1 (TYPE_1__) ;
 int FUNC_2 (int*,TYPE_1__*,int *) ;
 int VAR_4 ;
 int FUNC_3 (char*,int *) ;
 int FUNC_4 (int ,int ,int,int ,int *,int *,size_t*,char const**) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,char*,...) ;
 int FUNC_7 (char*,char*,size_t) ;
 scalar_t__ FUNC_8 (size_t*,char const**,char**,char**) ;
 int FUNC_9 (char*,char const*,scalar_t__*) ;
 int VAR_5 ;
 size_t FUNC_10 (char*) ;
 int FUNC_11 (int *,scalar_t__,int*,TYPE_1__*) ;

__attribute__((used)) static void
FUNC_12(
 struct parse * VAR_6,
 FILE * VAR_7
 )
{
 const char VAR_8[] = "addr.%u";
 const char VAR_9[] = "bcast.%u";
 const char VAR_10[] = "en.%u";
 const char VAR_11[] = "flags.%u";
 const char VAR_12[] = "mc.%u";
 const char VAR_13[] = "name.%u";
 const char VAR_14[] = "pc.%u";
 const char VAR_15[] = "rx.%u";
 const char VAR_16[] = "tl.%u";
 const char VAR_17[] = "tx.%u";
 const char VAR_18[] = "txerr.%u";
 const char VAR_19[] = "up.%u";
 const char * VAR_20;
 int VAR_21;
 size_t VAR_22;
 u_short VAR_23;
 char * VAR_24;
 char * VAR_25;
 int VAR_26;
 u_int VAR_27;
 ifstats_row VAR_28;
 int VAR_29;
 size_t VAR_30;

 VAR_21 = FUNC_4(VAR_0, 0, VAR_3, 0, ((void*)0), &VAR_23,
         &VAR_22, &VAR_20);
 if (VAR_21)
  return;

 FUNC_6(VAR_7,
  "    interface name                                        send\n"
  " #  address/broadcast     drop flag ttl mc received sent failed peers   uptime\n"
  "==============================================================================\n");


 FUNC_1(VAR_28);
 VAR_26 = 0;
 VAR_27 = 0;
 while (FUNC_8(&VAR_22, &VAR_20, &VAR_24, &VAR_25)) {
  FUNC_0(VAR_24 && VAR_25);
  if (VAR_4 > 1)
      FUNC_6(&VAR_5, "nextvar gave: %s = %s\n", VAR_24, VAR_25);
  VAR_29 = VAR_1;
  switch(VAR_24[0]) {

  case 'a':
   if (1 == FUNC_9(VAR_24, VAR_8, &VAR_27) &&
       FUNC_3(VAR_25, &VAR_28.addr))
    VAR_29 = VAR_3;
   break;

  case 'b':
   if (1 == FUNC_9(VAR_24, VAR_9, &VAR_27) &&
       ('\0' == *VAR_25 ||
        FUNC_3(VAR_25, &VAR_28.bcast)))
    VAR_29 = VAR_3;
   break;

  case 'e':
   if (1 == FUNC_9(VAR_24, VAR_10, &VAR_27) &&
       1 == FUNC_9(VAR_25, "%d", &VAR_28.enabled))
    VAR_29 = VAR_3;
   break;

  case 'f':
   if (1 == FUNC_9(VAR_24, VAR_11, &VAR_27) &&
       1 == FUNC_9(VAR_25, "0x%x", &VAR_28.flags))
    VAR_29 = VAR_3;
   break;

  case 'm':
   if (1 == FUNC_9(VAR_24, VAR_12, &VAR_27) &&
       1 == FUNC_9(VAR_25, "%u", &VAR_28.mcast_count))
    VAR_29 = VAR_3;
   break;

  case 'n':
   if (1 == FUNC_9(VAR_24, VAR_13, &VAR_27)) {

    VAR_30 = FUNC_10(VAR_25);
    if (VAR_30 >= 2 &&
        VAR_30 - 2 < sizeof(VAR_28.name)) {
     VAR_30 -= 2;
     FUNC_7(VAR_28.name, VAR_25 + 1, VAR_30);
     VAR_28.name[VAR_30] = '\0';
     VAR_29 = VAR_3;
    }
   }
   break;

  case 'p':
   if (1 == FUNC_9(VAR_24, VAR_14, &VAR_27) &&
       1 == FUNC_9(VAR_25, "%u", &VAR_28.peer_count))
    VAR_29 = VAR_3;
   break;

  case 'r':
   if (1 == FUNC_9(VAR_24, VAR_15, &VAR_27) &&
       1 == FUNC_9(VAR_25, "%u", &VAR_28.received))
    VAR_29 = VAR_3;
   break;

  case 't':
   if (1 == FUNC_9(VAR_24, VAR_16, &VAR_27) &&
       1 == FUNC_9(VAR_25, "%u", &VAR_28.ttl))
    VAR_29 = VAR_3;
   else if (1 == FUNC_9(VAR_24, VAR_17, &VAR_27) &&
     1 == FUNC_9(VAR_25, "%u", &VAR_28.sent))
    VAR_29 = VAR_3;
   else if (1 == FUNC_9(VAR_24, VAR_18, &VAR_27) &&
     1 == FUNC_9(VAR_25, "%u", &VAR_28.send_errors))
    VAR_29 = VAR_3;
   break;

  case 'u':
   if (1 == FUNC_9(VAR_24, VAR_19, &VAR_27) &&
       1 == FUNC_9(VAR_25, "%u", &VAR_28.uptime))
    VAR_29 = VAR_3;
   break;
  }

  if (VAR_29) {

   FUNC_11(VAR_7, VAR_27, &VAR_26, &VAR_28);

   FUNC_2(&VAR_26, &VAR_28, VAR_7);
  }
 }
 if (VAR_26 != VAR_2)
  FUNC_6(VAR_7, "Warning: incomplete row with %d (of %d) fields\n",
   VAR_26, VAR_2);

 FUNC_5(VAR_7);
}
