
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* to_post_attach ) (int) ;} ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (int ,char*,int) ;
 int VAR_1 ;
 int FUNC_1 (int) ;

__attribute__((used)) static void
FUNC_2 (int VAR_2)
{
  VAR_0.to_post_attach (VAR_2);

  FUNC_0 (VAR_1, "target_post_attach (%d)\n", VAR_2);
}
