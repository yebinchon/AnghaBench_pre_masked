
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {int rex_r; int rex_w; } ;
struct TYPE_4__ {TYPE_1__ s; } ;
struct pt_ild {TYPE_2__ u; } ;


 int FUNC_0 (struct pt_ild*,int) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_1(struct pt_ild *VAR_1, uint8_t VAR_2, uint8_t VAR_3)
{
 if (!VAR_1)
  return -VAR_0;

 if (VAR_3 & 0x04)
  VAR_1->u.s.rex_r = 1;
 if (VAR_3 & 0x08)
  VAR_1->u.s.rex_w = 1;

 return FUNC_0(VAR_1, VAR_2);
}
