
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef scalar_t__ uint32_t ;
struct ntb_softc {scalar_t__ db_vec_count; int db_valid_mask; } ;
typedef int device_t ;


 struct ntb_softc* FUNC_0 (int ) ;
 int FUNC_1 (struct ntb_softc*,scalar_t__) ;

__attribute__((used)) static uint64_t
FUNC_2(device_t VAR_0, uint32_t VAR_1)
{
 struct ntb_softc *VAR_2 = FUNC_0(VAR_0);

 if (VAR_1 > VAR_2->db_vec_count)
  return (0);
 return (VAR_2->db_valid_mask & FUNC_1(VAR_2, VAR_1));
}
