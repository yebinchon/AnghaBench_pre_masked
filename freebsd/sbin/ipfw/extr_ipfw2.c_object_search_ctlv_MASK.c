
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef void* uint16_t ;
struct object_kt {void* type; void* uidx; } ;
struct TYPE_6__ {char* name; } ;
typedef TYPE_1__ ipfw_obj_ntlv ;
struct TYPE_7__ {int objsize; int count; } ;
typedef TYPE_2__ ipfw_obj_ctlv ;


 TYPE_1__* FUNC_0 (struct object_kt*,TYPE_2__*,int ,int ,int ) ;
 int VAR_0 ;

__attribute__((used)) static char *
FUNC_1(ipfw_obj_ctlv *VAR_1, uint16_t VAR_2, uint16_t VAR_3)
{
 ipfw_obj_ntlv *VAR_4;
 struct object_kt VAR_5;

 VAR_5.uidx = VAR_2;
 VAR_5.type = VAR_3;

 VAR_4 = FUNC_0(&VAR_5, (VAR_1 + 1), VAR_1->count, VAR_1->objsize,
     VAR_0);

 if (VAR_4 != ((void*)0))
  return (VAR_4->name);

 return (((void*)0));
}
