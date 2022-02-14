
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t uint32_t ;
typedef size_t uint16_t ;
struct tx_cmpl {size_t flags_type; int opaque; int errors_v; } ;
struct bnxt_softc {int dev; struct bnxt_cp_ring* tx_cp_rings; } ;
struct TYPE_3__ {scalar_t__ vaddr; } ;
struct bnxt_cp_ring {size_t cons; int v_bit; TYPE_1__ ring; } ;


 int FUNC_0 (TYPE_1__*,size_t) ;
 int FUNC_1 (struct bnxt_cp_ring*,size_t) ;
 int FUNC_2 (struct tx_cmpl*,int) ;
 int FUNC_3 (TYPE_1__*,size_t,int) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;

 int FUNC_4 (int ,char*,size_t) ;
 size_t FUNC_5 (int ) ;

__attribute__((used)) static int
FUNC_6(void *VAR_3, uint16_t VAR_4, bool VAR_5)
{
 struct bnxt_softc *VAR_6 = (struct bnxt_softc *)VAR_3;
 struct bnxt_cp_ring *VAR_7 = &VAR_6->tx_cp_rings[VAR_4];
 struct tx_cmpl *VAR_8 = (struct tx_cmpl *)VAR_7->ring.vaddr;
 int VAR_9 = 0;
 uint32_t VAR_10 = VAR_7->cons;
 bool VAR_11 = VAR_7->v_bit;
 bool VAR_12;
 uint32_t VAR_13;
 uint16_t VAR_14;
 uint16_t VAR_15;

 for (;;) {
  VAR_13 = VAR_10;
  VAR_12 = VAR_11;
  FUNC_3(&VAR_7->ring, VAR_10, VAR_11);
  FUNC_1(VAR_7, VAR_10);

  if (!FUNC_2(&VAR_8[VAR_10], VAR_11))
   goto done;

  VAR_14 = VAR_8[VAR_10].flags_type & VAR_2;
  switch (VAR_14) {
  case 128:
   VAR_15 = (FUNC_5(VAR_8[VAR_10].errors_v) &
       VAR_0) >>
       VAR_1;
   if (VAR_15)
    FUNC_4(VAR_6->dev,
        "TX completion error %u\n", VAR_15);

   VAR_9 += VAR_8[VAR_10].opaque >> 24;





   if (!VAR_5)
    goto done;
   break;
  default:
   if (VAR_14 & 1) {
    FUNC_3(&VAR_7->ring, VAR_10, VAR_11);
    if (!FUNC_2(&VAR_8[VAR_10], VAR_11))
     goto done;
   }
   FUNC_4(VAR_6->dev,
       "Unhandled TX completion type %u\n", VAR_14);
   break;
  }
 }
done:

 if (VAR_5 && VAR_9) {
  VAR_7->cons = VAR_13;
  VAR_7->v_bit = VAR_12;
  FUNC_0(&VAR_7->ring, VAR_7->cons);
 }

 return VAR_9;
}
