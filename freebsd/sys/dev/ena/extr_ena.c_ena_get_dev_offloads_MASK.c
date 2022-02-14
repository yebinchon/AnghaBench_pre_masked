
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int tx; int rx_supported; } ;
struct ena_com_dev_get_features_ctx {TYPE_1__ offload; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
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

__attribute__((used)) static int
FUNC_0(struct ena_com_dev_get_features_ctx *VAR_18)
{
 int VAR_19 = 0;

 if ((VAR_18->offload.tx &
     (VAR_6 |
     VAR_7 |
     VAR_5)) != 0)
  VAR_19 |= VAR_16;

 if ((VAR_18->offload.tx &
     (VAR_8 |
     VAR_9)) != 0)
  VAR_19 |= VAR_17;

 if ((VAR_18->offload.tx &
     VAR_3) != 0)
  VAR_19 |= VAR_14;

 if ((VAR_18->offload.tx &
     VAR_4) != 0)
  VAR_19 |= VAR_15;

 if ((VAR_18->offload.rx_supported &
     (VAR_1 |
     VAR_0)) != 0)
  VAR_19 |= VAR_12;

 if ((VAR_18->offload.rx_supported &
     VAR_2) != 0)
  VAR_19 |= VAR_13;

 VAR_19 |= VAR_11 | VAR_10;

 return (VAR_19);
}
