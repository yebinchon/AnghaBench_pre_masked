
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int ptid_t ;
struct TYPE_2__ {int (* to_post_startup_inferior ) (int ) ;} ;


 int FUNC_0 (int ) ;
 TYPE_1__ VAR_0 ;
 int FUNC_1 (int ,char*,int ) ;
 int VAR_1 ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void
FUNC_3 (ptid_t VAR_2)
{
  VAR_0.to_post_startup_inferior (VAR_2);

  FUNC_1 (VAR_1, "target_post_startup_inferior (%d)\n",
        FUNC_0 (VAR_2));
}
