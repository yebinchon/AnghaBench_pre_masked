
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct codec_softc {int clk; } ;


 int VAR_0 ;
 int FUNC_0 (struct codec_softc*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct codec_softc*,int ,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int
FUNC_4(struct codec_softc *VAR_4, uint32_t VAR_5, uint32_t VAR_6)
{
 uint32_t VAR_7;

 FUNC_3(VAR_4->clk);

 VAR_7 = (VAR_5 << VAR_1);
 VAR_7 |= (VAR_6 << VAR_2);
 VAR_7 |= VAR_3;

 FUNC_1(VAR_4, VAR_0, VAR_7);

 while(FUNC_0(VAR_4, VAR_0) & VAR_3)
  ;

 FUNC_2(VAR_4->clk);

 return (0);
}
