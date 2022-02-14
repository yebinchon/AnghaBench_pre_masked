
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sdio_func {int fn; int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int) ;

int
FUNC_1(struct sdio_func *VAR_1)
{

 return (FUNC_0(VAR_1->dev, VAR_0,
     VAR_1->fn, 0));
}
