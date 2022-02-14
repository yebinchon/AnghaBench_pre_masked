
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mthca_dev {int dummy; } ;
typedef int __be32 ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct mthca_dev*,char*,int ,int ,int ,int ,int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct mthca_dev *VAR_0, void *VAR_1)
{
 __be32 *VAR_2 = VAR_1;

 (void) VAR_2;
 FUNC_1(VAR_0, "CQE contents %08x %08x %08x %08x %08x %08x %08x %08x\n",
    FUNC_0(VAR_2[0]), FUNC_0(VAR_2[1]), FUNC_0(VAR_2[2]),
    FUNC_0(VAR_2[3]), FUNC_0(VAR_2[4]), FUNC_0(VAR_2[5]),
    FUNC_0(VAR_2[6]), FUNC_0(VAR_2[7]));
}
