
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32 ;
struct server {scalar_t__ filter_nextpt; scalar_t__ xmtcnt; scalar_t__ event_time; int srcadr; int xmt; } ;
struct pkt {int xmt; void** exten; int rec; int org; int reftime; void* refid; void* rootdisp; void* rootdelay; int precision; int ppoll; int stratum; int li_vn_mode; } ;
typedef int l_fp ;


 int FUNC_0 (int *,int *) ;
 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int ) ;
 int VAR_8 ;
 size_t FUNC_5 (int ,int *,size_t) ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int FUNC_6 (int *) ;
 void* FUNC_7 (int ) ;
 int FUNC_8 (char*,char*) ;
 int FUNC_9 (int *,struct pkt*,size_t) ;
 int FUNC_10 (struct server*,int ,int *,int ) ;
 char* FUNC_11 (int *) ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 int VAR_17 ;

__attribute__((used)) static void
FUNC_12(
 register struct server *VAR_18
 )
{
 struct pkt VAR_19;

 if (VAR_18->filter_nextpt < VAR_18->xmtcnt) {
  l_fp VAR_20;




  FUNC_2(&VAR_20);
  FUNC_10(VAR_18, 0, &VAR_20, 0);
 }

 if ((int)VAR_18->filter_nextpt >= VAR_15) {




  VAR_18->event_time = 0;
  VAR_9++;
  return;
 }

 if (VAR_11)
  FUNC_8("transmit(%s)\n", FUNC_11(&VAR_18->srcadr));





 VAR_19.li_vn_mode = FUNC_3(VAR_0,
      VAR_17, VAR_2);
 VAR_19.stratum = FUNC_4(VAR_8);
 VAR_19.ppoll = VAR_7;
 VAR_19.precision = VAR_5;
 VAR_19.rootdelay = FUNC_7(VAR_4);
 VAR_19.rootdisp = FUNC_7(VAR_3);
 VAR_19.refid = FUNC_7(VAR_6);
 FUNC_2(&VAR_19.reftime);
 FUNC_2(&VAR_19.org);
 FUNC_2(&VAR_19.rec);






 if (VAR_13) {
  size_t VAR_21;

  VAR_19.exten[0] = FUNC_7(VAR_14);
  FUNC_6(&VAR_18->xmt);
  FUNC_1(&VAR_18->xmt, VAR_12);
  FUNC_0(&VAR_18->xmt, &VAR_19.xmt);
  VAR_21 = FUNC_5(VAR_14, (u_int32 *)&VAR_19, VAR_1);
  FUNC_9(&VAR_18->srcadr, &VAR_19, (int)(VAR_1 + VAR_21));

  if (VAR_11 > 1)
   FUNC_8("transmit auth to %s\n",
      FUNC_11(&VAR_18->srcadr));
 } else {
  FUNC_6(&(VAR_18->xmt));
  FUNC_0(&VAR_18->xmt, &VAR_19.xmt);
  FUNC_9(&VAR_18->srcadr, &VAR_19, VAR_1);

  if (VAR_11 > 1)
   FUNC_8("transmit to %s\n", FUNC_11(&VAR_18->srcadr));
 }




 VAR_18->event_time = VAR_10 + VAR_16;
 VAR_18->xmtcnt++;
}
