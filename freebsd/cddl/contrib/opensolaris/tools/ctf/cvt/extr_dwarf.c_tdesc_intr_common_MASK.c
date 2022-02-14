
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {size_t t_size; int t_id; int t_flags; TYPE_2__* t_intr; int t_type; int t_name; } ;
typedef TYPE_1__ tdesc_t ;
struct TYPE_6__ {int intr_signed; size_t intr_nbits; int intr_type; } ;
typedef TYPE_2__ intr_t ;
typedef int dwarf_t ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,TYPE_1__*) ;
 void* FUNC_1 (int) ;
 int FUNC_2 (char const*) ;

__attribute__((used)) static tdesc_t *
FUNC_3(dwarf_t *VAR_4, int VAR_5, const char *VAR_6, size_t VAR_7)
{
 tdesc_t *VAR_8;
 intr_t *VAR_9;

 VAR_9 = FUNC_1(sizeof (intr_t));
 VAR_9->intr_type = VAR_1;
 VAR_9->intr_signed = 1;
 VAR_9->intr_nbits = VAR_7 * VAR_2;

 VAR_8 = FUNC_1(sizeof (tdesc_t));
 VAR_8->t_name = FUNC_2(VAR_6);
 VAR_8->t_size = VAR_7;
 VAR_8->t_id = VAR_5;
 VAR_8->t_type = VAR_0;
 VAR_8->t_intr = VAR_9;
 VAR_8->t_flags = VAR_3;

 FUNC_0(VAR_4, VAR_8);

 return (VAR_8);
}
