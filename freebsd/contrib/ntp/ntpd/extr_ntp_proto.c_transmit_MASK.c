
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct peer {int hpoll; scalar_t__ outdate; scalar_t__ timelastrec; int reach; int cast_flags; scalar_t__ unreach; scalar_t__ ttl; scalar_t__ burst; int flags; scalar_t__ retry; scalar_t__ hmode; int maxpoll; int ppoll; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 void* VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_0 (struct peer*,int,int,int ) ;
 void* VAR_16 ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_17 ;
 int FUNC_2 (int ,char*) ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_3 (struct peer*,char*) ;
 scalar_t__ VAR_20 ;
 int FUNC_4 (struct peer*) ;
 int FUNC_5 (struct peer*) ;
 int FUNC_6 (struct peer*,int) ;
 int FUNC_7 (struct peer*) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (int ,struct peer*,char*) ;
 scalar_t__ FUNC_10 (struct peer*) ;
 scalar_t__ VAR_21 ;
 scalar_t__ VAR_22 ;
 int VAR_23 ;
 scalar_t__ VAR_24 ;
 int VAR_25 ;
 scalar_t__ VAR_26 ;
 scalar_t__ VAR_27 ;
 int FUNC_11 (struct peer*) ;

void
FUNC_12(
 struct peer *VAR_28
 )
{
 u_char VAR_29;







 VAR_29 = VAR_28->hpoll;





 if (VAR_28->outdate > VAR_28->timelastrec && !VAR_28->reach)
  VAR_28->ppoll = VAR_28->maxpoll;





 if (VAR_28->cast_flags & (VAR_8 | VAR_9)) {
  VAR_28->outdate = VAR_16;
  FUNC_6(VAR_28, VAR_29);
  if (VAR_22 != VAR_4)
   FUNC_5(VAR_28);
  return;
 }
 if (VAR_28->cast_flags & VAR_7) {
  VAR_28->outdate = VAR_16;
  FUNC_6(VAR_28, VAR_29);
  if (VAR_28->unreach > VAR_21) {
   VAR_28->unreach = 0;
   VAR_28->ttl = 0;
   FUNC_5(VAR_28);
  } else if ( VAR_26 < VAR_24
      || VAR_19 < VAR_23) {
   if (VAR_28->ttl < VAR_27)
    VAR_28->ttl++;
   FUNC_5(VAR_28);
  }
  VAR_28->unreach++;
  return;
 }
 if (VAR_28->cast_flags & VAR_10) {
  VAR_28->outdate = VAR_16;
  FUNC_6(VAR_28, VAR_29);
  if ( (VAR_19 <= 2 * VAR_23)
      && ( VAR_19 < VAR_23
   || VAR_26 < VAR_24))
   FUNC_7(VAR_28);
  return;
 }






 if (VAR_28->burst == 0) {
  u_char VAR_30;






  VAR_30 = VAR_28->reach;
  VAR_28->outdate = VAR_16;
  VAR_28->unreach++;
  VAR_28->reach <<= 1;
  if (!VAR_28->reach) {






   FUNC_0(VAR_28, 0., 0., VAR_6);
   if (VAR_30) {
    FUNC_4(VAR_28);
    FUNC_9(VAR_15, VAR_28, ((void*)0));
   }
   if ( (VAR_28->flags & VAR_2)
       && VAR_28->retry == 0)
    VAR_28->retry = VAR_12;
  } else {
   VAR_29 = VAR_25;
   if (!(VAR_28->flags & VAR_3))
    VAR_28->unreach = 0;
   if ( (VAR_28->flags & VAR_0)
       && VAR_28->retry == 0
       && !FUNC_4(VAR_28))
    VAR_28->retry = VAR_12;
  }
  if (VAR_28->unreach >= VAR_13) {
   VAR_29++;

   if (!(VAR_28->flags & (VAR_1 | VAR_3))) {
    FUNC_9(VAR_14, VAR_28, "timeout");
    FUNC_3(VAR_28, "TIME");
    FUNC_11(VAR_28);
    return;
   }
   if ( (VAR_28->flags & VAR_3)
       && (VAR_19 > VAR_23)
       && FUNC_10(VAR_28)) {
    FUNC_9(VAR_14, VAR_28, "timeout");
    FUNC_3(VAR_28, "TIME");
    FUNC_11(VAR_28);
    return;
   }
  }
 } else {
  VAR_28->burst--;
  if (VAR_28->burst == 0) {






   if (VAR_17) {
    VAR_20--;
    if (VAR_20 == 0) {
     FUNC_2(VAR_5,
         "ntpd: no servers found");
     if (!VAR_18)
      FUNC_8(
          "ntpd: no servers found\n");
     FUNC_1 (0);
    }
   }
  }
 }
 if (VAR_28->retry > 0)
  VAR_28->retry--;




 FUNC_6(VAR_28, VAR_29);
 if (VAR_28->hmode != VAR_11)
  FUNC_5(VAR_28);

 return;
}
