
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__* ls_hist; scalar_t__ ls_time; scalar_t__ ls_refcnt; scalar_t__ ls_count; int ls_event; } ;
typedef TYPE_1__ lsrec_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static void
FUNC_0(int (*VAR_4)(lsrec_t *, lsrec_t *), lsrec_t **VAR_5, int VAR_6)
{
 int VAR_7, VAR_8;
 lsrec_t *VAR_9, *VAR_10;

 VAR_9 = VAR_5[0];

 for (VAR_7 = 1; VAR_7 < VAR_6; VAR_7++) {
  VAR_10 = VAR_5[VAR_7];
  if (VAR_4(VAR_10, VAR_9) != 0) {
   VAR_9 = VAR_10;
   continue;
  }
  VAR_10->ls_event = VAR_1;
  VAR_9->ls_count += VAR_10->ls_count;
  VAR_9->ls_refcnt += VAR_10->ls_refcnt;
  if (VAR_3 < VAR_2)
   continue;
  VAR_9->ls_time += VAR_10->ls_time;
  if (VAR_3 < VAR_0)
   continue;
  for (VAR_8 = 0; VAR_8 < 64; VAR_8++)
   VAR_9->ls_hist[VAR_8] += VAR_10->ls_hist[VAR_8];
 }
}
