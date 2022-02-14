
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_2__ {int lenerr_en; scalar_t__ hdr_sl; scalar_t__ rx_hdr; scalar_t__ maxlen; scalar_t__ minlen; } ;
struct nicpf {int flags; TYPE_1__ pkind; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_0 (struct nicpf*,int,int) ;
 int FUNC_1 (struct nicpf*,int ) ;

__attribute__((used)) static void
FUNC_2(struct nicpf *VAR_21)
{
 int VAR_22;


 FUNC_0(VAR_21, VAR_10, 0x3);


 FUNC_0(VAR_21, VAR_9, (1UL << 6) | 0x03);

 if (VAR_21->flags & VAR_17) {
  FUNC_0(VAR_21, VAR_12,
      (VAR_18 << 7) | VAR_19);
  FUNC_0(VAR_21, VAR_12 | (1 << 8),
      (VAR_18 << 7) | VAR_20);
  FUNC_0(VAR_21, VAR_11,
      (1UL << 63) | VAR_19);
  FUNC_0(VAR_21, VAR_11 + (1 << 8),
      (1UL << 63) | VAR_20);

 } else {

  FUNC_0(VAR_21, VAR_12,
      (VAR_16 << 7) | VAR_0);
  FUNC_0(VAR_21, VAR_12 | (1 << 8),
      (VAR_16 << 7) | VAR_1);
  FUNC_0(VAR_21, VAR_11,
      (1UL << 63) | VAR_0);
  FUNC_0(VAR_21, VAR_11 + (1 << 8),
      (1UL << 63) | VAR_1);
 }


 VAR_21->pkind.minlen = 0;
 VAR_21->pkind.maxlen = VAR_6 + VAR_3;
 VAR_21->pkind.lenerr_en = 1;
 VAR_21->pkind.rx_hdr = 0;
 VAR_21->pkind.hdr_sl = 0;

 for (VAR_22 = 0; VAR_22 < VAR_8; VAR_22++) {
  FUNC_0(VAR_21, VAR_14 | (VAR_22 << 3),
      *(uint64_t *)&VAR_21->pkind);
 }

 FUNC_1(VAR_21, VAR_7);


 FUNC_0(VAR_21, VAR_13, VAR_5);


 FUNC_0(VAR_21, VAR_15,
     (2 << 19) | (VAR_4 << 16) | VAR_2);
}
