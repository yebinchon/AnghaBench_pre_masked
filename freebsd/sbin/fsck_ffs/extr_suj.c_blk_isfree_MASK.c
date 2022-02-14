
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ufs2_daddr_t ;
struct suj_cg {int sc_cgp; } ;


 int FUNC_0 (int ) ;
 struct suj_cg* FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ,int ) ;
 int VAR_0 ;

__attribute__((used)) static int
FUNC_5(ufs2_daddr_t VAR_1)
{
 struct suj_cg *VAR_2;

 VAR_2 = FUNC_1(FUNC_2(VAR_0, VAR_1));
 return FUNC_4(VAR_0, FUNC_0(VAR_2->sc_cgp), FUNC_3(VAR_0, VAR_1));
}
