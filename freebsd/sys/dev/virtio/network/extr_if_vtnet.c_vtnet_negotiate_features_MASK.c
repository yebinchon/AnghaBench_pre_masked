
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct vtnet_softc {int vtnet_flags; void* vtnet_features; int vtnet_dev; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ,char*) ;
 void* FUNC_1 (int ,int) ;
 scalar_t__ FUNC_2 (int ,int) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ FUNC_3 (struct vtnet_softc*,char*,int ) ;

__attribute__((used)) static void
FUNC_4(struct vtnet_softc *VAR_13)
{
 device_t VAR_14;
 uint64_t VAR_15, VAR_16;

 VAR_14 = VAR_13->vtnet_dev;
 VAR_15 = 0;





 if (FUNC_3(VAR_13, "csum_disable", VAR_9)) {
  VAR_15 |= VAR_0 | VAR_1;
  VAR_15 |= VAR_8 | VAR_7;
 }
 if (FUNC_3(VAR_13, "tso_disable", VAR_12))
  VAR_15 |= VAR_8;
 if (FUNC_3(VAR_13, "lro_disable", VAR_10))
  VAR_15 |= VAR_7;

 if (FUNC_3(VAR_13, "mq_disable", VAR_11))
  VAR_15 |= VAR_2;




 VAR_16 = VAR_5 & ~VAR_15;
 VAR_13->vtnet_features = FUNC_1(VAR_14, VAR_16);

 if (FUNC_2(VAR_14, VAR_7) &&
     FUNC_2(VAR_14, VAR_3) == 0) {
  if (!FUNC_2(VAR_14, VAR_4)) {
   FUNC_0(VAR_14,
       "LRO disabled due to both mergeable buffers and "
       "indirect descriptors not negotiated\n");

   VAR_16 &= ~VAR_7;
   VAR_13->vtnet_features =
       FUNC_1(VAR_14, VAR_16);
  } else
   VAR_13->vtnet_flags |= VAR_6;
 }
}
