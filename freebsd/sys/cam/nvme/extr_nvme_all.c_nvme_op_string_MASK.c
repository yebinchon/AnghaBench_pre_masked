
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvme_command {size_t opc; } ;


 size_t FUNC_0 (char const**) ;
 char const** VAR_0 ;

const char *
FUNC_1(const struct nvme_command *VAR_1, int VAR_2)
{

 if (VAR_2) {
  return "ADMIN";
 } else {
  if (VAR_1->opc >= FUNC_0(VAR_0))
   return "UNKNOWN";
  return VAR_0[VAR_1->opc];
 }
}
