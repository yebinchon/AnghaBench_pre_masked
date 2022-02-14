
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct timecounter {struct imx_gpt_softc* tc_priv; } ;
struct imx_gpt_softc {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct imx_gpt_softc*,int ) ;

__attribute__((used)) static u_int
FUNC_1(struct timecounter *VAR_1)
{
 struct imx_gpt_softc *VAR_2;

 VAR_2 = VAR_1->tc_priv;
 return (FUNC_0(VAR_2, VAR_0));
}
