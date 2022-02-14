
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ nonblock; } ;
struct TYPE_10__ {int (* activate_op ) (TYPE_2__*) ;int (* setnonblock_op ) (TYPE_2__*,int) ;int activated; char* errbuf; int (* cleanup_op ) (TYPE_2__*) ;TYPE_1__ opt; } ;
typedef TYPE_2__ pcap_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*) ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (char*,int ,char*,int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*,int) ;
 int FUNC_6 (TYPE_2__*) ;

int
FUNC_7(pcap_t *VAR_2)
{
 int VAR_3;
 if (FUNC_1(VAR_2))
  return (VAR_1);
 VAR_3 = VAR_2->activate_op(VAR_2);
 if (VAR_3 >= 0) {




  if (VAR_2->opt.nonblock) {
   VAR_3 = VAR_2->setnonblock_op(VAR_2, 1);
   if (VAR_3 < 0) {




    VAR_2->cleanup_op(VAR_2);
    FUNC_0(VAR_2);
    return (VAR_3);
   }
  }
  VAR_2->activated = 1;
 } else {
  if (VAR_2->errbuf[0] == '\0') {






   FUNC_2(VAR_2->errbuf, VAR_0, "%s",
       FUNC_3(VAR_3));
  }





  FUNC_0(VAR_2);
 }
 return (VAR_3);
}
