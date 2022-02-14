
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int proto; } ;
struct TYPE_4__ {TYPE_1__ id; } ;
struct xfrm_userspi_info {int max; scalar_t__ min; TYPE_2__ info; } ;


 int VAR_0 ;




__attribute__((used)) static int FUNC_0(struct xfrm_userspi_info *VAR_1)
{
 switch (VAR_1->info.id.proto) {
 case 130:
 case 128:
  break;

 case 129:

  if (VAR_1->max >= 0x10000)
   return -VAR_0;
  break;

 default:
  return -VAR_0;
 }

 if (VAR_1->min > VAR_1->max)
  return -VAR_0;

 return 0;
}
