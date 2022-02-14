
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nvme_controller_data {int dummy; } ;
struct cmd {int dummy; } ;
struct TYPE_2__ {scalar_t__ power; int workload; scalar_t__ list; int dev; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int,char**,struct cmd const*) ;
 int FUNC_1 (int,char**,struct cmd const*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (int ,int*,int,int) ;
 TYPE_1__ VAR_1 ;
 int FUNC_6 (struct nvme_controller_data*) ;
 int FUNC_7 (int,scalar_t__,int ,int ) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int,struct nvme_controller_data*) ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_10(const struct cmd *VAR_3, int VAR_4, char *VAR_5[])
{
 struct nvme_controller_data VAR_6;
 int VAR_7;

 FUNC_1(VAR_4, VAR_5, VAR_3);

 if (VAR_1.list && VAR_1.power != VAR_0) {
  FUNC_4(VAR_2, "Can't set power and list power states\n");
  FUNC_0(VAR_4, VAR_5, VAR_3);
 }

 FUNC_5(VAR_1.dev, &VAR_7, 1, 1);

 if (VAR_1.list) {
  FUNC_9(VAR_7, &VAR_6);
  FUNC_6(&VAR_6);
  goto out;
 }

 if (VAR_1.power != VAR_0) {
  FUNC_7(VAR_7, VAR_1.power, VAR_1.workload, 0);
  goto out;
 }
 FUNC_8(VAR_7);

out:
 FUNC_2(VAR_7);
 FUNC_3(0);
}
