
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint64_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct softdma_softc {int * res; } ;
struct softdma_desc {int control; int src_addr; int len; } ;
struct softdma_channel {struct softdma_softc* sc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (struct softdma_softc*) ;
 int FUNC_2 (struct softdma_softc*,int ,int) ;

__attribute__((used)) static int
FUNC_3(struct softdma_channel *VAR_7, struct softdma_desc *VAR_8)
{
 struct softdma_softc *VAR_9;
 uint64_t VAR_10;
 uint64_t VAR_11;
 uint32_t VAR_12;
 uint32_t VAR_13;
 uint32_t VAR_14;
 int VAR_15;
 int VAR_16;

 VAR_9 = VAR_7->sc;

 FUNC_1(VAR_9);


 if (VAR_8->control & VAR_6)
  FUNC_2(VAR_9, VAR_3,
      VAR_4);

 VAR_15 = 0;
 VAR_11 = 0;

 VAR_10 = VAR_8->src_addr;
 VAR_16 = VAR_8->len;

 if (VAR_10 & 1) {
  VAR_11 = (VAR_11 << 8) | *(uint8_t *)VAR_10;
  VAR_15 += 8;
  VAR_10 += 1;
  VAR_16 -= 1;
 }

 if (VAR_16 >= 2 && VAR_10 & 2) {
  VAR_11 = (VAR_11 << 16) | *(uint16_t *)VAR_10;
  VAR_15 += 16;
  VAR_10 += 2;
  VAR_16 -= 2;
 }

 while (VAR_16 >= 4) {
  VAR_11 = (VAR_11 << 32) | (uint64_t)*(uint32_t *)VAR_10;
  VAR_10 += 4;
  VAR_16 -= 4;
  VAR_12 = (uint32_t)((VAR_11 >> VAR_15) & 0xffffffff);

  FUNC_1(VAR_9);
  if (VAR_16 == 0 && VAR_15 == 0 &&
      (VAR_8->control & VAR_5) != 0)
   FUNC_2(VAR_9, VAR_3,
       VAR_2);
  FUNC_0(VAR_9->res[0], VAR_0, VAR_12);
 }

 if (VAR_16 & 2) {
  VAR_11 = (VAR_11 << 16) | *(uint16_t *)VAR_10;
  VAR_15 += 16;
  VAR_10 += 2;
  VAR_16 -= 2;
 }

 if (VAR_16 & 1) {
  VAR_11 = (VAR_11 << 8) | *(uint8_t *)VAR_10;
  VAR_15 += 8;
  VAR_10 += 1;
  VAR_16 -= 1;
 }

 if (VAR_15 >= 32) {
  VAR_15 -= 32;
  VAR_12 = (uint32_t)((VAR_11 >> VAR_15) & 0xffffffff);

  FUNC_1(VAR_9);
  if (VAR_16 == 0 && VAR_15 == 0 &&
      (VAR_8->control & VAR_5) != 0)
   FUNC_2(VAR_9, VAR_3,
       VAR_2);
  FUNC_0(VAR_9->res[0], VAR_0, VAR_12);
 }

 if (VAR_15) {
  VAR_13 = 32 - VAR_15;
  VAR_15 /= 8;

  FUNC_1(VAR_9);
  VAR_14 = VAR_2 |
      ((4 - VAR_15) << VAR_1);
  FUNC_2(VAR_9, VAR_3, VAR_14);
  VAR_12 = (uint32_t)((VAR_11 << VAR_13) & 0xffffffff);
  FUNC_0(VAR_9->res[0], VAR_0, VAR_12);
 }

 return (VAR_8->len);
}
