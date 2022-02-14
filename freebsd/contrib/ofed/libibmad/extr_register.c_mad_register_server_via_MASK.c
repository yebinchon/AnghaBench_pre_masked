
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct ibmad_port {int* class_agents; int port_id; } ;
typedef int class_method_mask ;


 int FUNC_0 (char*,int,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (long*,long*,int) ;
 int FUNC_2 (long*,int,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,int,int,int,long*) ;
 int FUNC_5 (int ,int,int,int*,long*) ;

int FUNC_6(int VAR_2, uint8_t VAR_3,
       long VAR_4[], uint32_t VAR_5,
       struct ibmad_port *VAR_6)
{
 long VAR_7[16 / sizeof(long)];
 uint8_t VAR_8[3];
 int VAR_9, VAR_10;

 if (VAR_4)
  FUNC_1(VAR_7, VAR_4,
         sizeof VAR_7);
 else
  FUNC_2(VAR_7, 0xff, sizeof(VAR_7));

 if (!VAR_6)
  return -1;

 if (VAR_6->class_agents[VAR_2] >= 0) {
  FUNC_0("Class 0x%x already registered %d",
        VAR_2, VAR_6->class_agents[VAR_2]);
  return -1;
 }
 if ((VAR_10 = FUNC_3(VAR_2)) <= 0) {
  FUNC_0("Unknown class 0x%x mgmt_class", VAR_2);
  return -1;
 }
 if (VAR_2 >= VAR_1 &&
     VAR_2 <= VAR_0) {
  VAR_8[0] = (VAR_5 >> 16) & 0xff;
  VAR_8[1] = (VAR_5 >> 8) & 0xff;
  VAR_8[2] = VAR_5 & 0xff;
  if ((VAR_9 =
       FUNC_5(VAR_6->port_id, VAR_2, VAR_3,
           VAR_8, VAR_7)) < 0) {
   FUNC_0("Can't register agent for class %d", VAR_2);
   return -1;
  }
 } else
     if ((VAR_9 =
   FUNC_4(VAR_6->port_id, VAR_2, VAR_10, VAR_3,
          VAR_7)) < 0) {
  FUNC_0("Can't register agent for class %d", VAR_2);
  return -1;
 }

 VAR_6->class_agents[VAR_2] = VAR_9;

 return VAR_9;
}
