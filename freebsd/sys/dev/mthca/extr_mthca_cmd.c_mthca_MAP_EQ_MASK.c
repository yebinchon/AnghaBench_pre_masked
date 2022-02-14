
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct mthca_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mthca_dev*,scalar_t__,int,int ,int ,int ) ;
 int FUNC_1 (struct mthca_dev*,char*,char*,unsigned long long,int) ;

int FUNC_2(struct mthca_dev *VAR_2, u64 VAR_3, int VAR_4,
   int VAR_5)
{
 FUNC_1(VAR_2, "%s mask %016llx for eqn %d\n",
    VAR_4 ? "Clearing" : "Setting",
    (unsigned long long) VAR_3, VAR_5);
 return FUNC_0(VAR_2, VAR_3, (VAR_4 << 31) | VAR_5,
    0, VAR_0, VAR_1);
}
