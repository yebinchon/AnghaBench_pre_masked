
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ssi_rate {int mfd; int mfn; int mfi; } ;
struct sc_info {struct ssi_rate* sr; } ;


 int FUNC_0 (int ,int ,int ) ;

__attribute__((used)) static void
FUNC_1(struct sc_info *VAR_0)
{
 struct ssi_rate *VAR_1;

 VAR_1 = VAR_0->sr;

 FUNC_0(VAR_1->mfi, VAR_1->mfn, VAR_1->mfd);


}
