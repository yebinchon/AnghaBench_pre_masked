
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int sbit; int ebit; } ;
struct itbl_entry {unsigned long flags; TYPE_1__ range; } ;


 struct itbl_entry* FUNC_0 (int ,int ,char*,unsigned long) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int VAR_1 ;

struct itbl_entry *
FUNC_2 (int VAR_2, char *VAR_3, unsigned long VAR_4,
        int VAR_5, int VAR_6, unsigned long VAR_7)
{
  struct itbl_entry *VAR_8;
  VAR_8 = FUNC_0 (FUNC_1 (VAR_2), VAR_0, VAR_3, VAR_4);
  if (VAR_8)
    {
      VAR_8->range.sbit = VAR_5;
      VAR_8->range.ebit = VAR_6;
      VAR_8->flags = VAR_7;
      VAR_1++;
    }
  return VAR_8;
}
