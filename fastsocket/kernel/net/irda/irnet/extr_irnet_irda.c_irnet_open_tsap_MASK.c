
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int name; TYPE_2__* instance; int status_indication; int flow_indication; int data_indication; int disconnect_indication; int connect_indication; int connect_confirm; } ;
typedef TYPE_1__ notify_t ;
struct TYPE_10__ {int stsap_sel; TYPE_3__* tsap; } ;
typedef TYPE_2__ irnet_socket ;
struct TYPE_11__ {int stsap_sel; } ;


 int FUNC_0 (int ,int ,int ,char*) ;
 int VAR_0 ;
 int FUNC_1 (int ,char*,TYPE_2__*) ;
 int FUNC_2 (int ,char*,TYPE_3__*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (TYPE_1__*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 TYPE_3__* FUNC_4 (int ,int ,TYPE_1__*) ;
 int FUNC_5 (int ,int ,int) ;

__attribute__((used)) static inline int
FUNC_6(irnet_socket * VAR_13)
{
  notify_t VAR_14;

  FUNC_1(VAR_4, "(self=0x%p)\n", VAR_13);

  FUNC_0(VAR_13->tsap != ((void*)0), -VAR_1, VAR_3, "Already busy !\n");


  FUNC_3(&VAR_14);
  VAR_14.connect_confirm = VAR_7;
  VAR_14.connect_indication = VAR_8;
  VAR_14.disconnect_indication = VAR_10;
  VAR_14.data_indication = VAR_9;

  VAR_14.flow_indication = VAR_11;
  VAR_14.status_indication = VAR_12;
  VAR_14.instance = VAR_13;
  FUNC_5(VAR_14.name, VAR_5, sizeof(VAR_14.name));


  VAR_13->tsap = FUNC_4(VAR_6, VAR_0,
          &VAR_14);
  FUNC_0(VAR_13->tsap == ((void*)0), -VAR_2,
  VAR_3, "Unable to allocate TSAP !\n");


  VAR_13->stsap_sel = VAR_13->tsap->stsap_sel;

  FUNC_2(VAR_4, " - tsap=0x%p, sel=0x%X\n",
 VAR_13->tsap, VAR_13->stsap_sel);
  return 0;
}
