
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct dvd_struct {int format; int layer_num; int agid; } ;
struct TYPE_6__ {int agid; } ;
struct TYPE_8__ {int layer_num; } ;
struct TYPE_7__ {int layer_num; } ;
struct TYPE_9__ {int type; TYPE_1__ disckey; TYPE_3__ copyright; TYPE_2__ physical; } ;
typedef TYPE_4__ l_dvd_struct ;







 int VAR_0 ;

__attribute__((used)) static int
FUNC_0(l_dvd_struct *VAR_1, struct dvd_struct *VAR_2)
{
 VAR_2->format = VAR_1->type;
 switch (VAR_2->format) {
 case 128:
  if (VAR_2->layer_num >= 4)
   return (VAR_0);
  VAR_2->layer_num = VAR_1->physical.layer_num;
  break;
 case 131:
  VAR_2->layer_num = VAR_1->copyright.layer_num;
  break;
 case 130:
  VAR_2->agid = VAR_1->disckey.agid;
  break;
 case 132:
 case 129:
  break;
 default:
  return (VAR_0);
 }
 return (0);
}
