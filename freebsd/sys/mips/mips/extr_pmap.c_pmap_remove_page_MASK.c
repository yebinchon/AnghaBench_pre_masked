
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_offset_t ;
struct pmap {int dummy; } ;
typedef int pt_entry_t ;
typedef scalar_t__ pd_entry_t ;


 int VAR_0 ;
 int FUNC_0 (struct pmap*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct pmap*,int ) ;
 scalar_t__* FUNC_2 (struct pmap*,int ) ;
 int * FUNC_3 (scalar_t__*,int ) ;
 int FUNC_4 (struct pmap*,int *,int ,scalar_t__) ;
 int FUNC_5 (int *,int ) ;
 int VAR_3 ;
 int FUNC_6 (int *,int ) ;

__attribute__((used)) static void
FUNC_7(struct pmap *VAR_4, vm_offset_t VAR_5)
{
 pd_entry_t *VAR_6;
 pt_entry_t *VAR_7;

 FUNC_6(&VAR_3, VAR_2);
 FUNC_0(VAR_4, VAR_0);
 VAR_6 = FUNC_2(VAR_4, VAR_5);
 if (VAR_6 == ((void*)0) || *VAR_6 == 0)
  return;
 VAR_7 = FUNC_3(VAR_6, VAR_5);




 if (!FUNC_5(VAR_7, VAR_1))
  return;

 (void)FUNC_4(VAR_4, VAR_7, VAR_5, *VAR_6);
 FUNC_1(VAR_4, VAR_5);
}
