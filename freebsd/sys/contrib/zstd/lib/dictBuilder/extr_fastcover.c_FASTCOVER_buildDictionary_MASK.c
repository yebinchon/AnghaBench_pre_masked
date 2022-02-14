
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {size_t d; int k; } ;
typedef TYPE_1__ ZDICT_cover_params_t ;
typedef size_t U32 ;
typedef int U16 ;
struct TYPE_14__ {size_t num; size_t size; } ;
struct TYPE_13__ {scalar_t__ score; scalar_t__ begin; scalar_t__ end; } ;
struct TYPE_12__ {scalar_t__ samples; scalar_t__ nbDmers; } ;
typedef TYPE_2__ FASTCOVER_ctx_t ;
typedef TYPE_3__ COVER_segment_t ;
typedef TYPE_4__ COVER_epoch_info_t ;
typedef int BYTE ;


 TYPE_4__ FUNC_0 (size_t,size_t,int ,int) ;
 int FUNC_1 (int,char*,...) ;
 int FUNC_2 (int,char*,unsigned int) ;
 TYPE_3__ FUNC_3 (TYPE_2__ const*,size_t*,size_t const,size_t const,TYPE_1__,int *) ;
 size_t FUNC_4 (scalar_t__,size_t) ;
 int FUNC_5 (int * const,scalar_t__,size_t) ;

__attribute__((used)) static size_t
FUNC_6(const FASTCOVER_ctx_t* VAR_0,
                          U32* VAR_1,
                          void* VAR_2, size_t VAR_3,
                          ZDICT_cover_params_t VAR_4,
                          U16* VAR_5)
{
  BYTE *const VAR_6 = (BYTE *)VAR_2;
  size_t VAR_7 = VAR_3;

  const COVER_epoch_info_t VAR_8 = FUNC_0(
      (U32)VAR_3, (U32)VAR_0->nbDmers, VAR_4.k, 1);
  const size_t VAR_9 = 10;
  size_t VAR_10 = 0;
  size_t VAR_11;
  FUNC_1(2, "Breaking content into %u epochs of size %u\n",
                (U32)VAR_8.num, (U32)VAR_8.size);



  for (VAR_11 = 0; VAR_7 > 0; VAR_11 = (VAR_11 + 1) % VAR_8.num) {
    const U32 VAR_12 = (U32)(VAR_11 * VAR_8.size);
    const U32 VAR_13 = VAR_12 + VAR_8.size;
    size_t VAR_14;

    COVER_segment_t VAR_15 = FUNC_3(
        VAR_0, VAR_1, VAR_12, VAR_13, VAR_4, VAR_5);




    if (VAR_15.score == 0) {
      if (++VAR_10 >= VAR_9) {
          break;
      }
      continue;
    }
    VAR_10 = 0;


    VAR_14 = FUNC_4(VAR_15.end - VAR_15.begin + VAR_4.d - 1, VAR_7);
    if (VAR_14 < VAR_4.d) {
      break;
    }




    VAR_7 -= VAR_14;
    FUNC_5(VAR_6 + VAR_7, VAR_0->samples + VAR_15.begin, VAR_14);
    FUNC_2(
        2, "\r%u%%       ",
        (unsigned)(((VAR_3 - VAR_7) * 100) / VAR_3));
  }
  FUNC_1(2, "\r%79s\r", "");
  return VAR_7;
}
