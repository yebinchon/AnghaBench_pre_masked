
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef int u_int ;
typedef int u_char ;
typedef int ttl ;
struct pkt {int exten; int refid; int rootdisp; int rootdelay; int precision; int ppoll; int stratum; int li_vn_mode; int xmt; int rec; int org; } ;
struct TYPE_16__ {int sa; } ;
struct interface {int last_ttl; TYPE_2__ sin; struct interface* mclink; int sent; int notsent; int fd; } ;
typedef TYPE_2__ sockaddr_u ;
struct TYPE_15__ {int member_0; } ;
struct TYPE_17__ {int member_1; TYPE_1__ member_0; } ;
typedef TYPE_3__ l_fp ;
typedef struct interface endpt ;
typedef int cttl ;


 int FUNC_0 (TYPE_2__*) ;


 int FUNC_1 (int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (struct interface*,int ,struct pkt*,size_t,TYPE_2__*) ;
 struct interface* VAR_6 ;
 struct interface* VAR_7 ;
 int FUNC_9 (int ,char*,int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_10 (TYPE_2__*,TYPE_2__*,int *,int *,int *,TYPE_3__*,int ,int ,int ,int ,int ,int ,int ,int ,int ,scalar_t__,int *) ;
 int FUNC_11 (int ,char*,int ,int ,int *,int ) ;
 int FUNC_12 (int ,int ,int ,void*,int) ;
 int FUNC_13 (TYPE_2__*,struct interface*,struct pkt*) ;
 int FUNC_14 (TYPE_2__*) ;

void
FUNC_15(
 sockaddr_u * VAR_10,
 struct interface * VAR_11,
 int VAR_12,
 struct pkt * VAR_13,
 int VAR_14
 )
{
 endpt * VAR_15;
 int VAR_16;
 int VAR_17;
 int VAR_18;
 u_char VAR_19;
 l_fp VAR_20 = { 0 , 0 };

 VAR_16 = FUNC_3(VAR_10);
 if (!VAR_16)
  VAR_15 = VAR_11;
 else
  VAR_15 = (FUNC_2(VAR_10))
     ? VAR_6
     : VAR_7;

 if (((void*)0) == VAR_15) {




  FUNC_1(2, ("%ssendpkt(dst=%s, ttl=%d, len=%d): no interface - IGNORED\n",
       VAR_16 ? "\tMCAST\t***** " : "",
       FUNC_14(VAR_10), VAR_12, VAR_14));
  return;
 }

 do {
  FUNC_1(2, ("%ssendpkt(%d, dst=%s, src=%s, ttl=%d, len=%d)\n",
       VAR_16 ? "\tMCAST\t***** " : "", VAR_15->fd,
       FUNC_14(VAR_10), FUNC_14(&VAR_15->sin), VAR_12, VAR_14));
  VAR_17 = FUNC_11(VAR_15->fd, (char *)VAR_13, (u_int)VAR_14, 0,
       &VAR_10->sa, FUNC_7(VAR_10));

  if (VAR_17 == -1) {
   VAR_15->notsent++;
   VAR_8++;
  } else {
   VAR_15->sent++;
   VAR_9++;
  }
  if (VAR_16)
   VAR_15 = VAR_15->mclink;
 } while (VAR_16 && VAR_15 != ((void*)0));


 FUNC_10(VAR_15 ? &VAR_15->sin : ((void*)0), VAR_10,
   &VAR_13->org, &VAR_13->rec, &VAR_13->xmt, &VAR_20,
   FUNC_5(VAR_13->li_vn_mode),
   FUNC_6(VAR_13->li_vn_mode),
   FUNC_4(VAR_13->li_vn_mode),
   VAR_13->stratum,
   VAR_13->ppoll, VAR_13->precision,
   VAR_13->rootdelay, VAR_13->rootdisp, VAR_13->refid,
   VAR_14 - VAR_5, (u_char *)&VAR_13->exten);

 return;
}
