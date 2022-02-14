
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct mpt_softc {int dummy; } ;
struct TYPE_8__ {int index; TYPE_2__* req_vbuf; } ;
typedef TYPE_1__ request_t ;
struct TYPE_9__ {int MsgContext; int Function; int SendFlags; } ;
typedef TYPE_2__* PTR_MSG_FC_PRIMITIVE_SEND_REQUEST ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*,int ,int) ;
 int FUNC_2 (struct mpt_softc*,TYPE_1__*) ;
 TYPE_1__* FUNC_3 (struct mpt_softc*,int ) ;
 int FUNC_4 (struct mpt_softc*,TYPE_1__*) ;
 int FUNC_5 (struct mpt_softc*,TYPE_1__*,int ,int ,int ,int) ;

__attribute__((used)) static int
FUNC_6(struct mpt_softc *VAR_6, int VAR_7)
{
 int VAR_8 = 0;
 request_t *VAR_9;
 PTR_MSG_FC_PRIMITIVE_SEND_REQUEST VAR_10;

  VAR_9 = FUNC_3(VAR_6, VAR_1);
 if (VAR_9 == ((void*)0)) {
  return (VAR_0);
 }
 VAR_10 = VAR_9->req_vbuf;
 FUNC_1(VAR_10, 0, sizeof(*VAR_10));
 VAR_10->SendFlags = VAR_2;
 VAR_10->Function = VAR_3;
 VAR_10->MsgContext = FUNC_0(VAR_9->index | VAR_5);
 FUNC_4(VAR_6, VAR_9);
 if (VAR_7) {
  VAR_8 = FUNC_5(VAR_6, VAR_9, VAR_4,
      VAR_4, VAR_1, 60 * 1000);
  if (VAR_8 == 0) {
   FUNC_2(VAR_6, VAR_9);
  }
 }
 return (VAR_8);
}
