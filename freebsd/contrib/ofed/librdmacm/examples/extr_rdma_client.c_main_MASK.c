
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int FUNC_1 (int,char**,char*) ;
 void* VAR_0 ;
 void* VAR_1 ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 () ;
 void* VAR_2 ;

int FUNC_4(int VAR_3, char **VAR_4)
{
 int VAR_5, VAR_6;

 while ((VAR_5 = FUNC_1(VAR_3, VAR_4, "s:p:")) != -1) {
  switch (VAR_5) {
  case 's':
   VAR_2 = VAR_0;
   break;
  case 'p':
   VAR_1 = VAR_0;
   break;
  default:
   FUNC_2("usage: %s\n", VAR_4[0]);
   FUNC_2("\t[-s server_address]\n");
   FUNC_2("\t[-p port_number]\n");
   FUNC_0(1);
  }
 }

 FUNC_2("rdma_client: start\n");
 VAR_6 = FUNC_3();
 FUNC_2("rdma_client: end %d\n", VAR_6);
 return VAR_6;
}
