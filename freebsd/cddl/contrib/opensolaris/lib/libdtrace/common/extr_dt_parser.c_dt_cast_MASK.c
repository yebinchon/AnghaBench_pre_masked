
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint64_t ;
typedef int intmax_t ;
struct TYPE_5__ {int dn_value; int dn_flags; } ;
typedef TYPE_1__ dt_node_t ;


 int VAR_0 ;
 int VAR_1 ;
 size_t FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_1(dt_node_t *VAR_2, dt_node_t *VAR_3)
{
 size_t VAR_4 = FUNC_0(VAR_3);
 size_t VAR_5 = FUNC_0(VAR_2);

 if (VAR_5 < VAR_4) {
  int VAR_6 = (sizeof (uint64_t) - VAR_5) * VAR_1;
  VAR_3->dn_value <<= VAR_6;
  VAR_3->dn_value >>= VAR_6;
 } else if (VAR_5 > VAR_4) {
  int VAR_7 = (sizeof (uint64_t) - VAR_4) * VAR_1;
  int VAR_8 = (VAR_5 - VAR_4) * VAR_1;

  VAR_3->dn_value <<= VAR_7;
  if (VAR_3->dn_flags & VAR_0) {
   VAR_3->dn_value = (intmax_t)VAR_3->dn_value >> VAR_8;
   VAR_3->dn_value >>= VAR_7 - VAR_8;
  } else {
   VAR_3->dn_value >>= VAR_7;
  }
 }
}
