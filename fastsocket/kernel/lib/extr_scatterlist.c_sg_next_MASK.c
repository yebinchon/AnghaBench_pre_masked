
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scatterlist {scalar_t__ sg_magic; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 struct scatterlist* FUNC_1 (struct scatterlist*) ;
 int FUNC_2 (struct scatterlist*) ;
 scalar_t__ FUNC_3 (struct scatterlist*) ;
 scalar_t__ FUNC_4 (int ) ;

struct scatterlist *FUNC_5(struct scatterlist *VAR_1)
{



 if (FUNC_3(VAR_1))
  return ((void*)0);

 VAR_1++;
 if (FUNC_4(FUNC_2(VAR_1)))
  VAR_1 = FUNC_1(VAR_1);

 return VAR_1;
}
