
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct daemon {int rand; TYPE_1__* cfg; } ;
struct TYPE_2__ {int* outgoing_avail_ports; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int) ;

__attribute__((used)) static int FUNC_2(struct daemon* VAR_0, int* VAR_1)
{
 int VAR_2, VAR_3, VAR_4, VAR_5;
 int VAR_6 = 0;
 for(VAR_2=0; VAR_2<65536; VAR_2++) {
  if(VAR_0->cfg->outgoing_avail_ports[VAR_2]) {
   VAR_1[VAR_6++] = VAR_0->cfg->
    outgoing_avail_ports[VAR_2];
  }
 }
 if(VAR_6 == 0)
  FUNC_0("no ports are permitted for UDP, add "
   "with outgoing-port-permit");

 VAR_3 = VAR_6;
 while(--VAR_3 > 0) {
  VAR_4 = FUNC_1(VAR_0->rand, VAR_3+1);
  VAR_5 = VAR_1[VAR_4];
  VAR_1[VAR_4] = VAR_1[VAR_3];
  VAR_1[VAR_3] = VAR_5;
 }
 return VAR_6;
}
