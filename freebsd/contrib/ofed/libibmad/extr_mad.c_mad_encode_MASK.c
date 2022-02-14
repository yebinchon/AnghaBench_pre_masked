
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef void uint8_t ;
struct TYPE_7__ {int id; int mod; } ;
struct TYPE_8__ {int method; int mgtclass; int rstatus; int dataoffs; int oui; int datasz; scalar_t__ mask; scalar_t__ mkey; TYPE_1__ attr; scalar_t__ trid; } ;
typedef TYPE_2__ ib_rpc_t ;
struct TYPE_9__ {scalar_t__ cckey; } ;
typedef TYPE_3__ ib_rpc_cc_t ;
struct TYPE_10__ {scalar_t__ cnt; int drdlid; int drslid; int p; } ;
typedef TYPE_4__ ib_dr_path_t ;


 int VAR_0 ;
 int FUNC_0 (char*,...) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 scalar_t__ VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (void*,int ,int ,int ) ;
 int FUNC_3 (void*,int ,int ,int) ;
 int FUNC_4 (void*,int ,int ,scalar_t__) ;
 scalar_t__ FUNC_5 () ;
 int FUNC_6 (char*,void*,int ) ;

void *FUNC_7(void *VAR_29, ib_rpc_t * VAR_30, ib_dr_path_t * VAR_31, void *VAR_32)
{
 int VAR_33 = VAR_30->method & VAR_18;
 int VAR_34;


 FUNC_3(VAR_29, 0, VAR_15, VAR_30->method);
 FUNC_3(VAR_29, 0, VAR_19, VAR_33 ? 1 : 0);
 VAR_34 = VAR_30->mgtclass & 0xff;
 if (VAR_34 == VAR_23 || VAR_34 == VAR_2)
  FUNC_3(VAR_29, 0, VAR_14, 2);
 else
  FUNC_3(VAR_29, 0, VAR_14, 1);
 FUNC_3(VAR_29, 0, VAR_16, VAR_30->mgtclass & 0xff);
 FUNC_3(VAR_29, 0, VAR_13, 1);


 if ((VAR_30->mgtclass & 0xff) == VAR_25) {
  if (!VAR_31) {
   FUNC_0("encoding dr mad without drpath (null)");
   VAR_28 = VAR_0;
   return ((void*)0);
  }
  if (VAR_31->cnt >= VAR_26) {
   FUNC_0("dr path with hop count %d", VAR_31->cnt);
   VAR_28 = VAR_0;
   return ((void*)0);
  }
  FUNC_3(VAR_29, 0, VAR_6, VAR_31->cnt);
  FUNC_3(VAR_29, 0, VAR_7,
         VAR_33 ? VAR_31->cnt + 1 : 0x0);
  FUNC_3(VAR_29, 0, VAR_10, VAR_30->rstatus);
  FUNC_3(VAR_29, 0, VAR_3, VAR_33 ? 1 : 0);
 } else
  FUNC_3(VAR_29, 0, VAR_21, VAR_30->rstatus);


 if (!VAR_30->trid)
  VAR_30->trid = FUNC_5();

 FUNC_4(VAR_29, 0, VAR_22, VAR_30->trid);
 FUNC_3(VAR_29, 0, VAR_11, VAR_30->attr.id);
 FUNC_3(VAR_29, 0, VAR_12, VAR_30->attr.mod);


 FUNC_4(VAR_29, 0, VAR_17, VAR_30->mkey);

 if ((VAR_30->mgtclass & 0xff) == VAR_25) {

  FUNC_3(VAR_29, 0, VAR_4,
         VAR_31->drdlid ? VAR_31->drdlid : 0xffff);
  FUNC_3(VAR_29, 0, VAR_5,
         VAR_31->drslid ? VAR_31->drslid : 0xffff);


  if (VAR_33)
   FUNC_2(VAR_29, 0, VAR_9, VAR_31->p);
  else
   FUNC_2(VAR_29, 0, VAR_8, VAR_31->p);
 }

 if ((VAR_30->mgtclass & 0xff) == VAR_23)
  FUNC_4(VAR_29, 0, VAR_24, VAR_30->mask);

 if ((VAR_30->mgtclass & 0xff) == VAR_2) {
  ib_rpc_cc_t *VAR_35 = (ib_rpc_cc_t *)VAR_30;
  FUNC_4(VAR_29, 0, VAR_1, VAR_35->cckey);
 }

 if (VAR_32)
  FUNC_6((char *)VAR_29 + VAR_30->dataoffs, VAR_32, VAR_30->datasz);


 if (FUNC_1(VAR_30->mgtclass & 0xff))
  FUNC_3(VAR_29, 0, VAR_27, VAR_30->oui);

 return (uint8_t *) VAR_29 + VAR_20;
}
