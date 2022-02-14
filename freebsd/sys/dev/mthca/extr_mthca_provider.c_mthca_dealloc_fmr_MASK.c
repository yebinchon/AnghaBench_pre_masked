
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mthca_fmr {int dummy; } ;
struct ib_fmr {int device; } ;


 int FUNC_0 (struct mthca_fmr*) ;
 int FUNC_1 (int ,struct mthca_fmr*) ;
 int FUNC_2 (int ) ;
 struct mthca_fmr* FUNC_3 (struct ib_fmr*) ;

__attribute__((used)) static int FUNC_4(struct ib_fmr *VAR_0)
{
 struct mthca_fmr *VAR_1 = FUNC_3(VAR_0);
 int VAR_2;

 VAR_2 = FUNC_1(FUNC_2(VAR_0->device), VAR_1);
 if (VAR_2)
  return VAR_2;

 FUNC_0(VAR_1);
 return 0;
}
