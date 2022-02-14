
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
struct pt_ild {scalar_t__ disp_bytes; scalar_t__ max_bytes; scalar_t__ disp_pos; } ;


 int FUNC_0 (struct pt_ild*) ;
 int FUNC_1 (struct pt_ild*,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_2(struct pt_ild *VAR_2, uint8_t VAR_3)
{
 uint8_t VAR_4;
 int VAR_5;

 if (!VAR_2)
  return -VAR_1;

 VAR_5 = FUNC_0(VAR_2);
 if (VAR_5 < 0)
  return VAR_5;

 VAR_4 = VAR_2->disp_bytes;
 if (VAR_4 == 0)
  return FUNC_1(VAR_2, VAR_3);

 if (VAR_3 + VAR_4 > VAR_2->max_bytes)
  return -VAR_0;



 VAR_2->disp_pos = VAR_3;

 return FUNC_1(VAR_2, VAR_3 + VAR_4);
}
