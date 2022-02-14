
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rfcomm_dlc {int refcnt; int lock; int tx_queue; int timer; } ;
typedef int gfp_t ;


 int FUNC_0 (char*,struct rfcomm_dlc*) ;
 int FUNC_1 (int *,int) ;
 struct rfcomm_dlc* FUNC_2 (int,int ) ;
 int FUNC_3 (struct rfcomm_dlc*) ;
 int VAR_0 ;
 int FUNC_4 (int *,int ,unsigned long) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

struct rfcomm_dlc *FUNC_7(gfp_t VAR_1)
{
 struct rfcomm_dlc *VAR_2 = FUNC_2(sizeof(*VAR_2), VAR_1);

 if (!VAR_2)
  return ((void*)0);

 FUNC_4(&VAR_2->timer, VAR_0, (unsigned long)VAR_2);

 FUNC_5(&VAR_2->tx_queue);
 FUNC_6(&VAR_2->lock);
 FUNC_1(&VAR_2->refcnt, 1);

 FUNC_3(VAR_2);

 FUNC_0("%p", VAR_2);

 return VAR_2;
}
