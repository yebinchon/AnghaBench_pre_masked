
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int notifier_call; } ;
struct qlnxr_dev {int ha; TYPE_1__ nb_inet; } ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static int
FUNC_2(struct qlnxr_dev *VAR_1)
{
 int VAR_2;
 VAR_1->nb_inet.notifier_call = VAR_0;
 VAR_2 = FUNC_1(&VAR_1->nb_inet);
 if (VAR_2) {
  FUNC_0(VAR_1->ha, "Failed to register inetaddr\n");
  return VAR_2;
 }

 return 0;
}
