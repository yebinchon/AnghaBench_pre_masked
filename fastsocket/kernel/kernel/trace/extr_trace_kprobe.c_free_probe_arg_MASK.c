
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int data; int fn; } ;
struct probe_arg {int comm; int name; TYPE_1__ fetch; } ;


 scalar_t__ FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_5(struct probe_arg *VAR_3)
{
 if (FUNC_0(VAR_0, VAR_3->fetch.fn))
  FUNC_1(VAR_3->fetch.data);
 else if (FUNC_0(VAR_1, VAR_3->fetch.fn))
  FUNC_2(VAR_3->fetch.data);
 else if (FUNC_0(VAR_2, VAR_3->fetch.fn))
  FUNC_3(VAR_3->fetch.data);
 FUNC_4(VAR_3->name);
 FUNC_4(VAR_3->comm);
}
