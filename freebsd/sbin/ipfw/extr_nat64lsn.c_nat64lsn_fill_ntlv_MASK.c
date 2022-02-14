
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_4__ {int length; int type; } ;
struct TYPE_5__ {int idx; int name; int set; TYPE_1__ head; } ;
typedef TYPE_2__ ipfw_obj_ntlv ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,char const*,int) ;

__attribute__((used)) static void
FUNC_2(ipfw_obj_ntlv *VAR_0, const char *VAR_1, uint8_t VAR_2)
{

 VAR_0->head.type = FUNC_0(1);
 VAR_0->head.length = sizeof(ipfw_obj_ntlv);
 VAR_0->idx = 1;
 VAR_0->set = VAR_2;
 FUNC_1(VAR_0->name, VAR_1, sizeof(VAR_0->name));
}
