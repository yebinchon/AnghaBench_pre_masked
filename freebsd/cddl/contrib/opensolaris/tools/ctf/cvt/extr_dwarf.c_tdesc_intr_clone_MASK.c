
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int t_flags; TYPE_5__* t_intr; int t_type; int t_id; int t_size; int t_name; } ;
typedef TYPE_1__ tdesc_t ;
typedef int intr_t ;
typedef int dwarf_t ;
struct TYPE_8__ {size_t intr_nbits; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_5__*,TYPE_5__*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,TYPE_1__*) ;
 int FUNC_3 (char*,int ) ;
 void* FUNC_4 (int) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static tdesc_t *
FUNC_6(dwarf_t *VAR_2, tdesc_t *VAR_3, size_t VAR_4)
{
 tdesc_t *VAR_5 = FUNC_4(sizeof (tdesc_t));

 if (!(VAR_3->t_flags & VAR_1)) {
  FUNC_3("tdp %u: attempt to make a bit field from an "
      "unresolved type\n", VAR_3->t_id);
 }

 VAR_5->t_name = FUNC_5(VAR_3->t_name);
 VAR_5->t_size = VAR_3->t_size;
 VAR_5->t_id = FUNC_1(VAR_2);
 VAR_5->t_type = VAR_0;
 VAR_5->t_flags = VAR_1;

 VAR_5->t_intr = FUNC_4(sizeof (intr_t));
 FUNC_0(VAR_3->t_intr, VAR_5->t_intr, sizeof (intr_t));
 VAR_5->t_intr->intr_nbits = VAR_4;

 FUNC_2(VAR_2, VAR_5);

 return (VAR_5);
}
