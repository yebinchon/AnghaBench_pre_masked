
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef scalar_t__ uint32_t ;
typedef scalar_t__ uint16_t ;
struct softdma_softc {int * res; } ;
struct softdma_desc {size_t len; scalar_t__ dst_addr; } ;
struct softdma_channel {struct softdma_softc* sc; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (char*,scalar_t__) ;
 scalar_t__ FUNC_2 (struct softdma_softc*) ;
 scalar_t__ FUNC_3 (struct softdma_softc*,int ) ;

__attribute__((used)) static int
FUNC_4(struct softdma_channel *VAR_8, struct softdma_desc *VAR_9)
{
 uint32_t VAR_10, VAR_11;
 struct softdma_softc *VAR_12;
 uint32_t VAR_13;
 uint32_t VAR_14;
 uint32_t VAR_15;
 uint32_t VAR_16;
 int VAR_17;
 int VAR_18;
 size_t VAR_19;
 int VAR_20;

 VAR_12 = VAR_8->sc;
 VAR_14 = 0;
 VAR_10 = VAR_11 = 0;
 VAR_20 = 0;

 VAR_13 = FUNC_2(VAR_12);
 if (VAR_13 == 0) {

  return (0);
 }

 VAR_19 = VAR_9->len;

 VAR_17 = 0;
 while (VAR_13) {
  VAR_14 = 0;
  VAR_16 = FUNC_0(VAR_12->res[0], VAR_1);
  VAR_15 = FUNC_3(VAR_12, VAR_6);

  if (VAR_15 & VAR_5) {
   VAR_20 = 1;
   break;
  }

  if ((VAR_15 & VAR_0) != 0) {
   VAR_20 = 1;
   break;
  }

  if (VAR_15 & VAR_7) {
   VAR_17 = 1;
  }

  if (VAR_15 & VAR_4) {
   VAR_14 = (VAR_15 & VAR_2) >>
       VAR_3;
  }

  if (VAR_17 == 0) {
   VAR_20 = 1;
   break;
  }

  if (VAR_14 == 0) {
   *(uint32_t *)(VAR_9->dst_addr + VAR_11) = VAR_16;
   VAR_11 += 4;
  } else if (VAR_14 == 1) {
   *(uint16_t *)(VAR_9->dst_addr + VAR_11) =
       ((VAR_16 >> 16) & 0xffff);
   VAR_11 += 2;

   *(uint8_t *)(VAR_9->dst_addr + VAR_11) =
       ((VAR_16 >> 8) & 0xff);
   VAR_11 += 1;
  } else {
   FUNC_1("empty %d\n", VAR_14);
  }

  if (VAR_15 & VAR_4)
   break;

  VAR_13 = FUNC_2(VAR_12);
  VAR_18 = 100;
  while (VAR_13 == 0 && VAR_18--)
   VAR_13 = FUNC_2(VAR_12);
  if (VAR_18 == 0) {

   VAR_20 = 1;
   break;
  }
 }

 if (VAR_20) {
  return (-1);
 }

 return (VAR_11);
}
