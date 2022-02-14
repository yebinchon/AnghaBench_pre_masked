
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netent_data {int dummy; } ;
struct netent {int n_net; } ;
typedef int bpf_u_int32 ;


 struct netent* FUNC_0 (char const*) ;
 int FUNC_1 (char const*,struct netent*,char*,...) ;

bpf_u_int32
FUNC_2(const char *VAR_0)
{
 struct netent *VAR_1;
 VAR_1 = FUNC_0(VAR_0);

 if (VAR_1 != ((void*)0))
  return VAR_1->n_net;
 else
  return 0;

}
