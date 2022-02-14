
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


struct TYPE_16__ {int rmp_seqno; int rmp_session; } ;
struct rmp_packet {int r_type; TYPE_1__ r_brq; } ;
struct TYPE_18__ {int files; } ;
struct TYPE_17__ {struct rmp_packet rmp; } ;
typedef TYPE_2__ RMPCONN ;
typedef TYPE_3__ CLIENT ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int VAR_0 ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;
 int VAR_1 ;
 TYPE_2__* FUNC_4 (TYPE_2__*) ;



 int VAR_2 ;


 int FUNC_5 (struct rmp_packet*,TYPE_2__*,int ) ;
 int FUNC_6 (struct rmp_packet*,TYPE_2__*,int ) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ,char*,int ,...) ;

void
FUNC_12(RMPCONN *VAR_3, CLIENT *VAR_4)
{
 struct rmp_packet *VAR_5;
 RMPCONN *VAR_6;

 VAR_5 = &VAR_3->rmp;

 switch(VAR_5->r_type) {
  case 130:
   if ((VAR_6 = FUNC_4(VAR_3)) == ((void*)0))
    return;
   if (FUNC_10(VAR_5->r_brq.rmp_session) == VAR_2) {
    if (FUNC_9(VAR_5->r_brq.rmp_seqno))
     (void) FUNC_8(VAR_6);
    else
     (void) FUNC_6(VAR_5, VAR_6,
                       VAR_4? VAR_4->files:
                               VAR_0);
    FUNC_3(VAR_6);
   } else {
    if (FUNC_5(VAR_5, VAR_6,
        VAR_4? VAR_4->files: VAR_0))
     FUNC_0(VAR_6);
    else
     FUNC_3(VAR_6);
   }
   break;

  case 131:
   FUNC_11(VAR_1, "%s: sent a boot reply",
          FUNC_2(VAR_3));
   break;

  case 128:



   (void) FUNC_7(VAR_3);
   break;

  case 129:
   FUNC_11(VAR_1, "%s: sent a read reply",
          FUNC_2(VAR_3));
   break;

  case 132:




   (void) FUNC_1(VAR_3);
   break;

  default:
   FUNC_11(VAR_1, "%s: unknown packet type (%u)",
          FUNC_2(VAR_3), VAR_5->r_type);
 }
}
