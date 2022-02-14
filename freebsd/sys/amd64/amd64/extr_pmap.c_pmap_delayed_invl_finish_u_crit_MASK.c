
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_long ;
struct pmap_invl_gen {scalar_t__ gen; struct pmap_invl_gen* next; } ;


 int FUNC_0 (int,char*) ;
 uintptr_t VAR_0 ;
 scalar_t__ FUNC_1 (scalar_t__*) ;
 int FUNC_2 () ;
 int FUNC_3 (struct pmap_invl_gen*,struct pmap_invl_gen*) ;
 int FUNC_4 (struct pmap_invl_gen*,struct pmap_invl_gen*,struct pmap_invl_gen*) ;

__attribute__((used)) static bool
FUNC_5(struct pmap_invl_gen *VAR_1,
    struct pmap_invl_gen *VAR_2)
{
 struct pmap_invl_gen VAR_3, VAR_4;
 u_long VAR_5;







 VAR_5 = FUNC_1(&VAR_1->gen);

 if (!FUNC_3(VAR_2, &VAR_3) || VAR_3.next != VAR_1)
  return (0);

 FUNC_0(VAR_3.gen < VAR_5,
     ("invalid di gen sequence %lu %lu", VAR_3.gen, VAR_5));
 VAR_4.gen = VAR_5;
 VAR_4.next = (void *)((uintptr_t)VAR_1->next &
     ~VAR_0);


 FUNC_2();

 return (FUNC_4(VAR_2, &VAR_3, &VAR_4));
}
