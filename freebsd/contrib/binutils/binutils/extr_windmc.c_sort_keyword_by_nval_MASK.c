
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int unichar ;
typedef int rc_uint_type ;
struct TYPE_2__ {scalar_t__ nval; int usz; } ;
typedef TYPE_1__ mc_keyword ;


 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int
FUNC_2 (const void *VAR_0, const void *VAR_1)
{
  const mc_keyword *VAR_2 = *((const mc_keyword **)VAR_0);
  const mc_keyword *VAR_3 = *((const mc_keyword **)VAR_1);
  rc_uint_type VAR_4, VAR_5;
  int VAR_6;

  if (VAR_0 == VAR_1)
    return 0;
  if (VAR_2->nval != VAR_3->nval)
    {
      if (VAR_2->nval < VAR_3->nval)
 return -1;
      return 1;
    }
  VAR_4 = FUNC_1 (VAR_2->usz);
  VAR_5 = FUNC_1 (VAR_3->usz);
  if (VAR_4 <= VAR_5)
    VAR_6 = FUNC_0 (VAR_2->usz, VAR_3->usz, sizeof (unichar) * VAR_4);
  else
    VAR_6 = FUNC_0 (VAR_2->usz, VAR_3->usz, sizeof (unichar) * VAR_5);
  if (VAR_6)
    return VAR_6;
  if (VAR_4 < VAR_5)
    return -1;
  else if (VAR_4 > VAR_5)
    return 1;
  return 0;
}
