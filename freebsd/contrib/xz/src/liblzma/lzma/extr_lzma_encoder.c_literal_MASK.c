
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef int probability ;
struct TYPE_5__ {size_t read_pos; size_t read_ahead; int * buffer; } ;
typedef TYPE_1__ lzma_mf ;
struct TYPE_6__ {int* reps; int state; int rc; int literal_pos_mask; int literal_context_bits; int literal; } ;
typedef TYPE_2__ lzma_lzma1_encoder ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *,int *,int const,int const) ;
 int * FUNC_2 (int ,int ,int ,int ,int ) ;
 int FUNC_3 (int *,int *,int,int const) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static inline void
FUNC_5(lzma_lzma1_encoder *VAR_0, lzma_mf *VAR_1, uint32_t VAR_2)
{

 const uint8_t VAR_3 = VAR_1->buffer[
   VAR_1->read_pos - VAR_1->read_ahead];
 probability *VAR_4 = FUNC_2(VAR_0->literal,
   VAR_0->literal_context_bits, VAR_0->literal_pos_mask,
   VAR_2, VAR_1->buffer[VAR_1->read_pos - VAR_1->read_ahead - 1]);

 if (FUNC_0(VAR_0->state)) {


  FUNC_3(&VAR_0->rc, VAR_4, 8, VAR_3);
 } else {



  const uint8_t VAR_5 = VAR_1->buffer[
    VAR_1->read_pos - VAR_0->reps[0] - 1
    - VAR_1->read_ahead];
  FUNC_1(&VAR_0->rc, VAR_4, VAR_5, VAR_3);
 }

 FUNC_4(VAR_0->state);
}
