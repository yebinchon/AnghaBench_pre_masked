
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scatterlist {int dummy; } ;
typedef int gfp_t ;


 unsigned int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 struct scatterlist* FUNC_1 (unsigned int,int ) ;

__attribute__((used)) static struct scatterlist *FUNC_2(unsigned int VAR_1, gfp_t VAR_2)
{
 if (VAR_1 == VAR_0)
  return (struct scatterlist *) FUNC_0(VAR_2);
 else
  return FUNC_1(VAR_1 * sizeof(struct scatterlist), VAR_2);
}
