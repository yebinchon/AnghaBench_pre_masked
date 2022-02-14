
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ibmad_port {int dummy; } ;
typedef int ibnd_node_t ;
typedef int ibnd_fabric_t ;


 int FUNC_0 (int *,int ,int ,struct ibmad_port*) ;
 int FUNC_1 (int *,int ,int ,struct ibmad_port*,int *) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;

void FUNC_2(ibnd_node_t *VAR_3, struct ibmad_port *VAR_4,
  ibnd_fabric_t *VAR_5)
{
 if (VAR_1)
  FUNC_0(VAR_3, VAR_2, VAR_0, VAR_4);
 else
  FUNC_1(VAR_3, VAR_2, VAR_0,
      VAR_4, VAR_5);
}
