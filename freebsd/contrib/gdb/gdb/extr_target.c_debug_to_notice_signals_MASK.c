
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int ptid_t ;
struct TYPE_2__ {int (* to_notice_signals ) (int ) ;} ;


 int FUNC_0 (int ) ;
 TYPE_1__ VAR_0 ;
 int FUNC_1 (int ,char*,int ) ;
 int VAR_1 ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void
FUNC_3 (ptid_t VAR_2)
{
  VAR_0.to_notice_signals (VAR_2);

  FUNC_1 (VAR_1, "target_notice_signals (%d)\n",
                      FUNC_0 (VAR_2));
}
