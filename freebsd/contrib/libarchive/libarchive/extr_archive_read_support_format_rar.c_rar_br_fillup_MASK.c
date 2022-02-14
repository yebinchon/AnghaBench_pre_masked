
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
struct rar_br {int cache_avail; int avail_in; int cache_buffer; int * next_in; } ;
struct rar {scalar_t__ bytes_unconsumed; scalar_t__ bytes_remaining; } ;
struct archive_read {TYPE_1__* format; } ;
struct TYPE_2__ {scalar_t__ data; } ;


 int VAR_0 ;
 int FUNC_0 (struct archive_read*,scalar_t__) ;
 int * FUNC_1 (struct archive_read*,int,scalar_t__*) ;

__attribute__((used)) static int
FUNC_2(struct archive_read *VAR_1, struct rar_br *VAR_2)
{
  struct rar *VAR_3 = (struct rar *)(VAR_1->format->data);
  int VAR_4 = VAR_0 - VAR_2->cache_avail;

  for (;;) {
    switch (VAR_4 >> 3) {
    case 8:
      if (VAR_2->avail_in >= 8) {
        VAR_2->cache_buffer =
            ((uint64_t)VAR_2->next_in[0]) << 56 |
            ((uint64_t)VAR_2->next_in[1]) << 48 |
            ((uint64_t)VAR_2->next_in[2]) << 40 |
            ((uint64_t)VAR_2->next_in[3]) << 32 |
            ((uint32_t)VAR_2->next_in[4]) << 24 |
            ((uint32_t)VAR_2->next_in[5]) << 16 |
            ((uint32_t)VAR_2->next_in[6]) << 8 |
             (uint32_t)VAR_2->next_in[7];
        VAR_2->next_in += 8;
        VAR_2->avail_in -= 8;
        VAR_2->cache_avail += 8 * 8;
        VAR_3->bytes_unconsumed += 8;
        VAR_3->bytes_remaining -= 8;
        return (1);
      }
      break;
    case 7:
      if (VAR_2->avail_in >= 7) {
        VAR_2->cache_buffer =
           (VAR_2->cache_buffer << 56) |
            ((uint64_t)VAR_2->next_in[0]) << 48 |
            ((uint64_t)VAR_2->next_in[1]) << 40 |
            ((uint64_t)VAR_2->next_in[2]) << 32 |
            ((uint32_t)VAR_2->next_in[3]) << 24 |
            ((uint32_t)VAR_2->next_in[4]) << 16 |
            ((uint32_t)VAR_2->next_in[5]) << 8 |
             (uint32_t)VAR_2->next_in[6];
        VAR_2->next_in += 7;
        VAR_2->avail_in -= 7;
        VAR_2->cache_avail += 7 * 8;
        VAR_3->bytes_unconsumed += 7;
        VAR_3->bytes_remaining -= 7;
        return (1);
      }
      break;
    case 6:
      if (VAR_2->avail_in >= 6) {
        VAR_2->cache_buffer =
           (VAR_2->cache_buffer << 48) |
            ((uint64_t)VAR_2->next_in[0]) << 40 |
            ((uint64_t)VAR_2->next_in[1]) << 32 |
            ((uint32_t)VAR_2->next_in[2]) << 24 |
            ((uint32_t)VAR_2->next_in[3]) << 16 |
            ((uint32_t)VAR_2->next_in[4]) << 8 |
             (uint32_t)VAR_2->next_in[5];
        VAR_2->next_in += 6;
        VAR_2->avail_in -= 6;
        VAR_2->cache_avail += 6 * 8;
        VAR_3->bytes_unconsumed += 6;
        VAR_3->bytes_remaining -= 6;
        return (1);
      }
      break;
    case 0:


      return (1);
    default:
      break;
    }
    if (VAR_2->avail_in <= 0) {

      if (VAR_3->bytes_unconsumed > 0) {


        FUNC_0(VAR_1, VAR_3->bytes_unconsumed);
        VAR_3->bytes_unconsumed = 0;
      }
      VAR_2->next_in = FUNC_1(VAR_1, 1, &(VAR_2->avail_in));
      if (VAR_2->next_in == ((void*)0))
        return (0);
      if (VAR_2->avail_in == 0)
        return (0);
    }
    VAR_2->cache_buffer =
       (VAR_2->cache_buffer << 8) | *VAR_2->next_in++;
    VAR_2->avail_in--;
    VAR_2->cache_avail += 8;
    VAR_4 -= 8;
    VAR_3->bytes_unconsumed++;
    VAR_3->bytes_remaining--;
  }
}
