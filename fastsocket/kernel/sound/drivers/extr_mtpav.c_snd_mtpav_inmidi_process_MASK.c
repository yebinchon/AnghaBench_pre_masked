
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mtpav_port {int mode; int input; } ;
struct mtpav {size_t inmidiport; int num_ports; struct mtpav_port* ports; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *,int) ;

__attribute__((used)) static void FUNC_1(struct mtpav *VAR_2, u8 VAR_3)
{
 struct mtpav_port *VAR_4;

 if ((int)VAR_2->inmidiport > VAR_2->num_ports * 2 + VAR_1)
  return;

 VAR_4 = &VAR_2->ports[VAR_2->inmidiport];
 if (VAR_4->mode & VAR_0)
  FUNC_0(VAR_4->input, &VAR_3, 1);
}
