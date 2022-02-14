
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int u_int ;
struct uni_msg {int dummy; } ;
struct TYPE_13__ {int * cause; } ;
struct TYPE_15__ {int cref; int flag; } ;
struct TYPE_12__ {TYPE_6__ cref; } ;
struct TYPE_16__ {int flag; int epref; int state; } ;
struct TYPE_11__ {int epstate; TYPE_7__ epref; int cause; TYPE_7__ callstate; } ;
struct TYPE_10__ {TYPE_7__ epref; } ;
struct TYPE_14__ {TYPE_4__ release_compl; TYPE_3__ hdr; TYPE_2__ status; TYPE_1__ status_enq; } ;
struct uni_all {int mtype; TYPE_5__ u; } ;
struct uni {int cx; } ;
struct call {int dummy; } ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (TYPE_7__) ;
 int FUNC_2 (TYPE_7__,int ) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (TYPE_7__,int ,int) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (struct uni_all*,int const,TYPE_6__*) ;
 int VAR_0 ;
 int VAR_1 ;
 struct uni_all* FUNC_7 () ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_8 (struct uni_all*) ;




 int FUNC_9 (struct uni*,int ,int,char*,int) ;
 struct call* FUNC_10 (struct uni*,int ,int ,int ) ;
 int FUNC_11 (struct uni_msg*,struct uni_all*,int *) ;
 scalar_t__ FUNC_12 (int ,int ) ;
 int FUNC_13 (struct call*,int ,int ,struct uni_msg*,struct uni_all*) ;
 int FUNC_14 (struct uni_msg*) ;
 int FUNC_15 (struct uni_all*,struct uni*) ;

__attribute__((used)) static void
FUNC_16(struct uni *VAR_11, struct uni_msg *VAR_12, struct uni_all *VAR_13)
{
 struct uni_all *VAR_14;
 struct call *VAR_15;
 u_int VAR_16 = VAR_3;

 FUNC_9(VAR_11, VAR_10, 2, "UNKNOWN MTYPE = %x", VAR_13->mtype);

 switch (VAR_13->mtype) {

   default:






  break;

   case 130:
  if (VAR_13->u.hdr.cref.flag)



   goto drop;
  if ((VAR_15 = FUNC_10(VAR_11, VAR_13->u.hdr.cref.cref, 0, 0)) != ((void*)0)) {
   FUNC_13(VAR_15, VAR_1, 0, VAR_12, VAR_13);
   return;
  }
  goto drop;

   case 131:



  goto drop;

   case 129:







  (void)FUNC_11(VAR_12, VAR_13, &VAR_11->cx);
  if (!FUNC_1(VAR_13->u.status.callstate))
   goto drop;
  if (VAR_13->u.status.callstate.state == VAR_2)
   goto drop;
  VAR_16 = VAR_5;
  break;

   case 128:
  if ((VAR_14 = FUNC_7()) == ((void*)0))
   goto drop;

  (void)FUNC_11(VAR_12, VAR_13, &VAR_11->cx);
  FUNC_6(VAR_14, 129, &VAR_13->u.hdr.cref);
  FUNC_2(VAR_14->u.status.callstate, VAR_2);
  FUNC_3(VAR_14->u.status.cause, VAR_4,
      VAR_6);

  if (FUNC_1(VAR_13->u.status_enq.epref)) {

   VAR_14->u.status.epref = VAR_13->u.status_enq.epref;
   FUNC_4(VAR_14->u.status.epref,
       VAR_13->u.status_enq.epref.epref,
       !VAR_13->u.status_enq.epref.flag);
   FUNC_5(VAR_14->u.status.epstate, VAR_9);
  }

  (void)FUNC_15(VAR_14, VAR_11);

  FUNC_8(VAR_14);
  goto drop;

   case 132:
  if (VAR_13->u.hdr.cref.flag)



   goto drop;
  if ((VAR_15 = FUNC_10(VAR_11, VAR_13->u.hdr.cref.cref, 0, 0)) != ((void*)0)) {
   FUNC_13(VAR_15, VAR_0, 0, VAR_12, VAR_13);
   return;
  }
  goto drop;
 }






 if ((VAR_14 = FUNC_7()) == ((void*)0))
  goto drop;

 FUNC_6(VAR_14, 131, &VAR_13->u.hdr.cref);
 FUNC_3(VAR_14->u.release_compl.cause[0], VAR_4, VAR_16);
 if (FUNC_12(VAR_16, VAR_7) == VAR_8)
  FUNC_0(VAR_14->u.release_compl.cause[0], VAR_13->mtype);

 (void)FUNC_15(VAR_14, VAR_11);

 FUNC_8(VAR_14);

  drop:
 FUNC_8(VAR_13);
 FUNC_14(VAR_12);
}
