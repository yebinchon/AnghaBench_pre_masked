
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tid_ampdu_tx {int dummy; } ;
struct TYPE_2__ {int * tid_tx; int mtx; } ;
struct sta_info {TYPE_1__ ampdu_mlme; int lock; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,struct tid_ampdu_tx*) ;

void FUNC_2(struct sta_info *VAR_0, int VAR_1,
        struct tid_ampdu_tx *VAR_2)
{
 FUNC_0(&VAR_0->ampdu_mlme.mtx);
 FUNC_0(&VAR_0->lock);
 FUNC_1(VAR_0->ampdu_mlme.tid_tx[VAR_1], VAR_2);
}
