
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int8_t ;
typedef scalar_t__ u_int16_t ;
struct mbdata {int mb_count; } ;
struct nbns_rq {int nr_nmflags; scalar_t__ nr_trnid; int nr_rpnmflags; int nr_rprcode; scalar_t__ nr_rpancount; scalar_t__ nr_rpnscount; scalar_t__ nr_rparcount; struct mbdata nr_rp; int nr_fd; TYPE_1__* nr_if; struct mbdata nr_rq; } ;
struct TYPE_2__ {struct TYPE_2__* id_next; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct mbdata*,scalar_t__*) ;
 int FUNC_3 (struct mbdata*,int*) ;
 TYPE_1__* VAR_3 ;
 int FUNC_4 (struct nbns_rq*) ;
 int FUNC_5 (struct nbns_rq*) ;
 int FUNC_6 (struct nbns_rq*) ;

int
FUNC_7(struct nbns_rq *VAR_4)
{
 struct mbdata *VAR_5 = &VAR_4->nr_rq;
 u_int16_t VAR_6;
 u_int8_t VAR_7;
 int VAR_8, VAR_9;

 VAR_4->nr_if = VAR_3;
again:
 VAR_8 = FUNC_4(VAR_4);
 if (VAR_8)
  return VAR_8;
 VAR_9 = 3;
 for (;;) {
  VAR_8 = FUNC_6(VAR_4);
  if (VAR_8)
   return VAR_8;
  VAR_8 = FUNC_5(VAR_4);
  if (VAR_8) {
   if (VAR_8 != VAR_0 || VAR_9 == 0) {
    if ((VAR_4->nr_nmflags & VAR_2) &&
        VAR_4->nr_if != ((void*)0) &&
        VAR_4->nr_if->id_next != ((void*)0)) {
     VAR_4->nr_if = VAR_4->nr_if->id_next;
     FUNC_1(VAR_4->nr_fd);
     goto again;
    } else
     return VAR_8;
   }
   VAR_9--;
   continue;
  }
  VAR_5 = &VAR_4->nr_rp;
  if (VAR_5->mb_count < 12)
   return FUNC_0(VAR_1);
  FUNC_2(VAR_5, &VAR_6);
  if (VAR_6 != VAR_4->nr_trnid)
   return FUNC_0(VAR_1);
  break;
 }
 FUNC_3(VAR_5, &VAR_7);
 VAR_4->nr_rpnmflags = (VAR_7 & 7) << 4;
 FUNC_3(VAR_5, &VAR_7);
 VAR_4->nr_rpnmflags |= (VAR_7 & 0xf0) >> 4;
 VAR_4->nr_rprcode = VAR_7 & 0xf;
 if (VAR_4->nr_rprcode)
  return FUNC_0(VAR_4->nr_rprcode);
 FUNC_2(VAR_5, &VAR_6);
 FUNC_2(VAR_5, &VAR_4->nr_rpancount);
 FUNC_2(VAR_5, &VAR_4->nr_rpnscount);
 FUNC_2(VAR_5, &VAR_4->nr_rparcount);
 return 0;
}
