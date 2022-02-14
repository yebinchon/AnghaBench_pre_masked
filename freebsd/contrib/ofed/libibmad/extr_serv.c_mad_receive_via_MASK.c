
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ibmad_port {int port_id; } ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct ibmad_port*,int) ;
 int FUNC_2 (int ) ;
 void* FUNC_3 (int,scalar_t__) ;
 int FUNC_4 (void*) ;
 int FUNC_5 (int ,void*,int*,int ) ;
 scalar_t__ FUNC_6 () ;

void *FUNC_7(void *VAR_2, int VAR_3, struct ibmad_port *VAR_4)
{
 void *VAR_5 = VAR_2 ? VAR_2 : FUNC_3(1, FUNC_6() + VAR_0);
 int VAR_6;
 int VAR_7 = VAR_0;

 if ((VAR_6 = FUNC_5(VAR_4->port_id, VAR_5, &VAR_7,
          FUNC_1(VAR_4, VAR_3))) < 0) {
  if (!VAR_2)
   FUNC_4(VAR_5);
  FUNC_0("recv failed: %s", FUNC_2(VAR_1));
  return 0;
 }

 return VAR_5;
}
