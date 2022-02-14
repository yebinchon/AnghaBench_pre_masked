
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vi_info {int dev; } ;
struct sge_iq {int flags; int cntxt_id; int fl_lock; scalar_t__ sdesc; int desc; int ba; int desc_map; int desc_tag; struct adapter* adapter; } ;
struct sge_fl {int flags; int cntxt_id; int fl_lock; scalar_t__ sdesc; int desc; int ba; int desc_map; int desc_tag; struct adapter* adapter; } ;
struct adapter {int pf; int mbox; int dev; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sge_iq*,int) ;
 int FUNC_1 (int ,char*,struct sge_iq*,int) ;
 int FUNC_2 (struct adapter*,struct sge_iq*) ;
 int FUNC_3 (struct adapter*,int ,int ,int ,int ) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (struct adapter*,int ,int ,int ,int ,int,int,int) ;

__attribute__((used)) static int
FUNC_7(struct vi_info *VAR_2, struct sge_iq *VAR_3, struct sge_fl *VAR_4)
{
 int VAR_5;
 struct adapter *VAR_6 = VAR_3->adapter;
 device_t VAR_7;

 if (VAR_6 == ((void*)0))
  return (0);

 VAR_7 = VAR_2 ? VAR_2->dev : VAR_6->dev;

 if (VAR_3->flags & VAR_1) {
  VAR_5 = -FUNC_6(VAR_6, VAR_6->mbox, VAR_6->pf, 0,
      VAR_0, VAR_3->cntxt_id,
      VAR_4 ? VAR_4->cntxt_id : 0xffff, 0xffff);
  if (VAR_5 != 0) {
   FUNC_1(VAR_7,
       "failed to free queue %p: %d\n", VAR_3, VAR_5);
   return (VAR_5);
  }
  VAR_3->flags &= ~VAR_1;
 }

 FUNC_3(VAR_6, VAR_3->desc_tag, VAR_3->desc_map, VAR_3->ba, VAR_3->desc);

 FUNC_0(VAR_3, sizeof(*VAR_3));

 if (VAR_4) {
  FUNC_3(VAR_6, VAR_4->desc_tag, VAR_4->desc_map, VAR_4->ba,
      VAR_4->desc);

  if (VAR_4->sdesc)
   FUNC_2(VAR_6, VAR_4);

  if (FUNC_5(&VAR_4->fl_lock))
   FUNC_4(&VAR_4->fl_lock);

  FUNC_0(VAR_4, sizeof(*VAR_4));
 }

 return (0);
}
