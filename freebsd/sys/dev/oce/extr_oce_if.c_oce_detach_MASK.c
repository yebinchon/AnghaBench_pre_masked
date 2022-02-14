
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int device_t ;
struct TYPE_7__ {int ifp; int * vlan_detach; int * vlan_attach; int timer; int dev_lock; struct TYPE_7__* next; } ;
typedef TYPE_1__* POCE_SOFTC ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 TYPE_1__* FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (TYPE_1__*) ;
 TYPE_1__* VAR_0 ;
 TYPE_1__* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int
FUNC_10(device_t VAR_4)
{
 POCE_SOFTC VAR_5 = FUNC_5(VAR_4);
 POCE_SOFTC VAR_6, *VAR_7, VAR_8 = ((void*)0);

        VAR_6 = VAR_0;
        VAR_7 = &VAR_0;
        while (VAR_6 != ((void*)0)) {
          if (VAR_6 == VAR_5) {
            *VAR_7 = VAR_5->next;
            if (VAR_5->next == ((void*)0)) {
              VAR_1 = VAR_8;
            }
            break;
          }
          VAR_8 = VAR_6;
          VAR_7 = &VAR_6->next;
          VAR_6 = VAR_6->next;
        }

 FUNC_1(&VAR_5->dev_lock);
 FUNC_9(VAR_5);
 FUNC_2(&VAR_5->dev_lock);

 FUNC_4(&VAR_5->timer);

 if (VAR_5->vlan_attach != ((void*)0))
  FUNC_0(VAR_2, VAR_5->vlan_attach);
 if (VAR_5->vlan_detach != ((void*)0))
  FUNC_0(VAR_3, VAR_5->vlan_detach);

 FUNC_6(VAR_5->ifp);

 FUNC_7(VAR_5->ifp);

 FUNC_8(VAR_5);

 FUNC_3(VAR_4);

 return 0;
}
