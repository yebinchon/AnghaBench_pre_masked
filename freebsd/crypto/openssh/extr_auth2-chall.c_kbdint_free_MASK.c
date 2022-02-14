
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {struct TYPE_6__* devices; scalar_t__ device; } ;
typedef TYPE_1__ KbdintAuthctxt ;


 int FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_3(KbdintAuthctxt *VAR_0)
{
 if (VAR_0->device)
  FUNC_2(VAR_0);
 FUNC_1(VAR_0->devices);
 FUNC_0(VAR_0, sizeof(*VAR_0));
 FUNC_1(VAR_0);
}
