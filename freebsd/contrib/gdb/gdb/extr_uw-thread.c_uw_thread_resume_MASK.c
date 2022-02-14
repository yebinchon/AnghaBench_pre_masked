
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int ptid_t ;
typedef enum target_signal { ____Placeholder_target_signal } target_signal ;
struct TYPE_2__ {int (* to_resume ) (int ,int,int) ;} ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 TYPE_1__ VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int,int) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static void
FUNC_6 (ptid_t VAR_2, int VAR_3, enum target_signal VAR_4)
{
  if (FUNC_1 (VAR_2) > 0)
    {
      VAR_2 = FUNC_5 (VAR_2);
      if (FUNC_3 (VAR_2, VAR_1))
 VAR_2 = FUNC_2 (-1);
    }

  FUNC_0 (VAR_0.to_resume (VAR_2, VAR_3, VAR_4));
}
