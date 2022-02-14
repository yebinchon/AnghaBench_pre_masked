
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {scalar_t__ kb_data; } ;
typedef TYPE_1__ keyboard_t ;
struct TYPE_13__ {int (* probe ) (int,int*,int) ;int (* init ) (int,TYPE_1__**,int*,int) ;int (* diag ) (TYPE_1__*,scalar_t__) ;int (* enable ) (TYPE_1__*) ;} ;
typedef TYPE_2__ keyboard_switch_t ;
typedef int device_t ;
struct TYPE_14__ {int ks_timer; } ;
typedef TYPE_3__ atkbd_state_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,TYPE_1__*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_1__*) ;
 TYPE_2__* FUNC_6 (int ) ;
 int VAR_5 ;
 int FUNC_7 (int,int*,int) ;
 int FUNC_8 (int,TYPE_1__**,int*,int) ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (TYPE_1__*,scalar_t__) ;

int
FUNC_11(device_t VAR_6, keyboard_t **VAR_7, int VAR_8, int VAR_9)
{
 keyboard_switch_t *VAR_10;
 atkbd_state_t *VAR_11;
 int VAR_12[2];
 int VAR_13;
 int VAR_14;

 VAR_10 = FUNC_6(VAR_0);
 if (VAR_10 == ((void*)0))
  return VAR_1;


 VAR_14 = FUNC_4(VAR_6);
 VAR_12[0] = FUNC_4(FUNC_3(VAR_6));
 VAR_12[1] = VAR_8;
 *VAR_7 = ((void*)0);
 VAR_13 = (*VAR_10->probe)(VAR_14, VAR_12, VAR_9);
 if (VAR_13)
  return VAR_13;
 VAR_13 = (*VAR_10->init)(VAR_14, VAR_7, VAR_12, VAR_9);
 if (VAR_13)
  return VAR_13;
 (*VAR_10->enable)(*VAR_7);
 VAR_11 = (atkbd_state_t *)(*VAR_7)->kb_data;
 FUNC_2(&VAR_11->ks_timer, 0);
 FUNC_1(*VAR_7);

 if (VAR_4)
  (*VAR_10->diag)(*VAR_7, VAR_4);

 FUNC_0(VAR_5, VAR_3, *VAR_7,
     VAR_2);

 return 0;
}
