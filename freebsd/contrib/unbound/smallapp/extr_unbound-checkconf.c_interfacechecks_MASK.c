
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_storage {int dummy; } ;
struct config_file {int num_ifs; int num_out_ifs; int * out_ifs; int * ifs; } ;
typedef int socklen_t ;


 int VAR_0 ;
 int FUNC_0 (int ,struct sockaddr_storage*,int *) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (int ,int ,struct sockaddr_storage*,int *) ;
 int FUNC_3 (int ,int ,struct sockaddr_storage*,int *,int*) ;
 scalar_t__ FUNC_4 (int ,int ) ;

__attribute__((used)) static void
FUNC_5(struct config_file* VAR_1)
{
 int VAR_2;
 struct sockaddr_storage VAR_3;
 socklen_t VAR_4;
 int VAR_5, VAR_6;
 for(VAR_5=0; VAR_5<VAR_1->num_ifs; VAR_5++) {
  if(!FUNC_0(VAR_1->ifs[VAR_5], &VAR_3, &VAR_4)) {
   FUNC_1("cannot parse interface specified as '%s'",
    VAR_1->ifs[VAR_5]);
  }
  for(VAR_6=0; VAR_6<VAR_1->num_ifs; VAR_6++) {
   if(VAR_5!=VAR_6 && FUNC_4(VAR_1->ifs[VAR_5], VAR_1->ifs[VAR_6])==0)
    FUNC_1("interface: %s present twice, "
     "cannot bind same ports twice.",
     VAR_1->ifs[VAR_5]);
  }
 }
 for(VAR_5=0; VAR_5<VAR_1->num_out_ifs; VAR_5++) {
  if(!FUNC_2(VAR_1->out_ifs[VAR_5], VAR_0, &VAR_3, &VAR_4) &&
     !FUNC_3(VAR_1->out_ifs[VAR_5], VAR_0, &VAR_3, &VAR_4, &VAR_2)) {
   FUNC_1("cannot parse outgoing-interface "
    "specified as '%s'", VAR_1->out_ifs[VAR_5]);
  }
  for(VAR_6=0; VAR_6<VAR_1->num_out_ifs; VAR_6++) {
   if(VAR_5!=VAR_6 && FUNC_4(VAR_1->out_ifs[VAR_5], VAR_1->out_ifs[VAR_6])==0)
    FUNC_1("outgoing-interface: %s present "
     "twice, cannot bind same ports twice.",
     VAR_1->out_ifs[VAR_5]);
  }
 }
}
