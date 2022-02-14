
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_device {int dev; } ;
struct aic26 {int dummy; } ;


 int VAR_0 ;
 struct aic26* FUNC_0 (int *) ;
 int FUNC_1 (struct aic26*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct spi_device *VAR_1)
{
 struct aic26 *VAR_2 = FUNC_0(&VAR_1->dev);

 FUNC_2(&VAR_0);
 FUNC_1(VAR_2);

 return 0;
}
