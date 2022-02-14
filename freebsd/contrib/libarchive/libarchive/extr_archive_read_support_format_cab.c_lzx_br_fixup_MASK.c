
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct lzx_stream {scalar_t__ avail_in; scalar_t__* next_in; } ;
struct lzx_br {int cache_avail; int cache_buffer; int odd; scalar_t__ have_odd; } ;


 int VAR_0 ;

__attribute__((used)) static void
FUNC_0(struct lzx_stream *VAR_1, struct lzx_br *VAR_2)
{
 int VAR_3 = VAR_0 - VAR_2->cache_avail;

 if (VAR_2->have_odd && VAR_3 >= 16 && VAR_1->avail_in > 0) {
  VAR_2->cache_buffer =
     (VAR_2->cache_buffer << 16) |
     ((uint16_t)(*VAR_1->next_in)) << 8 | VAR_2->odd;
  VAR_1->next_in++;
  VAR_1->avail_in--;
  VAR_2->cache_avail += 16;
  VAR_2->have_odd = 0;
 }
}
