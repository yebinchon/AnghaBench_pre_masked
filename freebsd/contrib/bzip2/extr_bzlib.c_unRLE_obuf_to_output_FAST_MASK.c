
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef unsigned int UInt32 ;
typedef scalar_t__ UChar ;
struct TYPE_5__ {scalar_t__ state_out_len; scalar_t__ state_out_ch; unsigned int calculatedBlockCRC; scalar_t__ nblock_used; scalar_t__ save_nblock; scalar_t__ k0; unsigned int* tt; unsigned int tPos; scalar_t__ blockSize100k; TYPE_1__* strm; scalar_t__ blockRandomised; } ;
struct TYPE_4__ {unsigned int avail_out; char* next_out; unsigned int total_out_lo32; int total_out_hi32; } ;
typedef scalar_t__ Int32 ;
typedef TYPE_2__ DState ;
typedef scalar_t__ Bool ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (unsigned int,scalar_t__) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static
Bool FUNC_3 ( DState* VAR_4 )
{
   UChar VAR_5;

   if (VAR_4->blockRandomised) {

      while (VAR_3) {

         while (VAR_3) {
            if (VAR_4->strm->avail_out == 0) return VAR_2;
            if (VAR_4->state_out_len == 0) break;
            *( (UChar*)(VAR_4->strm->next_out) ) = VAR_4->state_out_ch;
            FUNC_2 ( VAR_4->calculatedBlockCRC, VAR_4->state_out_ch );
            VAR_4->state_out_len--;
            VAR_4->strm->next_out++;
            VAR_4->strm->avail_out--;
            VAR_4->strm->total_out_lo32++;
            if (VAR_4->strm->total_out_lo32 == 0) VAR_4->strm->total_out_hi32++;
         }


         if (VAR_4->nblock_used == VAR_4->save_nblock+1) return VAR_2;


         if (VAR_4->nblock_used > VAR_4->save_nblock+1)
            return VAR_3;

         VAR_4->state_out_len = 1;
         VAR_4->state_out_ch = VAR_4->k0;
         FUNC_0(VAR_5); VAR_1;
         VAR_5 ^= VAR_0; VAR_4->nblock_used++;
         if (VAR_4->nblock_used == VAR_4->save_nblock+1) continue;
         if (VAR_5 != VAR_4->k0) { VAR_4->k0 = VAR_5; continue; };

         VAR_4->state_out_len = 2;
         FUNC_0(VAR_5); VAR_1;
         VAR_5 ^= VAR_0; VAR_4->nblock_used++;
         if (VAR_4->nblock_used == VAR_4->save_nblock+1) continue;
         if (VAR_5 != VAR_4->k0) { VAR_4->k0 = VAR_5; continue; };

         VAR_4->state_out_len = 3;
         FUNC_0(VAR_5); VAR_1;
         VAR_5 ^= VAR_0; VAR_4->nblock_used++;
         if (VAR_4->nblock_used == VAR_4->save_nblock+1) continue;
         if (VAR_5 != VAR_4->k0) { VAR_4->k0 = VAR_5; continue; };

         FUNC_0(VAR_5); VAR_1;
         VAR_5 ^= VAR_0; VAR_4->nblock_used++;
         VAR_4->state_out_len = ((Int32)VAR_5) + 4;
         FUNC_0(VAR_4->k0); VAR_1;
         VAR_4->k0 ^= VAR_0; VAR_4->nblock_used++;
      }

   } else {


      UInt32 VAR_6 = VAR_4->calculatedBlockCRC;
      UChar VAR_7 = VAR_4->state_out_ch;
      Int32 VAR_8 = VAR_4->state_out_len;
      Int32 VAR_9 = VAR_4->nblock_used;
      Int32 VAR_10 = VAR_4->k0;
      UInt32* VAR_11 = VAR_4->tt;
      UInt32 VAR_12 = VAR_4->tPos;
      char* VAR_13 = VAR_4->strm->next_out;
      unsigned int VAR_14 = VAR_4->strm->avail_out;
      Int32 VAR_15 = VAR_4->blockSize100k;


      UInt32 VAR_16 = VAR_14;
      Int32 VAR_17 = VAR_4->save_nblock+1;
      unsigned int VAR_18;

      while (VAR_3) {


         if (VAR_8 > 0) {
            while (VAR_3) {
               if (VAR_14 == 0) goto return_notr;
               if (VAR_8 == 1) break;
               *( (UChar*)(VAR_13) ) = VAR_7;
               FUNC_2 ( VAR_6, VAR_7 );
               VAR_8--;
               VAR_13++;
               VAR_14--;
            }
            s_state_out_len_eq_one:
            {
               if (VAR_14 == 0) {
                  VAR_8 = 1; goto return_notr;
               };
               *( (UChar*)(VAR_13) ) = VAR_7;
               FUNC_2 ( VAR_6, VAR_7 );
               VAR_13++;
               VAR_14--;
            }
         }

         if (VAR_9 > VAR_17)
            return VAR_3;


         if (VAR_9 == VAR_17) {
            VAR_8 = 0; goto return_notr;
         };
         VAR_7 = VAR_10;
         FUNC_1(VAR_5); VAR_9++;
         if (VAR_5 != VAR_10) {
            VAR_10 = VAR_5; goto s_state_out_len_eq_one;
         };
         if (VAR_9 == VAR_17)
            goto s_state_out_len_eq_one;

         VAR_8 = 2;
         FUNC_1(VAR_5); VAR_9++;
         if (VAR_9 == VAR_17) continue;
         if (VAR_5 != VAR_10) { VAR_10 = VAR_5; continue; };

         VAR_8 = 3;
         FUNC_1(VAR_5); VAR_9++;
         if (VAR_9 == VAR_17) continue;
         if (VAR_5 != VAR_10) { VAR_10 = VAR_5; continue; };

         FUNC_1(VAR_5); VAR_9++;
         VAR_8 = ((Int32)VAR_5) + 4;
         FUNC_1(VAR_10); VAR_9++;
      }

      return_notr:
      VAR_18 = VAR_4->strm->total_out_lo32;
      VAR_4->strm->total_out_lo32 += (VAR_16 - VAR_14);
      if (VAR_4->strm->total_out_lo32 < VAR_18)
         VAR_4->strm->total_out_hi32++;


      VAR_4->calculatedBlockCRC = VAR_6;
      VAR_4->state_out_ch = VAR_7;
      VAR_4->state_out_len = VAR_8;
      VAR_4->nblock_used = VAR_9;
      VAR_4->k0 = VAR_10;
      VAR_4->tt = VAR_11;
      VAR_4->tPos = VAR_12;
      VAR_4->strm->next_out = VAR_13;
      VAR_4->strm->avail_out = VAR_14;

   }
   return VAR_2;
}
