
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sc_info {struct sai_rate* sr; } ;
struct sai_rate {int div; int mfd; int mfn; int mfi; } ;


 int VAR_0 ;
 int FUNC_0 (struct sc_info*,int ) ;
 int FUNC_1 (struct sc_info*,int ,int) ;
 int FUNC_2 (int ,int ,int ) ;

__attribute__((used)) static void
FUNC_3(struct sc_info *VAR_1)
{
 struct sai_rate *VAR_2;
 int VAR_3;

 VAR_2 = VAR_1->sr;
 VAR_3 = FUNC_0(VAR_1, VAR_0);
 VAR_3 &= ~(0xff << 0);
 VAR_3 |= (VAR_2->div << 0);
 FUNC_1(VAR_1, VAR_0, VAR_3);

 FUNC_2(VAR_2->mfi, VAR_2->mfn, VAR_2->mfd);
}
