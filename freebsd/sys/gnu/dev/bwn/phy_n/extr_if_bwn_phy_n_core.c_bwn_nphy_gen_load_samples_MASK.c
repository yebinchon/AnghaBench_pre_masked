
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int uint16_t ;
struct bwn_mac {int mac_sc; } ;
struct bwn_c32 {int q; int i; } ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct bwn_mac*,int ) ;
 void* FUNC_2 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct bwn_c32 FUNC_3 (int) ;
 scalar_t__ FUNC_4 (struct bwn_mac*) ;
 int FUNC_5 (struct bwn_mac*,struct bwn_c32*,int) ;
 int FUNC_6 (struct bwn_c32*,int ) ;
 struct bwn_c32* FUNC_7 (int,int ,int) ;

__attribute__((used)) static uint16_t FUNC_8(struct bwn_mac *VAR_5, uint32_t VAR_6, uint16_t VAR_7,
     bool VAR_8)
{
 int VAR_9;
 uint16_t VAR_10, VAR_11, VAR_12, VAR_13;
 struct bwn_c32 *VAR_14;

 VAR_10 = FUNC_4(VAR_5) ? 40 : 20;
 VAR_11 = VAR_10 << 3;

 if (VAR_8) {
  if (FUNC_1(VAR_5, VAR_0) & VAR_1)
   VAR_10 = 82;
  else
   VAR_10 = 80;

  if (FUNC_4(VAR_5))
   VAR_10 <<= 1;

  VAR_11 = VAR_10 << 1;
 }

 VAR_14 = FUNC_7(VAR_11 * sizeof(struct bwn_c32), VAR_2, VAR_3 | VAR_4);
 if (!VAR_14) {
  FUNC_0(VAR_5->mac_sc, "allocation for samples generation failed\n");
  return 0;
 }
 VAR_12 = (((VAR_6 * 36) / VAR_10) << 16) / 100;
 VAR_13 = 0;

 for (VAR_9 = 0; VAR_9 < VAR_11; VAR_9++) {
  VAR_14[VAR_9] = FUNC_3(VAR_13);
  VAR_13 += VAR_12;
  VAR_14[VAR_9].q = FUNC_2(VAR_14[VAR_9].q * VAR_7);
  VAR_14[VAR_9].i = FUNC_2(VAR_14[VAR_9].i * VAR_7);
 }

 VAR_9 = FUNC_5(VAR_5, VAR_14, VAR_11);
 FUNC_6(VAR_14, VAR_2);
 return (VAR_9 < 0) ? 0 : VAR_11;
}
