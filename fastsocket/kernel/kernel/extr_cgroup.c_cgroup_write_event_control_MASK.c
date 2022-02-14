
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct file {int (* register_event ) (struct cgroup*,struct file*,struct file*,char const*) ;int (* unregister_event ) (struct cgroup*,struct file*,struct file*) ;TYPE_1__* f_op; } ;
struct cgroup_event {struct file* eventfd; int list; struct file* cft; int pt; int remove; int wait; struct cgroup* cgrp; } ;
struct cgroup {int event_list_lock; int event_list; } ;
struct cftype {int dummy; } ;
struct TYPE_2__ {int (* poll ) (struct file*,int *) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 scalar_t__ FUNC_2 (struct file*) ;
 int FUNC_3 (struct file*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (struct file*) ;
 struct file* FUNC_5 (struct file*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 struct file* FUNC_6 (struct file*) ;
 int FUNC_7 (struct file*) ;
 struct file* FUNC_8 (unsigned int) ;
 struct file* FUNC_9 (unsigned int) ;
 int FUNC_10 (struct file*,int ) ;
 int FUNC_11 (struct file*) ;
 int FUNC_12 (int *,int ) ;
 int FUNC_13 (int *,int ) ;
 int FUNC_14 (struct cgroup_event*) ;
 struct cgroup_event* FUNC_15 (int,int ) ;
 int FUNC_16 (int *,int *) ;
 unsigned int FUNC_17 (char const*,char**,int) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (struct cgroup*,struct file*,struct file*,char const*) ;
 int FUNC_21 (struct file*,int *) ;
 int FUNC_22 (struct cgroup*,struct file*,struct file*) ;

__attribute__((used)) static int FUNC_23(struct cgroup *VAR_9, struct cftype *VAR_10,
          const char *VAR_11)
{
 struct cgroup_event *VAR_12 = ((void*)0);
 unsigned int VAR_13, VAR_14;
 struct file *VAR_15 = ((void*)0);
 struct file *VAR_16 = ((void*)0);
 char *VAR_17;
 int VAR_18;

 VAR_13 = FUNC_17(VAR_11, &VAR_17, 10);
 if (*VAR_17 != ' ')
  return -VAR_1;
 VAR_11 = VAR_17 + 1;

 VAR_14 = FUNC_17(VAR_11, &VAR_17, 10);
 if ((*VAR_17 != ' ') && (*VAR_17 != '\0'))
  return -VAR_1;
 VAR_11 = VAR_17 + 1;

 VAR_12 = FUNC_15(sizeof(*VAR_12), VAR_3);
 if (!VAR_12)
  return -VAR_2;
 VAR_12->cgrp = VAR_9;
 FUNC_0(&VAR_12->list);
 FUNC_12(&VAR_12->pt, VAR_6);
 FUNC_13(&VAR_12->wait, VAR_8);
 FUNC_1(&VAR_12->remove, VAR_7);

 VAR_15 = FUNC_8(VAR_13);
 if (FUNC_2(VAR_15)) {
  VAR_18 = FUNC_4(VAR_15);
  goto fail;
 }

 VAR_12->eventfd = FUNC_6(VAR_15);
 if (FUNC_2(VAR_12->eventfd)) {
  VAR_18 = FUNC_4(VAR_12->eventfd);
  goto fail;
 }

 VAR_16 = FUNC_9(VAR_14);
 if (!VAR_16) {
  VAR_18 = -VAR_0;
  goto fail;
 }


 VAR_18 = FUNC_10(VAR_16, VAR_4);
 if (VAR_18 < 0)
  goto fail;

 VAR_12->cft = FUNC_5(VAR_16);
 if (FUNC_2(VAR_12->cft)) {
  VAR_18 = FUNC_4(VAR_12->cft);
  goto fail;
 }

 if (!VAR_12->cft->register_event || !VAR_12->cft->unregister_event) {
  VAR_18 = -VAR_1;
  goto fail;
 }

 VAR_18 = VAR_12->cft->register_event(VAR_9, VAR_12->cft,
   VAR_12->eventfd, VAR_11);
 if (VAR_18)
  goto fail;

 if (VAR_15->f_op->poll(VAR_15, &VAR_12->pt) & VAR_5) {
  VAR_12->cft->unregister_event(VAR_9, VAR_12->cft, VAR_12->eventfd);
  VAR_18 = 0;
  goto fail;
 }

 FUNC_18(&VAR_9->event_list_lock);
 FUNC_16(&VAR_12->list, &VAR_9->event_list);
 FUNC_19(&VAR_9->event_list_lock);

 FUNC_11(VAR_16);
 FUNC_11(VAR_15);

 return 0;

fail:
 if (VAR_16)
  FUNC_11(VAR_16);

 if (VAR_12 && VAR_12->eventfd && !FUNC_2(VAR_12->eventfd))
  FUNC_7(VAR_12->eventfd);

 if (!FUNC_3(VAR_15))
  FUNC_11(VAR_15);

 FUNC_14(VAR_12);

 return VAR_18;
}
