
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


typedef int u_int32 ;
typedef int u_int ;
typedef scalar_t__ u_char ;
struct peer {scalar_t__ cast_flags; int associd; int flags; scalar_t__ minpoll; scalar_t__ maxpoll; scalar_t__ hpoll; scalar_t__ keyid; int ttl; scalar_t__ version; scalar_t__ hmode; int srcadr; TYPE_1__* dstadr; void* timereceived; void* timereachable; void* timereset; int precision; void* ident; void* hostname; } ;
typedef int sockaddr_u ;
typedef scalar_t__ keyid_t ;
struct TYPE_9__ {int sin; int fd; } ;
typedef TYPE_1__ endpt ;


 TYPE_1__* FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int ,struct peer*,int ) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_6 (int *) ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_7 (struct peer*,int ,int ) ;
 int VAR_15 ;
 int VAR_16 ;
 int * VAR_17 ;
 int * VAR_18 ;
 int VAR_19 ;
 scalar_t__ VAR_20 ;
 void* VAR_21 ;
 int FUNC_8 (TYPE_1__*,int *) ;
 int FUNC_9 (TYPE_1__*,int *) ;
 void* FUNC_10 (char const*) ;
 struct peer* FUNC_11 (int *,char const*,struct peer*,scalar_t__,scalar_t__,int*) ;
 TYPE_1__* FUNC_12 (int *) ;
 int FUNC_13 (struct peer*,int ) ;
 int FUNC_14 () ;
 int FUNC_15 (TYPE_1__*) ;
 scalar_t__ FUNC_16 (scalar_t__,int ) ;
 scalar_t__ FUNC_17 (scalar_t__,int ) ;
 scalar_t__ VAR_22 ;
 int FUNC_18 (int ,struct peer*,char*,int) ;
 int FUNC_19 (int ,char*,...) ;
 int VAR_23 ;
 int VAR_24 ;
 int FUNC_20 (struct peer*,char*) ;
 int VAR_25 ;
 scalar_t__ VAR_26 ;
 int * VAR_27 ;
 int * VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int FUNC_21 (struct peer*) ;
 int FUNC_22 (int *,int ,int ) ;
 int * FUNC_23 (struct peer*,int *,TYPE_1__*) ;
 int FUNC_24 (struct peer*,int *) ;
 char const* FUNC_25 (int *) ;
 int VAR_32 ;

