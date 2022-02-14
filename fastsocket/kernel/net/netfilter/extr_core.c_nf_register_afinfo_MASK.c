
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nf_afinfo {size_t family; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int * VAR_1 ;
 int FUNC_2 (int ,struct nf_afinfo const*) ;

int FUNC_3(const struct nf_afinfo *VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_0(&VAR_0);
 if (VAR_3 < 0)
  return VAR_3;
 FUNC_2(VAR_1[VAR_2->family], VAR_2);
 FUNC_1(&VAR_0);
 return 0;
}
