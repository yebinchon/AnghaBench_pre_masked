
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_4__ {int len; int * vec; } ;
struct TYPE_5__ {TYPE_1__ sp; } ;
typedef TYPE_2__ dccp_feat_val ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int,int *,int ) ;
 int FUNC_2 (int *,int ,int *,int ) ;

__attribute__((used)) static int FUNC_3(dccp_feat_val *VAR_0, u8 *VAR_1, u8 VAR_2,
          bool VAR_3, bool VAR_4)
{
 int VAR_5;

 if (!VAR_0->sp.vec || !VAR_1) {
  FUNC_0("NULL feature value or array");
  return 0;
 }

 if (VAR_3)
  VAR_5 = FUNC_2(VAR_0->sp.vec, VAR_0->sp.len, VAR_1, VAR_2);
 else
  VAR_5 = FUNC_2(VAR_1, VAR_2, VAR_0->sp.vec, VAR_0->sp.len);

 if (!VAR_4)
  return VAR_5;
 if (VAR_5 < 0)
  return 0;




 return FUNC_1(VAR_5, VAR_0->sp.vec, VAR_0->sp.len);
}
