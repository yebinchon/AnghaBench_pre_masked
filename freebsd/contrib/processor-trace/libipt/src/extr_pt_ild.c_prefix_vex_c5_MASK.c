
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
struct TYPE_3__ {int vex; int rex_r; } ;
struct TYPE_4__ {TYPE_1__ s; } ;
struct pt_ild {scalar_t__ max_bytes; int map; TYPE_2__ u; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,int,int) ;
 scalar_t__ FUNC_1 (struct pt_ild*,scalar_t__) ;
 int FUNC_2 (struct pt_ild*) ;
 int FUNC_3 (struct pt_ild*,scalar_t__) ;
 int FUNC_4 (struct pt_ild*,scalar_t__) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_5(struct pt_ild *VAR_3, uint8_t VAR_4, uint8_t VAR_5)
{
 uint8_t VAR_6;
 uint8_t VAR_7;

 (void) VAR_5;

 if (!VAR_3)
  return -VAR_2;

 VAR_6 = VAR_3->max_bytes;


 if (VAR_6 <= (VAR_4 + 1))
  return -VAR_1;

 VAR_7 = FUNC_1(VAR_3, VAR_4 + 1);


 if (!FUNC_2(VAR_3) && !FUNC_0(VAR_7, 0xc0, 0xc0))
  return FUNC_3(VAR_3, VAR_4);





 if (VAR_6 < (VAR_4 + 3))
  return -VAR_1;

 VAR_3->u.s.vex = 1;
 if (VAR_7 & 0x80)
  VAR_3->u.s.rex_r = 1;

 VAR_3->map = VAR_0;


 VAR_4 += 2;
 return FUNC_4(VAR_3, VAR_4);
}
