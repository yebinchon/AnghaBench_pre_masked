
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_4__ {int protocol_id; int cmd_id; } ;
struct TYPE_5__ {TYPE_1__ hdr; } ;
struct ecore_spq_entry {scalar_t__ comp_mode; int list; int * queue; int priority; TYPE_2__ elem; } ;
struct ecore_spq {int lock; int chain; int completion_pending; int unlimited_pending; } ;
struct ecore_hwfn {TYPE_3__* p_dev; struct ecore_spq* p_spq; } ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;
struct TYPE_6__ {scalar_t__ recov_in_prog; } ;


 int FUNC_0 (struct ecore_hwfn*,int,char*) ;
 int FUNC_1 (struct ecore_hwfn*,int ,char*,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (TYPE_3__*,struct ecore_spq_entry*) ;
 int FUNC_3 (int *,int *) ;
 struct ecore_spq* VAR_4 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct ecore_hwfn*,struct ecore_spq_entry*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct ecore_hwfn*,struct ecore_spq_entry*,int ) ;
 int FUNC_9 (struct ecore_hwfn*,struct ecore_spq_entry*,int *,int) ;
 int FUNC_10 (struct ecore_hwfn*,struct ecore_spq_entry*) ;
 int FUNC_11 (struct ecore_hwfn*) ;
 int FUNC_12 (struct ecore_hwfn*,struct ecore_spq_entry*) ;

enum _ecore_status_t FUNC_13(struct ecore_hwfn *VAR_5,
        struct ecore_spq_entry *VAR_6,
        u8 *VAR_7)
{
 enum _ecore_status_t VAR_8 = VAR_3;
 struct ecore_spq *VAR_9 = VAR_5 ? VAR_5->p_spq : VAR_4;
 bool VAR_10 = 1;

 if (!VAR_5)
  return VAR_0;

 if (!VAR_6) {
  FUNC_0(VAR_5, 1, "Got a NULL pointer\n");
  return VAR_0;
 }

 if (VAR_5->p_dev->recov_in_prog) {
  FUNC_1(VAR_5, VAR_1,
      "Recovery is in progress -> skip spq post [cmd %02x protocol %02x]\n",
      VAR_6->elem.hdr.cmd_id, VAR_6->elem.hdr.protocol_id);



  return VAR_3;
 }

 FUNC_4(&VAR_9->lock);


 VAR_8 = FUNC_10(VAR_5, VAR_6);


 if (VAR_8)
  goto spq_post_fail;


 VAR_8 = FUNC_8(VAR_5, VAR_6, VAR_6->priority);
 if (VAR_8)
  goto spq_post_fail;

 VAR_8 = FUNC_11(VAR_5);
 if (VAR_8) {




  VAR_10 = 0;
  goto spq_post_fail;
 }

 FUNC_5(&VAR_9->lock);

 if (VAR_6->comp_mode == VAR_2) {





  VAR_8 = FUNC_9(VAR_5, VAR_6, VAR_7,
         VAR_6->queue == &VAR_9->unlimited_pending);

  if (VAR_6->queue == &VAR_9->unlimited_pending) {



   FUNC_2(VAR_5->p_dev, VAR_6);




   return VAR_8;
  }

  if (VAR_8)
   goto spq_post_fail2;


  FUNC_12(VAR_5, VAR_6);
 }
 return VAR_8;

spq_post_fail2:
 FUNC_4(&VAR_9->lock);
 FUNC_3(&VAR_6->list, &VAR_9->completion_pending);
 FUNC_7(&VAR_9->chain);

spq_post_fail:

 if (VAR_10)
  FUNC_6(VAR_5, VAR_6);
 FUNC_5(&VAR_9->lock);

 return VAR_8;
}
