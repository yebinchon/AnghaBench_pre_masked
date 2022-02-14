
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t uint32_t ;
typedef int uint16_t ;
struct cmpl_base {int type; } ;
struct TYPE_3__ {scalar_t__ vaddr; } ;
struct bnxt_cp_ring {size_t cons; int v_bit; TYPE_1__ ring; } ;
struct bnxt_softc {int dev; struct bnxt_cp_ring def_cp_ring; } ;
typedef void* if_ctx_t ;


 int FUNC_0 (TYPE_1__*,size_t) ;







 int VAR_0 ;
 int FUNC_1 (struct cmpl_base*,int) ;
 int FUNC_2 (TYPE_1__*,size_t,int) ;
 int FUNC_3 (struct bnxt_softc*,struct cmpl_base*) ;
 int FUNC_4 (int ,char*,int) ;
 struct bnxt_softc* FUNC_5 (void*) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static void
FUNC_7(void *VAR_1)
{
 if_ctx_t VAR_2 = VAR_1;
 struct bnxt_softc *VAR_3 = FUNC_5(VAR_2);
 struct bnxt_cp_ring *VAR_4 = &VAR_3->def_cp_ring;


 struct cmpl_base *VAR_5;
 uint32_t VAR_6 = VAR_4->cons;
 bool VAR_7 = VAR_4->v_bit;
 bool VAR_8;
 uint32_t VAR_9;
 uint16_t VAR_10;

 for (;;) {
  VAR_9 = VAR_6;
  VAR_8 = VAR_7;
  FUNC_2(&VAR_4->ring, VAR_6, VAR_7);
  VAR_5 = &((struct cmpl_base *)VAR_4->ring.vaddr)[VAR_6];

  if (!FUNC_1(VAR_5, VAR_7))
   break;

  VAR_10 = FUNC_6(VAR_5->type) & VAR_0;
  switch (VAR_10) {
  case 139:
   FUNC_3(VAR_3, VAR_5);
   break;
  case 128:
  case 133:
  case 134:
  case 131:
  case 132:
  case 129:
  case 138:
  case 137:
  case 136:
  case 142:
  case 130:
  case 141:
  case 135:
  case 140:
   FUNC_4(VAR_3->dev,
       "Unhandled completion type %u\n", VAR_10);
   break;
  default:
   FUNC_4(VAR_3->dev,
       "Unknown completion type %u\n", VAR_10);
   break;
  }
 }

 VAR_4->cons = VAR_9;
 VAR_4->v_bit = VAR_8;
 FUNC_0(&VAR_4->ring, VAR_4->cons);
}
