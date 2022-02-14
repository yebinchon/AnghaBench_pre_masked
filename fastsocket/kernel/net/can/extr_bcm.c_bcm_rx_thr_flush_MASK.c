
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bcm_op {int nframes; } ;


 scalar_t__ FUNC_0 (struct bcm_op*,int,unsigned int) ;

__attribute__((used)) static int FUNC_1(struct bcm_op *VAR_0, int VAR_1)
{
 int VAR_2 = 0;

 if (VAR_0->nframes > 1) {
  unsigned int VAR_3;


  for (VAR_3 = 1; VAR_3 < VAR_0->nframes; VAR_3++)
   VAR_2 += FUNC_0(VAR_0, VAR_1, VAR_3);

 } else {

  VAR_2 += FUNC_0(VAR_0, VAR_1, 0);
 }

 return VAR_2;
}
