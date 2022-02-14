
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct itbl_range {scalar_t__ sbit; scalar_t__ ebit; } ;
struct itbl_entry {scalar_t__ processor; unsigned long value; struct itbl_range range; struct itbl_entry* next; } ;
typedef int e_type ;
typedef scalar_t__ e_processor ;


 unsigned long FUNC_0 (unsigned long,struct itbl_range) ;
 struct itbl_entry** FUNC_1 (scalar_t__,int ) ;

__attribute__((used)) static struct itbl_entry *
FUNC_2 (e_processor VAR_0, e_type VAR_1,
    unsigned long VAR_2, struct itbl_range *VAR_3)
{
  struct itbl_entry *VAR_4, **VAR_5;
  unsigned long VAR_6;

  VAR_5 = FUNC_1 (VAR_0, VAR_1);
  for (VAR_4 = *VAR_5; VAR_4; VAR_4 = VAR_4->next)
    {
      if (VAR_0 != VAR_4->processor)
 continue;







      if (VAR_3 == 0)

 {
   VAR_6 = FUNC_0 (VAR_4->value, VAR_4->range);
   VAR_2 &= FUNC_0 (0xffffffff, VAR_4->range);
 }
      else if ((VAR_3->sbit == VAR_4->range.sbit && VAR_3->ebit == VAR_4->range.ebit)
        || (VAR_4->range.sbit == 0 && VAR_4->range.ebit == 0))
 {
   VAR_6 = FUNC_0 (VAR_4->value, *VAR_3);
   VAR_2 = FUNC_0 (VAR_2, *VAR_3);
 }
      else
 continue;
      if (VAR_2 == VAR_6)
 return VAR_4;
    }
  return 0;
}
