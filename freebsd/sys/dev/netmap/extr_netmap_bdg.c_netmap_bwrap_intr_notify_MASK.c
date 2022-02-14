
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u_int ;
struct TYPE_2__ {struct netmap_kring** tx_rings; } ;
struct netmap_vp_adapter {TYPE_1__ up; } ;
struct netmap_kring {size_t ring_id; int (* nm_sync ) (struct netmap_kring*,int) ;scalar_t__ nr_hwtail; scalar_t__ rcur; scalar_t__ rtail; scalar_t__ rhead; int name; scalar_t__ nr_hwcur; struct netmap_adapter* na; } ;
struct netmap_bwrap_adapter {struct netmap_vp_adapter up; } ;
struct netmap_adapter {int name; struct netmap_bwrap_adapter* na_private; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (struct netmap_kring*) ;
 scalar_t__ FUNC_1 (struct netmap_kring*,int ,int *) ;
 int FUNC_2 (char*,int ,scalar_t__,int,...) ;
 int FUNC_3 (int,char*,int ) ;
 int FUNC_4 (struct netmap_kring*,int) ;
 int FUNC_5 (struct netmap_kring*,int) ;
 int FUNC_6 (struct netmap_kring*,int) ;

__attribute__((used)) static int
FUNC_7(struct netmap_kring *VAR_6, int VAR_7)
{
 struct netmap_adapter *VAR_8 = VAR_6->na;
 struct netmap_bwrap_adapter *VAR_9 = VAR_8->na_private;
 struct netmap_kring *VAR_10;
 struct netmap_vp_adapter *VAR_11 = &VAR_9->up;
 u_int VAR_12 = VAR_6->ring_id;
 int VAR_13 = VAR_2;
 int VAR_14;

 if (VAR_4 & VAR_1)
     FUNC_2("%s %s 0x%x", VAR_8->name, VAR_6->name, VAR_7);

 VAR_10 = VAR_11->up.tx_rings[VAR_12];


 if (FUNC_1(VAR_6, 0 , ((void*)0))) {
  return VAR_0;
 }

 if (VAR_4 & VAR_1)
     FUNC_2("%s head %d cur %d tail %d", VAR_8->name,
  VAR_6->rhead, VAR_6->rcur, VAR_6->rtail);




 VAR_14 = VAR_6->nm_sync(VAR_6, 0);
 if (VAR_14)
  goto put_out;
 if (VAR_6->nr_hwcur == VAR_6->nr_hwtail) {
  if (VAR_5)
   FUNC_3(1, "interrupt with no packets on %s",
    VAR_6->name);
  goto put_out;
 }





 VAR_10->rhead = VAR_10->rcur = VAR_6->nr_hwtail;

 VAR_10->nm_sync(VAR_10, VAR_7);


 VAR_6->rhead = VAR_6->rcur = VAR_6->rtail = VAR_6->nr_hwtail;

 VAR_14 = VAR_6->nm_sync(VAR_6, 0);



 if (VAR_6->rcur != VAR_6->nr_hwtail) {
  VAR_13 = VAR_3;
 }
put_out:
 FUNC_0(VAR_6);

 return VAR_14 ? VAR_14 : VAR_13;
}
