
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct ctl_cmd_entry {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;




__attribute__((used)) static int
FUNC_0(uint8_t VAR_3, const struct ctl_cmd_entry *VAR_4)
{

 switch (VAR_3) {
 case 129:
  if ((VAR_4->flags & VAR_1) == 0)
   return (0);
  break;
 case 128:
  if ((VAR_4->flags & VAR_2) == 0)
   return (0);
  break;
 case 130:
  if ((VAR_4->flags & VAR_0) == 0)
   return (0);
  break;
 default:
  return (0);
 }
 return (1);
}