struct peer *
FUNC_26(
 sockaddr_u * VAR_33,
 const char * VAR_34,
 endpt * VAR_35,
 int VAR_36,
 u_char VAR_37,
 u_char VAR_38,
 u_char VAR_39,
 u_char VAR_40,
 u_int VAR_41,
 u_char VAR_42,
 u_int32 VAR_43,
 keyid_t VAR_44,
 const char * VAR_45
 )
{
 struct peer * VAR_46;
 u_int VAR_47;
 int VAR_48 = 0;


 FUNC_1(VAR_33);
 FUNC_3(((void*)0) == VAR_34 || (VAR_7 & VAR_42));
 if (VAR_35 != ((void*)0)) {
  VAR_46 = FUNC_11(VAR_33, VAR_34, ((void*)0), VAR_37,
     VAR_42, &VAR_48);
  while (VAR_46 != ((void*)0)) {
   if ( VAR_46->dstadr == VAR_35
       || ( (VAR_5 & VAR_42)
    && (VAR_5 & VAR_46->cast_flags)))
    break;

   if (VAR_35 == FUNC_0(VAR_33) &&
       VAR_46->dstadr == FUNC_12(VAR_33))
    break;

   VAR_46 = FUNC_11(VAR_33, VAR_34, VAR_46,
      VAR_37, VAR_42, &VAR_48);
  }
 } else {

  VAR_46 = FUNC_11(VAR_33, VAR_34, ((void*)0), VAR_37,
     VAR_42, &VAR_48);
 }







 if (VAR_46 != ((void*)0)) {
  FUNC_2(2, ("newpeer(%s) found existing association\n",
   (VAR_34)
       ? VAR_34
       : FUNC_25(VAR_33)));
  return ((void*)0);
 }

FUNC_2(1, ("newpeer(%s) found no existing and %d other associations\n",
  (VAR_34)
      ? VAR_34
      : FUNC_25(VAR_33),
  VAR_48));


 if (VAR_36 > -1) {
  if (VAR_48 + 1 > VAR_36) {
   FUNC_2(2, ("newpeer(%s) denied - ippeerlimit %d\n",
    (VAR_34)
        ? VAR_34
        : FUNC_25(VAR_33),
    VAR_36));
   return ((void*)0);
  }
 } else {
  FUNC_2(1, ("newpeer(%s) - ippeerlimit %d ignored\n",
   (VAR_34)
       ? VAR_34
       : FUNC_25(VAR_33),
   VAR_36));
 }





 if (VAR_26 == 0)
  FUNC_14();
 FUNC_7(VAR_46, VAR_25, VAR_23);
 FUNC_3(VAR_46 != ((void*)0));
 VAR_26--;
 VAR_24++;
 if (VAR_0 & VAR_41)
  VAR_31++;




 VAR_46->associd = VAR_20;
 if (++VAR_20 == 0)
  ++VAR_20;

 VAR_46->srcadr = *VAR_33;
 if (VAR_34 != ((void*)0))
  VAR_46->hostname = FUNC_10(VAR_34);
 VAR_46->hmode = VAR_37;
 VAR_46->version = VAR_38;
 VAR_46->flags = VAR_41;
 VAR_46->cast_flags = VAR_42;
 FUNC_24(VAR_46,
         FUNC_23(VAR_46, VAR_33, VAR_35));
 if (VAR_39 == 0)
  VAR_46->minpoll = VAR_12;
 else
  VAR_46->minpoll = FUNC_17(VAR_39, VAR_11);
 if (VAR_40 == 0)
  VAR_46->maxpoll = VAR_9;
 else
  VAR_46->maxpoll = FUNC_16(VAR_40, VAR_13);
 if (VAR_46->minpoll > VAR_46->maxpoll)
  VAR_46->minpoll = VAR_46->maxpoll;

 if (VAR_46->dstadr != ((void*)0))
  FUNC_2(3, ("newpeer(%s): using fd %d and our addr %s\n",
   FUNC_25(VAR_33), VAR_46->dstadr->fd,
   FUNC_25(&VAR_46->dstadr->sin)));
 else
  FUNC_2(3, ("newpeer(%s): local interface currently not bound\n",
   FUNC_25(VAR_33)));




 if ((VAR_4 & VAR_42) && VAR_46->dstadr != ((void*)0))
  FUNC_8(VAR_46->dstadr, VAR_33);




 if ((VAR_6 & VAR_42) && VAR_46->dstadr != ((void*)0))
  FUNC_9(VAR_46->dstadr, VAR_33);





 VAR_46->ttl = VAR_43;
 VAR_46->keyid = VAR_44;
 if (VAR_45 != ((void*)0))
  VAR_46->ident = FUNC_10(VAR_45);
 VAR_46->precision = VAR_32;
 VAR_46->hpoll = VAR_46->minpoll;
 if (VAR_42 & VAR_3)
  FUNC_20(VAR_46, "ACST");
 else if (VAR_42 & VAR_7)
  FUNC_20(VAR_46, "POOL");
 else if (VAR_42 & VAR_6)
  FUNC_20(VAR_46, "MCST");
 else if (VAR_42 & VAR_4)
  FUNC_20(VAR_46, "BCST");
 else
  FUNC_20(VAR_46, "INIT");
 if (VAR_22)
  VAR_30++;




 VAR_46->timereset = VAR_21;
 VAR_46->timereachable = VAR_21;
 VAR_46->timereceived = VAR_21;

 if (FUNC_4(&VAR_46->srcadr)) {
  FUNC_19(VAR_2, "refclock %s isn't supported. ntpd was compiled without refclock support.",
   FUNC_25(&VAR_46->srcadr));
  FUNC_24(VAR_46, ((void*)0));
  FUNC_13(VAR_46, 0);
  return ((void*)0);

 }




 VAR_47 = FUNC_6(&VAR_46->srcadr);
 FUNC_5(VAR_27[VAR_47], VAR_46, VAR_15);
 VAR_28[VAR_47]++;
 VAR_47 = VAR_46->associd & VAR_8;
 FUNC_5(VAR_17[VAR_47], VAR_46, VAR_16);
 VAR_18[VAR_47]++;
 FUNC_5(VAR_29, VAR_46, VAR_23);

 FUNC_22(&VAR_46->srcadr, 0, 0);
 FUNC_18(VAR_14, VAR_46, "assoc %d", VAR_46->associd);
 FUNC_2(1, ("newpeer: %s->%s mode %u vers %u poll %u %u flags 0x%x 0x%x ttl %u key %08x\n",
     FUNC_15(VAR_46->dstadr), FUNC_25(&VAR_46->srcadr), VAR_46->hmode,
     VAR_46->version, VAR_46->minpoll, VAR_46->maxpoll, VAR_46->flags,
     VAR_46->cast_flags, VAR_46->ttl, VAR_46->keyid));
 return VAR_46;
}
