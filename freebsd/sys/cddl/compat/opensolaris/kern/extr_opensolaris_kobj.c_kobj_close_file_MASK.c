
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct _buf {int ptr; scalar_t__ mounted; } ;
struct TYPE_3__ {int td_ucred; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 (struct _buf*,int) ;
 int FUNC_1 (int ,int ,int ,TYPE_1__*) ;

void
FUNC_2(struct _buf *VAR_2)
{

 if (VAR_2->mounted)
  FUNC_1(VAR_2->ptr, VAR_0, VAR_1->td_ucred, VAR_1);
 FUNC_0(VAR_2, sizeof(*VAR_2));
}
