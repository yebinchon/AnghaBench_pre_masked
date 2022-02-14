
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nicpf {int msix_table_res; int dev; scalar_t__ num_vec; scalar_t__ msix_enabled; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void
FUNC_3(struct nicpf *VAR_1)
{
 if (VAR_1->msix_enabled) {
  FUNC_1(VAR_1->dev);
  VAR_1->msix_enabled = 0;
  VAR_1->num_vec = 0;
 }

 FUNC_0(VAR_1->dev, VAR_0,
     FUNC_2(VAR_1->msix_table_res), VAR_1->msix_table_res);
}
