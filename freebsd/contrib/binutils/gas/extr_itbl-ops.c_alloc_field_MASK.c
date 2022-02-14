
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int sbit; int ebit; } ;
struct itbl_field {unsigned long flags; TYPE_1__ range; int type; } ;
typedef int e_type ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct itbl_field*,int ,int) ;

__attribute__((used)) static struct itbl_field *
FUNC_2 (e_type VAR_0, int VAR_1, int VAR_2,
      unsigned long VAR_3)
{
  struct itbl_field *VAR_4;
  VAR_4 = (struct itbl_field *) FUNC_0 (sizeof (struct itbl_field));
  if (VAR_4)
    {
      FUNC_1 (VAR_4, 0, sizeof (struct itbl_field));
      VAR_4->type = VAR_0;
      VAR_4->range.sbit = VAR_1;
      VAR_4->range.ebit = VAR_2;
      VAR_4->flags = VAR_3;
    }
  return VAR_4;
}
