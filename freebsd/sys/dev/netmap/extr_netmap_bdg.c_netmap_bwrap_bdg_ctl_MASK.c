
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ nr_ringid; scalar_t__ nr_mode; int nr_flags; } ;
struct nmreq_vale_attach {TYPE_1__ reg; } ;
struct nmreq_header {scalar_t__ nr_reqtype; scalar_t__ nr_body; } ;
struct netmap_priv_d {int np_ifp; } ;
struct netmap_bwrap_adapter {struct netmap_priv_d* na_kpriv; } ;
struct netmap_adapter {scalar_t__ active_fds; int na_flags; int ifp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct netmap_adapter*) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (struct netmap_priv_d*,struct netmap_adapter*,scalar_t__,scalar_t__,int ) ;
 int FUNC_2 (struct netmap_priv_d*) ;
 struct netmap_priv_d* FUNC_3 () ;

__attribute__((used)) static int
FUNC_4(struct nmreq_header *VAR_7, struct netmap_adapter *VAR_8)
{
 struct netmap_priv_d *VAR_9;
 struct netmap_bwrap_adapter *VAR_10 = (struct netmap_bwrap_adapter*)VAR_8;
 int VAR_11 = 0;

 if (VAR_7->nr_reqtype == VAR_4) {
  struct nmreq_vale_attach *VAR_12 =
   (struct nmreq_vale_attach *)(uintptr_t)VAR_7->nr_body;
  if (VAR_12->reg.nr_ringid != 0 ||
   (VAR_12->reg.nr_mode != VAR_5 &&
    VAR_12->reg.nr_mode != VAR_6)) {


   return VAR_1;
  }
  if (FUNC_0(VAR_8)) {
   return VAR_0;
  }
  if (VAR_10->na_kpriv) {

   return 0;
  }
  VAR_9 = FUNC_3();
  if (VAR_9 == ((void*)0))
   return VAR_2;
  VAR_9->np_ifp = VAR_8->ifp;
  VAR_11 = FUNC_1(VAR_9, VAR_8, VAR_12->reg.nr_mode,
     VAR_12->reg.nr_ringid, VAR_12->reg.nr_flags);
  if (VAR_11) {
   FUNC_2(VAR_9);
   return VAR_11;
  }
  VAR_10->na_kpriv = VAR_9;
  VAR_8->na_flags |= VAR_3;
 } else {
  if (VAR_8->active_fds == 0)
   return VAR_1;
  FUNC_2(VAR_10->na_kpriv);
  VAR_10->na_kpriv = ((void*)0);
  VAR_8->na_flags &= ~VAR_3;
 }

 return VAR_11;
}
