
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snddev_info {int inprog; } ;


 int FUNC_0 (struct snddev_info*) ;

int
FUNC_1(struct snddev_info *VAR_0, int VAR_1)
{
 FUNC_0(VAR_0);

 VAR_0->inprog += VAR_1;

 return (VAR_0->inprog);
}
