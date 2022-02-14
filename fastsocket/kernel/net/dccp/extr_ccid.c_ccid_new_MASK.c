
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sock {int dummy; } ;
struct ccid_operations {scalar_t__ (* ccid_hc_rx_init ) (struct ccid*,struct sock*) ;scalar_t__ (* ccid_hc_tx_init ) (struct ccid*,struct sock*) ;int ccid_hc_tx_slab; int ccid_hc_rx_slab; int ccid_hc_tx_obj_size; int ccid_hc_rx_obj_size; } ;
struct ccid {struct ccid_operations* ccid_ops; } ;


 struct ccid_operations* FUNC_0 (int const) ;
 int FUNC_1 () ;
 struct ccid* FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,struct ccid*) ;
 int FUNC_4 (struct ccid*,int ,int ) ;
 scalar_t__ FUNC_5 (struct ccid*,struct sock*) ;
 scalar_t__ FUNC_6 (struct ccid*,struct sock*) ;

struct ccid *FUNC_7(const u8 VAR_0, struct sock *VAR_1, bool VAR_2)
{
 struct ccid_operations *VAR_3 = FUNC_0(VAR_0);
 struct ccid *VAR_4 = ((void*)0);

 if (VAR_3 == ((void*)0))
  goto out;

 VAR_4 = FUNC_2(VAR_2 ? VAR_3->ccid_hc_rx_slab :
         VAR_3->ccid_hc_tx_slab, FUNC_1());
 if (VAR_4 == ((void*)0))
  goto out;
 VAR_4->ccid_ops = VAR_3;
 if (VAR_2) {
  FUNC_4(VAR_4 + 1, 0, VAR_3->ccid_hc_rx_obj_size);
  if (VAR_4->ccid_ops->ccid_hc_rx_init != ((void*)0) &&
      VAR_4->ccid_ops->ccid_hc_rx_init(VAR_4, VAR_1) != 0)
   goto out_free_ccid;
 } else {
  FUNC_4(VAR_4 + 1, 0, VAR_3->ccid_hc_tx_obj_size);
  if (VAR_4->ccid_ops->ccid_hc_tx_init != ((void*)0) &&
      VAR_4->ccid_ops->ccid_hc_tx_init(VAR_4, VAR_1) != 0)
   goto out_free_ccid;
 }
out:
 return VAR_4;
out_free_ccid:
 FUNC_3(VAR_2 ? VAR_3->ccid_hc_rx_slab :
   VAR_3->ccid_hc_tx_slab, VAR_4);
 VAR_4 = ((void*)0);
 goto out;
}
