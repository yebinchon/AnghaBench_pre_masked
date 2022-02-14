
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int ptid_t ;
typedef enum target_signal { ____Placeholder_target_signal } target_signal ;
struct TYPE_2__ {int (* to_resume ) (int ,int,int) ;} ;


 int FUNC_0 (int ) ;
 TYPE_1__ VAR_0 ;
 int FUNC_1 (int ,char*,int ,char*,int ) ;
 int VAR_1 ;
 int FUNC_2 (int ,int,int) ;
 int FUNC_3 (int) ;

__attribute__((used)) static void
FUNC_4 (ptid_t VAR_2, int VAR_3, enum target_signal VAR_4)
{
  VAR_0.to_resume (VAR_2, VAR_3, VAR_4);

  FUNC_1 (VAR_1, "target_resume (%d, %s, %s)\n", FUNC_0 (VAR_2),
        VAR_3 ? "step" : "continue",
        FUNC_3 (VAR_4));
}
