
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {size_t ctt_size; } ;
typedef TYPE_1__ ctf_type_t ;
typedef int ctf_stype_t ;


 size_t VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_1(ctf_type_t *VAR_1, size_t *VAR_2, size_t *VAR_3)
{
 if (VAR_1->ctt_size == VAR_0) {
  *VAR_2 = (size_t)FUNC_0(VAR_1);
  *VAR_3 = sizeof (ctf_type_t);
 } else {
  *VAR_2 = VAR_1->ctt_size;
  *VAR_3 = sizeof (ctf_stype_t);
 }
}
