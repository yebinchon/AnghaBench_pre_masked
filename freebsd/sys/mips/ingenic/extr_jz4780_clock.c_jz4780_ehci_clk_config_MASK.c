
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct jz4780_clock_softc {int clkdom; int dev; } ;
typedef int * clk_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ,int ,int **) ;
 scalar_t__ FUNC_1 (int *,int *) ;
 scalar_t__ FUNC_2 (int *,int **) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *,int ,int ) ;

__attribute__((used)) static int
FUNC_5(struct jz4780_clock_softc *VAR_1)
{
 clk_t VAR_2, VAR_3;
 uint64_t VAR_4;
 int VAR_5;

 VAR_2 = ((void*)0);
 VAR_3 = ((void*)0);
 VAR_5 = -1;


 if (FUNC_0(VAR_1->dev, VAR_1->clkdom, VAR_0,
     &VAR_2) != 0)
  goto done;
 if (FUNC_2(VAR_2, &VAR_3) != 0)
  goto done;
 if (FUNC_1(VAR_3, &VAR_4) != 0)
  goto done;
 if (FUNC_4(VAR_2, VAR_4, 0) != 0)
  goto done;
 VAR_5 = 0;
done:
 FUNC_3(VAR_3);
 FUNC_3(VAR_2);

 return (VAR_5);
}
