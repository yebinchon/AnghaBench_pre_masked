
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int u_char ;
struct TYPE_5__ {int (* read_op ) (TYPE_1__*,int,int ,int *) ;int * rfile; } ;
typedef TYPE_1__ pcap_t ;
typedef int pcap_handler ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*,int,int ,int *) ;
 int FUNC_2 (TYPE_1__*,int,int ,int *) ;

int
FUNC_3(pcap_t *VAR_0, int VAR_1, pcap_handler VAR_2, u_char *VAR_3)
{
 register int VAR_4;

 for (;;) {
  if (VAR_0->rfile != ((void*)0)) {



   VAR_4 = FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3);
  } else {




   do {
    VAR_4 = VAR_0->read_op(VAR_0, VAR_1, VAR_2, VAR_3);
   } while (VAR_4 == 0);
  }
  if (VAR_4 <= 0)
   return (VAR_4);
  if (!FUNC_0(VAR_1)) {
   VAR_1 -= VAR_4;
   if (VAR_1 <= 0)
    return (0);
  }
 }
}
