
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct policydb {TYPE_1__* symtab; int permissive_map; int policycaps; int range_tr; int te_avtab; } ;
struct TYPE_2__ {int table; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct policydb*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct policydb*,int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_6 (struct policydb*) ;
 int FUNC_7 (TYPE_1__*,int ) ;
 int * VAR_3 ;

__attribute__((used)) static int FUNC_8(struct policydb *VAR_4)
{
 int VAR_5, VAR_6;

 FUNC_5(VAR_4, 0, sizeof(*VAR_4));

 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
  VAR_6 = FUNC_7(&VAR_4->symtab[VAR_5], VAR_3[VAR_5]);
  if (VAR_6)
   goto out_free_symtab;
 }

 VAR_6 = FUNC_0(&VAR_4->te_avtab);
 if (VAR_6)
  goto out_free_symtab;

 VAR_6 = FUNC_6(VAR_4);
 if (VAR_6)
  goto out_free_symtab;

 VAR_6 = FUNC_1(VAR_4);
 if (VAR_6)
  goto out_free_symtab;

 VAR_4->range_tr = FUNC_3(VAR_2, VAR_1, 256);
 if (!VAR_4->range_tr)
  goto out_free_symtab;

 FUNC_2(&VAR_4->policycaps);
 FUNC_2(&VAR_4->permissive_map);

out:
 return VAR_6;

out_free_symtab:
 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++)
  FUNC_4(VAR_4->symtab[VAR_5].table);
 goto out;
}
