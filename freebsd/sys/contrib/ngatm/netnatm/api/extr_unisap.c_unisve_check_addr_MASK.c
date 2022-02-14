
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct unisve_addr {scalar_t__ tag; scalar_t__ type; scalar_t__ plan; int len; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;

int
FUNC_0(const struct unisve_addr *VAR_12)
{
 if (VAR_12->tag == VAR_0)
  return (VAR_6);
 if (VAR_12->tag == VAR_1)
  return (VAR_6);
 if (VAR_12->tag != VAR_7)
  return (VAR_4);

 if (VAR_12->type == VAR_10) {
  if (VAR_12->plan != VAR_9)
   return (VAR_5);
  if (VAR_12->len == 0 || VAR_12->len > 15)
   return (VAR_2);

 } else if (VAR_12->type == VAR_11) {
  if (VAR_12->plan != VAR_8)
   return (VAR_5);
  if (VAR_12->len != 19)
   return (VAR_2);
 } else
  return (VAR_3);

 return (VAR_6);
}
