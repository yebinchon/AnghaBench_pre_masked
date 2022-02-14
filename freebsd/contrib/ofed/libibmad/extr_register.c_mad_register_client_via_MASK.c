
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct ibmad_port {int* class_agents; } ;


 int FUNC_0 (int ,int,int ) ;
 int FUNC_1 (struct ibmad_port*) ;

int FUNC_2(int VAR_0, uint8_t VAR_1,
       struct ibmad_port *VAR_2)
{
 int VAR_3;

 if (!VAR_2)
  return -1;

 VAR_3 = FUNC_0(FUNC_1(VAR_2), VAR_0,
      VAR_1);
 if (VAR_3 < 0)
  return VAR_3;

 VAR_2->class_agents[VAR_0] = VAR_3;
 return 0;
}
