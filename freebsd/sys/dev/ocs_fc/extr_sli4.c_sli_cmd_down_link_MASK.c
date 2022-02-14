
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int sli4_t ;
struct TYPE_2__ {int command; } ;
typedef TYPE_1__ sli4_mbox_command_header_t ;
typedef int int32_t ;


 int VAR_0 ;
 int FUNC_0 (void*,int ,size_t) ;

int32_t
FUNC_1(sli4_t *VAR_1, void *VAR_2, size_t VAR_3)
{
 sli4_mbox_command_header_t *VAR_4 = VAR_2;

 FUNC_0(VAR_2, 0, VAR_3);

 VAR_4->command = VAR_0;



 return sizeof(sli4_mbox_command_header_t);
}
