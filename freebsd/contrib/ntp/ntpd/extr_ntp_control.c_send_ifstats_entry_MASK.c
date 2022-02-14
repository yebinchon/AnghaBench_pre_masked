
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_int32 ;
typedef scalar_t__ u_int ;
typedef scalar_t__ u_char ;
typedef int tag ;
struct TYPE_3__ {int flags; char const* name; int last_ttl; int num_mcast; int received; int sent; int notsent; scalar_t__ starttime; scalar_t__ peercnt; int ignore_packets; int bcast; int sin; } ;
typedef TYPE_1__ endpt ;


 scalar_t__ FUNC_0 (scalar_t__*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (scalar_t__*) ;
 int FUNC_2 (char*,scalar_t__) ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (char*,char const*,int ) ;
 int FUNC_5 (char*,scalar_t__) ;
 int FUNC_6 (char*,char const*,int ) ;
 scalar_t__ VAR_3 ;
 int FUNC_7 () ;
 int FUNC_8 (int) ;
 int FUNC_9 (char*,int,char const*,scalar_t__) ;
 char* FUNC_10 (int *) ;
 int FUNC_11 (char const*) ;

__attribute__((used)) static void
FUNC_12(
 endpt * VAR_4,
 u_int VAR_5
 )
{
 const char VAR_6[] = "addr.%u";
 const char VAR_7[] = "bcast.%u";
 const char VAR_8[] = "en.%u";
 const char VAR_9[] = "name.%u";
 const char VAR_10[] = "flags.%u";
 const char VAR_11[] = "tl.%u";
 const char VAR_12[] = "mc.%u";
 const char VAR_13[] = "rx.%u";
 const char VAR_14[] = "tx.%u";
 const char VAR_15[] = "txerr.%u";
 const char VAR_16[] = "pc.%u";
 const char VAR_17[] = "up.%u";
 char VAR_18[32];
 u_char VAR_19[VAR_0];
 int VAR_20;
 u_int32 VAR_21;
 u_int VAR_22;
 u_int VAR_23;
 const char *VAR_24;

 VAR_23 = FUNC_0(VAR_19);
 FUNC_1(VAR_19);
 VAR_21 = 0;
 VAR_20 = 0;
 while (VAR_23 > 0) {
  if (VAR_20 < 4) {
   VAR_21 = FUNC_7() ^ (FUNC_7() << 16);
   VAR_20 = 31;
  }
  VAR_22 = (VAR_21 & 0xf) % FUNC_0(VAR_19);
  VAR_21 >>= 4;
  VAR_20 -= 4;

  while (VAR_19[VAR_22])
   VAR_22 = (VAR_22 + 1) % FUNC_0(VAR_19);

  switch (VAR_22) {

  case 0:
   FUNC_9(VAR_18, sizeof(VAR_18), VAR_6, VAR_5);
   VAR_24 = FUNC_10(&VAR_4->sin);
   FUNC_6(VAR_18, VAR_24, FUNC_11(VAR_24));
   break;

  case 1:
   FUNC_9(VAR_18, sizeof(VAR_18), VAR_7, VAR_5);
   if (VAR_1 & VAR_4->flags)
    VAR_24 = FUNC_10(&VAR_4->bcast);
   else
    VAR_24 = "";
   FUNC_6(VAR_18, VAR_24, FUNC_11(VAR_24));
   break;

  case 2:
   FUNC_9(VAR_18, sizeof(VAR_18), VAR_8, VAR_5);
   FUNC_3(VAR_18, !VAR_4->ignore_packets);
   break;

  case 3:
   FUNC_9(VAR_18, sizeof(VAR_18), VAR_9, VAR_5);
   FUNC_4(VAR_18, VAR_4->name, FUNC_11(VAR_4->name));
   break;

  case 4:
   FUNC_9(VAR_18, sizeof(VAR_18), VAR_10, VAR_5);
   FUNC_2(VAR_18, (u_int)VAR_4->flags);
   break;

  case 5:
   FUNC_9(VAR_18, sizeof(VAR_18), VAR_11, VAR_5);
   FUNC_3(VAR_18, VAR_4->last_ttl);
   break;

  case 6:
   FUNC_9(VAR_18, sizeof(VAR_18), VAR_12, VAR_5);
   FUNC_3(VAR_18, VAR_4->num_mcast);
   break;

  case 7:
   FUNC_9(VAR_18, sizeof(VAR_18), VAR_13, VAR_5);
   FUNC_3(VAR_18, VAR_4->received);
   break;

  case 8:
   FUNC_9(VAR_18, sizeof(VAR_18), VAR_14, VAR_5);
   FUNC_3(VAR_18, VAR_4->sent);
   break;

  case 9:
   FUNC_9(VAR_18, sizeof(VAR_18), VAR_15, VAR_5);
   FUNC_3(VAR_18, VAR_4->notsent);
   break;

  case 10:
   FUNC_9(VAR_18, sizeof(VAR_18), VAR_16, VAR_5);
   FUNC_5(VAR_18, VAR_4->peercnt);
   break;

  case 11:
   FUNC_9(VAR_18, sizeof(VAR_18), VAR_17, VAR_5);
   FUNC_5(VAR_18, VAR_3 - VAR_4->starttime);
   break;
  }
  VAR_19[VAR_22] = VAR_2;
  VAR_23--;
 }
 FUNC_8((int)VAR_5);
}
