
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int irda_queue_t ;
struct TYPE_12__ {int hb_spinlock; } ;
typedef TYPE_2__ hashbin_t ;
struct TYPE_11__ {scalar_t__ saddr; scalar_t__ daddr; scalar_t__ hints; int info; } ;
struct TYPE_13__ {TYPE_1__ data; int firststamp; int timestamp; } ;
typedef TYPE_3__ discovery_t ;
typedef int __u16 ;


 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;
 scalar_t__ FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*,int *,scalar_t__,int *) ;
 int FUNC_4 (TYPE_2__*,int *) ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;
 scalar_t__ FUNC_8 (int ,int ) ;

void FUNC_9(hashbin_t *VAR_0, discovery_t *VAR_1)
{
 discovery_t *VAR_2, *VAR_3;
 unsigned long VAR_4;


 VAR_1->firststamp = VAR_1->timestamp;

 FUNC_6(&VAR_0->hb_spinlock, VAR_4);







 VAR_2 = (discovery_t *) FUNC_1(VAR_0);
 while (VAR_2 != ((void*)0) ) {
  VAR_3 = VAR_2;


  VAR_2 = (discovery_t *) FUNC_2(VAR_0);

  if ((VAR_3->data.saddr == VAR_1->data.saddr) &&
      ((VAR_3->data.daddr == VAR_1->data.daddr) ||
       (FUNC_8(VAR_3->data.info, VAR_1->data.info) == 0)))
  {



   FUNC_4(VAR_0, (irda_queue_t *) VAR_3);

   if (FUNC_0((__u16 *)VAR_3->data.hints) == FUNC_0((__u16 *)VAR_1->data.hints))

    VAR_1->firststamp = VAR_3->firststamp;
   FUNC_5(VAR_3);
  }
 }


 FUNC_3(VAR_0, (irda_queue_t *) VAR_1, VAR_1->data.daddr, ((void*)0));

 FUNC_7(&VAR_0->hb_spinlock, VAR_4);
}
