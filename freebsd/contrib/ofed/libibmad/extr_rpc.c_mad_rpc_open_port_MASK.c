
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct ibmad_port {int port_id; int portnum; struct ibmad_port* class_agents; int ca_name; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (char*,...) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (struct ibmad_port*) ;
 scalar_t__ FUNC_2 (int,int,struct ibmad_port*) ;
 struct ibmad_port* FUNC_3 (int) ;
 int FUNC_4 (struct ibmad_port*,int,int) ;
 int FUNC_5 (int ,char*,int) ;
 int FUNC_6 (int) ;
 scalar_t__ FUNC_7 () ;
 int FUNC_8 (char*,int) ;

struct ibmad_port *FUNC_9(char *VAR_7, int VAR_8,
         int *VAR_9, int VAR_10)
{
 struct ibmad_port *VAR_11;
 int VAR_12;

 if (VAR_10 >= VAR_5) {
  FUNC_0("too many classes %d requested", VAR_10);
  VAR_6 = VAR_0;
  return ((void*)0);
 }

 if (FUNC_7() < 0) {
  FUNC_0("can't init UMAD library");
  VAR_6 = VAR_2;
  return ((void*)0);
 }

 VAR_11 = FUNC_3(sizeof(*VAR_11));
 if (!VAR_11) {
  VAR_6 = VAR_3;
  return ((void*)0);
 }
 FUNC_4(VAR_11, 0, sizeof(*VAR_11));

 if ((VAR_12 = FUNC_8(VAR_7, VAR_8)) < 0) {
  FUNC_0("can't open UMAD port (%s:%d)", VAR_7, VAR_8);
  if (!VAR_6)
   VAR_6 = VAR_1;
  FUNC_1(VAR_11);
  return ((void*)0);
 }

 VAR_11->port_id = VAR_12;
 if (VAR_7)
  FUNC_5(VAR_11->ca_name, VAR_7, sizeof VAR_11->ca_name - 1);
 VAR_11->portnum = VAR_8;

 FUNC_4(VAR_11->class_agents, 0xff, sizeof VAR_11->class_agents);
 while (VAR_10--) {
  uint8_t VAR_13 = 0;
  int VAR_14 = *VAR_9++;

  if (VAR_14 == VAR_4)
   VAR_13 = 1;
  if (VAR_14 < 0 || VAR_14 >= VAR_5 ||
      FUNC_2(VAR_14, VAR_13, VAR_11) < 0) {
   FUNC_0("client_register for mgmt %d failed", VAR_14);
   if (!VAR_6)
    VAR_6 = VAR_0;
   FUNC_6(VAR_12);
   FUNC_1(VAR_11);
   return ((void*)0);
  }
 }

 return VAR_11;
}
