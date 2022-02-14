
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scatterlist {int sg_magic; } ;


 int VAR_0 ;
 int FUNC_0 (struct scatterlist*,int ,int) ;
 int FUNC_1 (struct scatterlist*) ;

void FUNC_2(struct scatterlist *VAR_1, unsigned int VAR_2)
{
 FUNC_0(VAR_1, 0, sizeof(*VAR_1) * VAR_2);







 FUNC_1(&VAR_1[VAR_2 - 1]);
}
