
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sgsave {int dummy; } ;
struct sglist {scalar_t__ sg_maxseg; } ;


 int VAR_0 ;
 int FUNC_0 (struct sglist*,struct sgsave) ;
 int FUNC_1 (struct sglist*,struct sgsave) ;
 int FUNC_2 (struct sglist*,void*,size_t,int *,int *) ;

int
FUNC_3(struct sglist *VAR_1, void *VAR_2, size_t VAR_3)
{
 struct sgsave VAR_4;
 int VAR_5;

 if (VAR_1->sg_maxseg == 0)
  return (VAR_0);
 FUNC_1(VAR_1, VAR_4);
 VAR_5 = FUNC_2(VAR_1, VAR_2, VAR_3, ((void*)0), ((void*)0));
 if (VAR_5)
  FUNC_0(VAR_1, VAR_4);
 return (VAR_5);
}
