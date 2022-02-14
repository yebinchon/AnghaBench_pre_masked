
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
struct ntb_plx_softc {unsigned int b2b_mw; int b2b_off; unsigned int split; int alut; int ntx; int conf_res; scalar_t__ link; struct ntb_plx_mw_info* mw_info; } ;
struct ntb_plx_mw_info {int mw_bar; int mw_size; TYPE_1__* splits; scalar_t__ mw_64bit; } ;
typedef int device_t ;
struct TYPE_2__ {int mw_xlat_size; int mw_xlat_addr; } ;


 int VAR_0 ;
 int FUNC_0 (struct ntb_plx_softc*,int,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct ntb_plx_softc*,int,int) ;
 int VAR_1 ;
 int FUNC_3 (int ,int,int) ;
 struct ntb_plx_softc* FUNC_4 (int ) ;
 long long FUNC_5 (int) ;
 int FUNC_6 (int) ;

__attribute__((used)) static int
FUNC_7(device_t VAR_2, unsigned VAR_3)
{
 struct ntb_plx_softc *VAR_4 = FUNC_4(VAR_2);
 struct ntb_plx_mw_info *VAR_5;
 uint64_t VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12;
 uint32_t VAR_13;
 unsigned VAR_14, VAR_15, VAR_16;

 VAR_5 = &VAR_4->mw_info[VAR_3];
 VAR_8 = (VAR_3 == VAR_4->b2b_mw) ? VAR_4->b2b_off : 0;
 VAR_16 = (VAR_5->mw_bar == 2) ? VAR_4->split : 0;


 if (VAR_16 || VAR_4->b2b_mw < 0) {
  VAR_10 = VAR_5->mw_size - VAR_8;
 } else {
  VAR_10 = VAR_5->splits[0].mw_xlat_size;
  if (!FUNC_6(VAR_10))
   VAR_10 = 1LL << FUNC_5(VAR_10);
  if (VAR_10 > 0 && VAR_10 < 1024 * 1024)
   VAR_10 = 1024 * 1024;
 }






 if ((VAR_8 & (VAR_10 - 1)) != 0)
  return (VAR_0);


 if (VAR_4->b2b_mw >= 0 && VAR_5->mw_64bit) {
  VAR_12 = 0;
  if (VAR_10 > 0)
   VAR_12 = (~(VAR_10 - 1) & ~0xfffff);
  VAR_12 |= 0xc;
  FUNC_2(VAR_4, 0xe8 + (VAR_5->mw_bar - 2) * 4, VAR_12);
  FUNC_2(VAR_4, 0xe8 + (VAR_5->mw_bar - 2) * 4 + 4, VAR_12 >> 32);

  VAR_12 = 0x2000000000000000 * VAR_5->mw_bar + VAR_8;
  FUNC_2(VAR_4, FUNC_1(VAR_5->mw_bar), VAR_12);
  FUNC_2(VAR_4, FUNC_1(VAR_5->mw_bar) + 4, VAR_12 >> 32);
 } else if (VAR_4->b2b_mw >= 0) {
  VAR_13 = 0;
  if (VAR_10 > 0)
   VAR_13 = (~(VAR_10 - 1) & ~0xfffff);
  FUNC_2(VAR_4, 0xe8 + (VAR_5->mw_bar - 2) * 4, VAR_13);

  VAR_12 = 0x20000000 * VAR_5->mw_bar + VAR_8;
  FUNC_2(VAR_4, FUNC_1(VAR_5->mw_bar), VAR_12);
 }


 VAR_6 = VAR_16 ? VAR_1 : VAR_5->splits[0].mw_xlat_addr;
 if (VAR_5->mw_64bit) {
  FUNC_2(VAR_4, 0xc3c + (VAR_5->mw_bar - 2) * 4, VAR_6);
  FUNC_2(VAR_4, 0xc3c + (VAR_5->mw_bar - 2) * 4 + 4, VAR_6 >> 32);
 } else {
  FUNC_2(VAR_4, 0xc3c + (VAR_5->mw_bar - 2) * 4, VAR_6);
 }


 VAR_9 = VAR_16 ? 0 : VAR_5->splits[0].mw_xlat_size;
 if (VAR_4->alut && VAR_5->mw_bar == 2 && (VAR_4->split > 0 ||
     ((VAR_6 & (VAR_10 - 1)) != 0 || VAR_9 != VAR_10))) {
  VAR_11 = VAR_10 / (128 * VAR_4->alut);
  for (VAR_14 = VAR_15 = 0; VAR_14 < 128 * VAR_4->alut; VAR_14++) {
   if (VAR_14 % (128 * VAR_4->alut >> VAR_4->split) == 0) {
    VAR_7 = VAR_6 = VAR_5->splits[VAR_15].mw_xlat_addr;
    VAR_9 = VAR_5->splits[VAR_15++].mw_xlat_size;
   }
   VAR_13 = VAR_4->link ? 0 : 1;
   if (VAR_4->alut == 1)
    VAR_13 += 2 * VAR_4->ntx;
   VAR_13 *= 0x1000 * VAR_4->alut;
   VAR_13 += 0x38000 + VAR_14 * 4 + (VAR_14 >= 128 ? 0x0e00 : 0);
   FUNC_3(VAR_4->conf_res, VAR_13, VAR_7);
   FUNC_3(VAR_4->conf_res, VAR_13 + 0x400, VAR_7 >> 32);
   FUNC_3(VAR_4->conf_res, VAR_13 + 0x800,
       (VAR_7 < VAR_6 + VAR_9) ? 0x3 : 0);
   VAR_7 += VAR_11;
  }
  FUNC_0(VAR_4, 0xc94, 0x10000000);
 } else if (VAR_4->alut && VAR_5->mw_bar == 2)
  FUNC_0(VAR_4, 0xc94, 0);

 return (0);
}
