
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int errbuf; scalar_t__ activated; } ;
typedef TYPE_1__ pcap_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int,char*) ;

__attribute__((used)) static int
FUNC_1(pcap_t *VAR_2)
{
 if (VAR_2->activated) {

  (void)FUNC_0(VAR_2->errbuf, sizeof(VAR_2->errbuf),
      "This operation isn't properly handled by that device");
  return (VAR_0);
 }

 (void)FUNC_0(VAR_2->errbuf, sizeof(VAR_2->errbuf),
     "This handle hasn't been activated yet");

 return (VAR_1);
}
