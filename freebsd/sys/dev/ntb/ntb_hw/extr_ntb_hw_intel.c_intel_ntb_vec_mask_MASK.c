
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct ntb_softc {int db_vec_shift; } ;


 scalar_t__ FUNC_0 (struct ntb_softc*,int ) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static inline uint64_t
FUNC_1(struct ntb_softc *VAR_2, uint64_t VAR_3)
{
 uint64_t VAR_4, VAR_5;

 if (FUNC_0(VAR_2, VAR_0)) {






  if (VAR_3 < VAR_1 - 1)
   return (1 << VAR_3);
  if (VAR_3 == VAR_1 - 1)
   return (0x7ffc);
 }

 VAR_4 = VAR_2->db_vec_shift;
 VAR_5 = (1ull << VAR_4) - 1;
 return (VAR_5 << (VAR_4 * VAR_3));
}
