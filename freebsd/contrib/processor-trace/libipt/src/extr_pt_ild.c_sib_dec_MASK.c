
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
struct pt_ild {scalar_t__ max_bytes; int disp_bytes; } ;


 int FUNC_0 (struct pt_ild*,scalar_t__) ;
 scalar_t__ FUNC_1 (struct pt_ild*,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (struct pt_ild*) ;

__attribute__((used)) static int FUNC_3(struct pt_ild *VAR_2, uint8_t VAR_3)
{
 uint8_t VAR_4;

 if (!VAR_2)
  return -VAR_1;

 if (VAR_2->max_bytes <= VAR_3)
  return -VAR_0;

 VAR_4 = FUNC_1(VAR_2, VAR_3);
 if ((VAR_4 & 0x07) == 0x05 && FUNC_2(VAR_2) == 0)
  VAR_2->disp_bytes = 4;

 return FUNC_0(VAR_2, VAR_3 + 1);
}
