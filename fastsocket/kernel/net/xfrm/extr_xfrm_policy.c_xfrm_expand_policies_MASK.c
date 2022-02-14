
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct xfrm_policy {int xfrm_nr; scalar_t__ action; scalar_t__ type; } ;
struct flowi {int dummy; } ;


 scalar_t__ FUNC_0 (struct xfrm_policy*) ;
 int FUNC_1 (struct xfrm_policy*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 struct xfrm_policy* FUNC_2 (int ,scalar_t__,struct flowi*,int ,int ) ;
 int FUNC_3 (struct xfrm_policy**,int) ;
 int FUNC_4 (struct xfrm_policy*) ;

__attribute__((used)) static int FUNC_5(struct flowi *VAR_3, u16 VAR_4,
    struct xfrm_policy **VAR_5,
    int *VAR_6, int *VAR_7)
{
 int VAR_8;

 if (*VAR_6 == 0 || !VAR_5[0]) {
  *VAR_6 = 0;
  *VAR_7 = 0;
  return 0;
 }
 if (FUNC_0(VAR_5[0]))
  return FUNC_1(VAR_5[0]);

 *VAR_7 = VAR_5[0]->xfrm_nr;
 for (VAR_8 = 0; VAR_8 < *VAR_6; VAR_8++) {
  if (VAR_5[VAR_8]->action != VAR_0) {
   *VAR_7 = -1;
   break;
  }
 }

 return 0;

}
