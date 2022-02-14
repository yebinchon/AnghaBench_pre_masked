
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int* embed; } ;
struct TYPE_5__ {scalar_t__ command; int status; } ;
struct TYPE_6__ {TYPE_1__ payload; scalar_t__ emb; TYPE_2__ hdr; } ;
typedef TYPE_3__ sli4_cmd_sli_config_t ;
typedef int int32_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,char*,void*,int) ;
 int FUNC_1 (int *,char*) ;

__attribute__((used)) static int32_t
FUNC_2(void *VAR_1)
{
 sli4_cmd_sli_config_t *VAR_2 = VAR_1;

 if (!VAR_1 || (VAR_0 != VAR_2->hdr.command)) {
  FUNC_0(((void*)0), "bad parameter buf=%p cmd=%#x\n", VAR_1,
    VAR_1 ? VAR_2->hdr.command : -1);
  return -1;
 }

 if (VAR_2->hdr.status) {
  return VAR_2->hdr.status;
 }

 if (VAR_2->emb) {
  return VAR_2->payload.embed[4];
 } else {
  FUNC_1(((void*)0), "external buffers not supported\n");
  return -1;
 }
}
