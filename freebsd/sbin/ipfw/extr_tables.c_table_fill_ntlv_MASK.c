
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
struct TYPE_4__ {int length; int type; } ;
struct TYPE_5__ {int name; int set; int idx; TYPE_1__ head; } ;
typedef TYPE_2__ ipfw_obj_ntlv ;


 int VAR_0 ;
 int FUNC_0 (int ,char const*,int) ;

void
FUNC_1(ipfw_obj_ntlv *VAR_1, const char *VAR_2, uint8_t VAR_3,
    uint16_t VAR_4)
{

 VAR_1->head.type = VAR_0;
 VAR_1->head.length = sizeof(ipfw_obj_ntlv);
 VAR_1->idx = VAR_4;
 VAR_1->set = VAR_3;
 FUNC_0(VAR_1->name, VAR_2, sizeof(VAR_1->name));
}
