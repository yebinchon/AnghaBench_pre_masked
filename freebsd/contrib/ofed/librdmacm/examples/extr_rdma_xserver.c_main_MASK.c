
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ai_qp_type; int ai_port_space; int ai_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,char**,char*) ;
 TYPE_1__ VAR_5 ;
 int * VAR_6 ;
 int * VAR_7 ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 () ;
 int FUNC_4 (int ) ;

int FUNC_5(int VAR_8, char **VAR_9)
{
 int VAR_10, VAR_11;

 VAR_5.ai_flags = VAR_2;
 VAR_5.ai_port_space = VAR_4;
 VAR_5.ai_qp_type = VAR_0;

 while ((VAR_10 = FUNC_1(VAR_8, VAR_9, "p:c:")) != -1) {
  switch (VAR_10) {
  case 'p':
   VAR_7 = VAR_6;
   break;
  case 'c':
   switch (FUNC_4(VAR_6[0])) {
   case 'r':
    break;
   case 'x':
    VAR_5.ai_port_space = VAR_3;
    VAR_5.ai_qp_type = VAR_1;
    break;
   default:
    goto err;
   }
   break;
  default:
   goto err;
  }
 }

 FUNC_2("%s: start\n", VAR_9[0]);
 VAR_11 = FUNC_3();
 FUNC_2("%s: end %d\n", VAR_9[0], VAR_11);
 return VAR_11;

err:
 FUNC_2("usage: %s\n", VAR_9[0]);
 FUNC_2("\t[-p port_number]\n");
 FUNC_2("\t[-c communication type]\n");
 FUNC_2("\t    r - RC: reliable-connected (default)\n");
 FUNC_2("\t    x - XRC: extended-reliable-connected\n");
 FUNC_0(1);
}
