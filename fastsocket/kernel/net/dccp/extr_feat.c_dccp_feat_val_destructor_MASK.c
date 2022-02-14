
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_5__ {int vec; } ;
struct TYPE_6__ {TYPE_1__ sp; } ;
typedef TYPE_2__ dccp_feat_val ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_2__*,int ,int) ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(u8 VAR_1, dccp_feat_val *VAR_2)
{
 if (FUNC_3(VAR_2 == ((void*)0)))
  return;
 if (FUNC_0(VAR_1) == VAR_0)
  FUNC_1(VAR_2->sp.vec);
 FUNC_2(VAR_2, 0, sizeof(*VAR_2));
}
