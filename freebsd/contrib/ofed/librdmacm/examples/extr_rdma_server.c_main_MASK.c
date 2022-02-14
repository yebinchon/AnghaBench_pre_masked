
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int FUNC_1 (int,char**,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 () ;

int FUNC_4(int VAR_2, char **VAR_3)
{
 int VAR_4, VAR_5;

 while ((VAR_4 = FUNC_1(VAR_2, VAR_3, "p:")) != -1) {
  switch (VAR_4) {
  case 'p':
   VAR_1 = VAR_0;
   break;
  default:
   FUNC_2("usage: %s\n", VAR_3[0]);
   FUNC_2("\t[-p port_number]\n");
   FUNC_0(1);
  }
 }

 FUNC_2("rdma_server: start\n");
 VAR_5 = FUNC_3();
 FUNC_2("rdma_server: end %d\n", VAR_5);
 return VAR_5;
}
