
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef enum show_opt { ____Placeholder_show_opt } show_opt ;
struct TYPE_4__ {struct TYPE_4__* mt_child; struct TYPE_4__* mt_next; } ;
typedef TYPE_1__ amq_mount_tree ;


 int FUNC_0 (TYPE_1__*,int,int*,int*,int*) ;

__attribute__((used)) static void
FUNC_1(amq_mount_tree *VAR_0, enum show_opt VAR_1, int *VAR_2, int *VAR_3, int *VAR_4)
{
  while (VAR_0) {
    FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4);
    FUNC_1(VAR_0->mt_next, VAR_1, VAR_2, VAR_3, VAR_4);
    VAR_0 = VAR_0->mt_child;
  }
}
