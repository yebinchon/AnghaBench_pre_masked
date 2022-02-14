
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int se_flags; int se_device; } ;
typedef TYPE_1__ session_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (int ,int,int ) ;

__attribute__((used)) static int
FUNC_2(session_t *VAR_6)
{
 int VAR_7;

 if ((VAR_6->se_flags & VAR_4) == 0 &&
     (VAR_6->se_flags & VAR_3) == 0)
  return (0);

 VAR_7 = FUNC_1(VAR_6->se_device, VAR_2 | VAR_1, 0);
 if (VAR_7 < 0) {
  if (VAR_5 == VAR_0)
   return (1);
  return (0);
 }

 FUNC_0(VAR_7);
 return (0);
}
