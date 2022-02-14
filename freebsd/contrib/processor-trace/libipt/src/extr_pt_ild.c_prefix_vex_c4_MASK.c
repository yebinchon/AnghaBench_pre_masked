
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
struct TYPE_3__ {int vex; int rex_r; int rex_w; } ;
struct TYPE_4__ {TYPE_1__ s; } ;
struct pt_ild {scalar_t__ max_bytes; int imm1_bytes; scalar_t__ map; TYPE_2__ u; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__,int,int) ;
 scalar_t__ FUNC_1 (struct pt_ild*,scalar_t__) ;
 int FUNC_2 (struct pt_ild*) ;
 int FUNC_3 (struct pt_ild*,scalar_t__) ;
 int FUNC_4 (struct pt_ild*,scalar_t__) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_5(struct pt_ild *VAR_4, uint8_t VAR_5, uint8_t VAR_6)
{
 uint8_t VAR_7;
 uint8_t VAR_8, VAR_9, VAR_10;

 (void) VAR_6;

 if (!VAR_4)
  return -VAR_3;

 VAR_7 = VAR_4->max_bytes;


 if (VAR_7 <= (VAR_5 + 1))
  return -VAR_2;

 VAR_8 = FUNC_1(VAR_4, VAR_5 + 1);


 if (!FUNC_2(VAR_4) && !FUNC_0(VAR_8, 0xc0, 0xc0))
  return FUNC_3(VAR_4, VAR_5);





 if (VAR_7 < (VAR_5 + 4))
  return -VAR_2;

 VAR_9 = FUNC_1(VAR_4, VAR_5 + 2);

 VAR_4->u.s.vex = 1;
 if (VAR_8 & 0x80)
  VAR_4->u.s.rex_r = 1;
 if (VAR_9 & 0x80)
  VAR_4->u.s.rex_w = 1;

 VAR_10 = VAR_8 & 0x1f;
 if (VAR_1 <= VAR_10)
  return -VAR_2;

 VAR_4->map = VAR_10;
 if (VAR_10 == VAR_0)
  VAR_4->imm1_bytes = 1;


 VAR_5 += 3;
 return FUNC_4(VAR_4, VAR_5);
}
