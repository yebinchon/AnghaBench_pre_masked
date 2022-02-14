
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct TYPE_2__ {int state; int rep0; } ;
struct xz_dec_lzma2 {TYPE_1__ lzma; int dict; int rc; } ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ) ;
 int * FUNC_2 (struct xz_dec_lzma2*) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *,int *) ;
 int FUNC_6 (int *,int *,int) ;

__attribute__((used)) static void FUNC_7(struct xz_dec_lzma2 *VAR_0)
{
 uint16_t *VAR_1;
 uint32_t VAR_2;
 uint32_t VAR_3;
 uint32_t VAR_4;
 uint32_t VAR_5;
 uint32_t VAR_6;

 VAR_1 = FUNC_2(VAR_0);

 if (FUNC_3(VAR_0->lzma.state)) {
  VAR_2 = FUNC_6(&VAR_0->rc, VAR_1, 0x100);
 } else {
  VAR_2 = 1;
  VAR_3 = FUNC_0(&VAR_0->dict, VAR_0->lzma.rep0) << 1;
  VAR_5 = 0x100;

  do {
   VAR_4 = VAR_3 & VAR_5;
   VAR_3 <<= 1;
   VAR_6 = VAR_5 + VAR_4 + VAR_2;

   if (FUNC_5(&VAR_0->rc, &VAR_1[VAR_6])) {
    VAR_2 = (VAR_2 << 1) + 1;
    VAR_5 &= VAR_4;
   } else {
    VAR_2 <<= 1;
    VAR_5 &= ~VAR_4;
   }
  } while (VAR_2 < 0x100);
 }

 FUNC_1(&VAR_0->dict, (uint8_t)VAR_2);
 FUNC_4(&VAR_0->lzma.state);
}
