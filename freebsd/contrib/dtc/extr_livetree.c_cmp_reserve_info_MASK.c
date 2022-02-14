
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ address; scalar_t__ size; } ;
struct reserve_info {TYPE_1__ re; } ;



__attribute__((used)) static int FUNC_0(const void *VAR_0, const void *VAR_1)
{
 const struct reserve_info *VAR_2, *VAR_3;

 VAR_2 = *((const struct reserve_info * const *)VAR_0);
 VAR_3 = *((const struct reserve_info * const *)VAR_1);

 if (VAR_2->re.address < VAR_3->re.address)
  return -1;
 else if (VAR_2->re.address > VAR_3->re.address)
  return 1;
 else if (VAR_2->re.size < VAR_3->re.size)
  return -1;
 else if (VAR_2->re.size > VAR_3->re.size)
  return 1;
 else
  return 0;
}
