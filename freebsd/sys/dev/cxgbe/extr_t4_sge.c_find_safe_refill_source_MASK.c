
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sw_zone_info {int size; } ;
struct TYPE_6__ {int hwidx; int zidx; int region1; int region3; } ;
struct sge_fl {int flags; TYPE_3__ cll_alt; } ;
struct sge {size_t safe_hwidx2; size_t safe_hwidx1; struct sw_zone_info* sw_zone_info; struct hw_buf_info* hw_buf_info; } ;
struct hw_buf_info {size_t zidx; int size; } ;
struct TYPE_4__ {int pad_boundary; } ;
struct TYPE_5__ {TYPE_1__ sge; } ;
struct adapter {TYPE_2__ params; struct sge sge; } ;
typedef size_t int8_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static void
FUNC_0(struct adapter *VAR_5, struct sge_fl *VAR_6)
{
 struct sge *VAR_7 = &VAR_5->sge;
 struct hw_buf_info *VAR_8;
 struct sw_zone_info *VAR_9;
 int VAR_10;
 int8_t VAR_11;

 if (VAR_6->flags & VAR_1)
  VAR_11 = VAR_7->safe_hwidx2;
 else if (VAR_3 && VAR_7->safe_hwidx2 != -1) {
  VAR_11 = VAR_7->safe_hwidx2;
  VAR_8 = &VAR_7->hw_buf_info[VAR_11];
  VAR_9 = &VAR_7->sw_zone_info[VAR_8->zidx];
  VAR_10 = VAR_9->size - VAR_8->size;


  if (VAR_10 < VAR_0 + VAR_2)
   VAR_11 = VAR_7->safe_hwidx1;
 } else
  VAR_11 = VAR_7->safe_hwidx1;

 if (VAR_11 == -1) {

  VAR_6->cll_alt.hwidx = -1;
  VAR_6->cll_alt.zidx = -1;

  return;
 }

 VAR_8 = &VAR_7->hw_buf_info[VAR_11];
 VAR_9 = &VAR_7->sw_zone_info[VAR_8->zidx];
 VAR_10 = VAR_9->size - VAR_8->size;
 VAR_6->cll_alt.hwidx = VAR_11;
 VAR_6->cll_alt.zidx = VAR_8->zidx;
 if (VAR_3 &&
     (VAR_4 == 0 || (VAR_2 % VAR_5->params.sge.pad_boundary) == 0))
  VAR_6->cll_alt.region1 = ((VAR_10 - VAR_0) / VAR_2) * VAR_2;
 else
  VAR_6->cll_alt.region1 = 0;
 VAR_6->cll_alt.region3 = VAR_10 - VAR_6->cll_alt.region1;
}
