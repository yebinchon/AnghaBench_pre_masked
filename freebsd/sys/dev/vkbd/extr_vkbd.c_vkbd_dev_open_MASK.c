
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_13__ {int ks_flags; struct cdev* ks_dev; } ;
typedef TYPE_1__ vkbd_state_t ;
struct thread {int dummy; } ;
struct cdev {scalar_t__ si_drv1; } ;
struct TYPE_14__ {scalar_t__ kb_data; } ;
typedef TYPE_2__ keyboard_t ;
struct TYPE_15__ {int (* probe ) (int,int *,int ) ;int (* init ) (int,TYPE_2__**,int *,int ) ;int (* enable ) (TYPE_2__*) ;int (* term ) (TYPE_2__*) ;int (* disable ) (TYPE_2__*) ;} ;
typedef TYPE_3__ keyboard_switch_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (struct cdev*) ;
 int FUNC_3 (TYPE_2__*) ;
 TYPE_3__* FUNC_4 (int ) ;
 int FUNC_5 (int,int *,int ) ;
 int FUNC_6 (int,TYPE_2__**,int *,int ) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (TYPE_2__*) ;
 int FUNC_10 (TYPE_2__*) ;

__attribute__((used)) static int
FUNC_11(struct cdev *VAR_4, int VAR_5, int VAR_6, struct thread *VAR_7)
{
 int VAR_8 = FUNC_2(VAR_4), VAR_9;
 keyboard_switch_t *VAR_10 = ((void*)0);
 keyboard_t *VAR_11 = ((void*)0);
 vkbd_state_t *VAR_12 = (vkbd_state_t *) VAR_4->si_drv1;


 if (VAR_12 == ((void*)0)) {
  if ((VAR_10 = FUNC_4(VAR_2)) == ((void*)0))
   return (VAR_1);

  if ((VAR_9 = (*VAR_10->probe)(VAR_8, ((void*)0), 0)) != 0 ||
      (VAR_9 = (*VAR_10->init)(VAR_8, &VAR_11, ((void*)0), 0)) != 0)
   return (VAR_9);

  VAR_12 = (vkbd_state_t *) VAR_11->kb_data;

  if ((VAR_9 = (*VAR_10->enable)(VAR_11)) != 0) {
   (*VAR_10->term)(VAR_11);
   return (VAR_9);
  }
  VAR_4->si_drv1 = VAR_11->kb_data;
 }

 FUNC_0(VAR_12);

 if (VAR_12->ks_flags & VAR_3) {
  FUNC_1(VAR_12);
  return (VAR_0);
 }

 VAR_12->ks_flags |= VAR_3;
 VAR_12->ks_dev = VAR_4;

 FUNC_1(VAR_12);

 return (0);
}
