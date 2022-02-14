
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct protoent_data {int dummy; } ;
struct protoent {int p_proto; } ;


 int VAR_0 ;
 struct protoent* FUNC_0 (char const*) ;
 int FUNC_1 (char const*,struct protoent*,char*,...) ;

int
FUNC_2(const char *VAR_1)
{
 struct protoent *VAR_2;
 VAR_2 = FUNC_0(VAR_1);

 if (VAR_2 != 0)
  return VAR_2->p_proto;
 else
  return VAR_0;
}
