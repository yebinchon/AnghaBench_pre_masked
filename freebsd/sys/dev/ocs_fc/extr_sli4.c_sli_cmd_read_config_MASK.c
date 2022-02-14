
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int sli4_t ;
struct TYPE_3__ {int command; } ;
struct TYPE_4__ {TYPE_1__ hdr; } ;
typedef TYPE_2__ sli4_cmd_read_config_t ;
typedef int int32_t ;


 int VAR_0 ;
 int FUNC_0 (void*,int ,size_t) ;

__attribute__((used)) static int32_t
FUNC_1(sli4_t *VAR_1, void *VAR_2, size_t VAR_3)
{
 sli4_cmd_read_config_t *VAR_4 = VAR_2;

 FUNC_0(VAR_2, 0, VAR_3);

 VAR_4->hdr.command = VAR_0;

 return sizeof(sli4_cmd_read_config_t);
}
