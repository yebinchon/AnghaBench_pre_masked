
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int ptid_t ;
struct TYPE_2__ {int (* to_post_wait ) (int ,int) ;} ;


 int FUNC_0 (int ) ;
 TYPE_1__ VAR_0 ;
 int FUNC_1 (int ,char*,int ,int) ;
 int VAR_1 ;
 int FUNC_2 (int ,int) ;

__attribute__((used)) static void
FUNC_3 (ptid_t VAR_2, int VAR_3)
{
  VAR_0.to_post_wait (VAR_2, VAR_3);

  FUNC_1 (VAR_1, "target_post_wait (%d, %d)\n",
        FUNC_0 (VAR_2), VAR_3);
}
