
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlx5_flow_destination {int type; int vport_num; int tir_num; TYPE_1__* ft; } ;
struct TYPE_2__ {int id; } ;


 int VAR_0 ;



 int FUNC_0 (char*) ;
 char* FUNC_1 (int,int ) ;
 int FUNC_2 (char*,int,char*,char*,int) ;

__attribute__((used)) static char *FUNC_3(struct mlx5_flow_destination *VAR_1)
{
 char *VAR_2 = FUNC_1(sizeof(char) * 20, VAR_0);

 switch (VAR_1->type) {
 case 130:
  FUNC_2(VAR_2, 20, "dest_%s_%u", "flow_table",
    VAR_1->ft->id);
  return VAR_2;
 case 128:
  FUNC_2(VAR_2, 20, "dest_%s_%u", "vport",
    VAR_1->vport_num);
  return VAR_2;
 case 129:
  FUNC_2(VAR_2, 20, "dest_%s_%u", "tir", VAR_1->tir_num);
  return VAR_2;
 default:
  FUNC_0(VAR_2);
  return ((void*)0);
 }
}
