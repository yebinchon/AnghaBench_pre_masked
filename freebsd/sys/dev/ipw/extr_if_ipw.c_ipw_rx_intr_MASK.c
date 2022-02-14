
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct ipw_status {int code; int flags; int len; } ;
struct ipw_softc {int flags; int rxcur; int rbd_map; int rbd_dmat; int sc_dev; struct ipw_soft_bd* srbd_list; struct ipw_status* status_list; int status_map; int status_dmat; } ;
struct ipw_soft_buf {int dummy; } ;
struct ipw_soft_bd {TYPE_1__* bd; struct ipw_soft_buf* priv; } ;
struct TYPE_2__ {scalar_t__ flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ipw_softc*,int ) ;
 int FUNC_1 (struct ipw_softc*,int ,int) ;
 int FUNC_2 (int,char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;





 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int ,char*,int) ;
 int FUNC_5 (struct ipw_softc*,struct ipw_soft_buf*) ;
 int FUNC_6 (struct ipw_softc*,struct ipw_status*,struct ipw_soft_bd*,struct ipw_soft_buf*) ;
 int FUNC_7 (struct ipw_softc*,struct ipw_soft_buf*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;

__attribute__((used)) static void
FUNC_10(struct ipw_softc *VAR_6)
{
 struct ipw_status *VAR_7;
 struct ipw_soft_bd *VAR_8;
 struct ipw_soft_buf *VAR_9;
 uint32_t VAR_10, VAR_11;

 if (!(VAR_6->flags & VAR_4))
  return;

 VAR_10 = FUNC_0(VAR_6, VAR_2);

 FUNC_3(VAR_6->status_dmat, VAR_6->status_map, VAR_0);

 for (VAR_11 = (VAR_6->rxcur + 1) % VAR_5; VAR_11 != VAR_10; VAR_11 = (VAR_11 + 1) % VAR_5) {
  VAR_7 = &VAR_6->status_list[VAR_11];
  VAR_8 = &VAR_6->srbd_list[VAR_11];
  VAR_9 = VAR_8->priv;

  switch (FUNC_8(VAR_7->code) & 0xf) {
  case 132:
   FUNC_5(VAR_6, VAR_9);
   break;

  case 129:
   FUNC_7(VAR_6, VAR_9);
   break;

  case 130:
  case 131:
   FUNC_6(VAR_6, VAR_7, VAR_8, VAR_9);
   break;

  case 128:
   FUNC_2(2, ("notification status, len %u flags 0x%x\n",
       FUNC_9(VAR_7->len), VAR_7->flags));

   break;

  default:
   FUNC_4(VAR_6->sc_dev, "unexpected status code %u\n",
       FUNC_8(VAR_7->code));
  }


  if (!(VAR_6->flags & VAR_4))
   return;

  VAR_8->bd->flags = 0;
 }

 FUNC_3(VAR_6->rbd_dmat, VAR_6->rbd_map, VAR_1);


 VAR_6->rxcur = (VAR_10 == 0) ? VAR_5 - 1 : VAR_10 - 1;
 FUNC_1(VAR_6, VAR_3, VAR_6->rxcur);
}
