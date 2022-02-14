
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct object_kt {scalar_t__ uidx; scalar_t__ type; } ;
struct TYPE_3__ {scalar_t__ type; } ;
struct TYPE_4__ {scalar_t__ idx; TYPE_1__ head; } ;
typedef TYPE_2__ ipfw_obj_ntlv ;



__attribute__((used)) static int
FUNC_0(const void *VAR_0, const void *VAR_1)
{
 ipfw_obj_ntlv *VAR_2;
 struct object_kt VAR_3;

 VAR_3 = *((struct object_kt *)VAR_0);
 VAR_2 = (ipfw_obj_ntlv *)VAR_1;

 if (VAR_3.uidx < VAR_2->idx)
  return (-1);
 else if (VAR_3.uidx > VAR_2->idx)
  return (1);

 if (VAR_3.type < VAR_2->head.type)
  return (-1);
 else if (VAR_3.type > VAR_2->head.type)
  return (1);

 return (0);
}
