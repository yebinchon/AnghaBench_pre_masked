
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bcm_mips_softc {int dev; } ;


 uintptr_t FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static uintptr_t
FUNC_3(struct bcm_mips_softc *VAR_0)
{
 uintptr_t VAR_1;


 VAR_1 = FUNC_0(FUNC_2(VAR_0->dev), VAR_0->dev,
     1);
 FUNC_1(VAR_1 != 0, ("missing interrupt domain"));

 return (VAR_1);
}
