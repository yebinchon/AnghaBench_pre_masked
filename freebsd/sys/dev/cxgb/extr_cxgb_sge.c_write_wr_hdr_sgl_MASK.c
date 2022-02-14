
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct work_request_hdr {unsigned int wrh_hi; unsigned int wrh_lo; } ;
struct txq_state {size_t pidx; unsigned int gen; } ;
struct tx_sw_desc {int dummy; } ;
struct tx_desc {int * flit; } ;
struct sge_txq {size_t size; struct tx_sw_desc* sdesc; struct tx_desc* desc; } ;
struct sg_ent {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (unsigned int) ;
 int FUNC_3 (int) ;
 unsigned int VAR_2 ;
 scalar_t__ FUNC_4 (int) ;
 unsigned int FUNC_5 (int) ;
 int FUNC_6 (int *,int const*,unsigned int) ;
 unsigned int FUNC_7 (unsigned int,unsigned int) ;
 int FUNC_8 (struct work_request_hdr*,unsigned int,unsigned int) ;
 int FUNC_9 () ;
 int FUNC_10 (struct tx_desc*,unsigned int) ;

__attribute__((used)) static void
FUNC_11(unsigned int VAR_3, struct tx_desc *VAR_4, struct txq_state *VAR_5,
    const struct sge_txq *VAR_6, const struct sg_ent *VAR_7, unsigned int VAR_8,
    unsigned int VAR_9, unsigned int VAR_10, unsigned int VAR_11)
{

 struct work_request_hdr *VAR_12 = (struct work_request_hdr *)VAR_4;
 struct tx_sw_desc *VAR_13 = &VAR_6->sdesc[VAR_5->pidx];

 if (FUNC_4(VAR_3 == 1)) {
  FUNC_8(VAR_12, FUNC_5(VAR_1 | VAR_0 | FUNC_0(1) |
      FUNC_3(VAR_8)) | VAR_10,
      FUNC_5(FUNC_2(VAR_8 + VAR_9) | FUNC_1(VAR_5->gen)) |
      VAR_11);

  FUNC_10(VAR_4, VAR_5->gen);

 } else {
  unsigned int VAR_14 = VAR_5->gen;
  const uint64_t *VAR_15 = (const uint64_t *)VAR_7;
  struct work_request_hdr *VAR_16 = VAR_12;

  VAR_12->wrh_hi = FUNC_5(VAR_1 | FUNC_0(1) |
      FUNC_3(VAR_8)) | VAR_10;

  while (VAR_9) {
   unsigned int VAR_17 = VAR_2 - VAR_8;

   if (VAR_17 > VAR_9)
    VAR_17 = VAR_9;
   FUNC_6(&VAR_4->flit[VAR_8], VAR_15, VAR_17 * sizeof(*VAR_15));
   VAR_9 -= VAR_17;
   VAR_3--;
   if (!VAR_9)
    break;

   VAR_15 += VAR_17;
   VAR_4++;
   VAR_13++;
   if (++VAR_5->pidx == VAR_6->size) {
    VAR_5->pidx = 0;
    VAR_5->gen ^= 1;
    VAR_4 = VAR_6->desc;
    VAR_13 = VAR_6->sdesc;
   }






   VAR_12 = (struct work_request_hdr *)VAR_4;
   VAR_12->wrh_hi = FUNC_5(FUNC_0(1) |
       FUNC_3(1)) | VAR_10;
   VAR_12->wrh_lo = FUNC_5(FUNC_2(FUNC_7(VAR_2,
        VAR_9 + 1)) |
       FUNC_1(VAR_5->gen)) | VAR_11;
   FUNC_10(VAR_4, VAR_5->gen);
   VAR_8 = 1;
  }
  VAR_12->wrh_hi |= FUNC_5(VAR_0);
  FUNC_9();
  VAR_16->wrh_lo = FUNC_5(FUNC_2(VAR_2) | FUNC_1(VAR_14)) | VAR_11;
  FUNC_10((struct tx_desc *)VAR_16, VAR_14);
 }
}
