
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct deps {int dummy; } ;
struct deferred_opt {scalar_t__ code; int arg; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 struct deps* FUNC_0 (int ) ;
 size_t VAR_2 ;
 struct deferred_opt* VAR_3 ;
 int FUNC_1 (struct deps*,int ,int) ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static void
FUNC_2 (void)
{
  size_t VAR_6;
  struct deps *VAR_7;




  if (!VAR_4)
    return;

  VAR_7 = FUNC_0 (VAR_5);

  for (VAR_6 = 0; VAR_6 < VAR_2; VAR_6++)
    {
      struct deferred_opt *VAR_8 = &VAR_3[VAR_6];

      if (VAR_8->code == VAR_1 || VAR_8->code == VAR_0)
 FUNC_1 (VAR_7, VAR_8->arg, VAR_8->code == VAR_0);
    }
}
