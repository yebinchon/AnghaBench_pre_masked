
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 size_t FUNC_0 (char const* const*) ;
 int VAR_0 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,int ,char*,size_t) ;

const char *
FUNC_3(
 size_t VAR_1
 )
{
 char *VAR_2;
 static const char * const VAR_3[] = {
  "unspec",
  "sym_active",
  "sym_passive",
  "client",
  "server",
  "broadcast",
  "control",
  "private",
  "bclient",
 };

 if (VAR_1 >= FUNC_0(VAR_3)) {
  FUNC_1(VAR_2);
  FUNC_2(VAR_2, VAR_0, "mode#%zu", VAR_1);
  return VAR_2;
 }

 return VAR_3[VAR_1];
}
