
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct ntb_softc {TYPE_1__* xlat_reg; } ;
typedef enum ntb_bar { ____Placeholder_ntb_bar } ntb_bar ;
struct TYPE_2__ {int bar5_xlat; int bar5_limit; int bar5_base; int bar4_xlat; int bar4_limit; int bar4_base; int bar2_xlat; int bar2_limit; int bar2_base; } ;


 int FUNC_0 (int,char*) ;



 int VAR_0 ;

__attribute__((used)) static inline void
FUNC_1(struct ntb_softc *VAR_1, enum ntb_bar VAR_2, uint32_t *VAR_3,
    uint32_t *VAR_4, uint32_t *VAR_5)
{
 uint32_t VAR_6, VAR_7, VAR_8;

 switch (VAR_2) {
 case 130:
  VAR_6 = VAR_1->xlat_reg->bar2_base;
  VAR_7 = VAR_1->xlat_reg->bar2_limit;
  VAR_8 = VAR_1->xlat_reg->bar2_xlat;
  break;
 case 129:
  VAR_6 = VAR_1->xlat_reg->bar4_base;
  VAR_7 = VAR_1->xlat_reg->bar4_limit;
  VAR_8 = VAR_1->xlat_reg->bar4_xlat;
  break;
 case 128:
  VAR_6 = VAR_1->xlat_reg->bar5_base;
  VAR_7 = VAR_1->xlat_reg->bar5_limit;
  VAR_8 = VAR_1->xlat_reg->bar5_xlat;
  break;
 default:
  FUNC_0(VAR_2 >= 130 && VAR_2 < VAR_0,
      ("bad bar"));
  VAR_6 = VAR_7 = VAR_8 = 0;
  break;
 }

 if (VAR_3 != ((void*)0))
  *VAR_3 = VAR_6;
 if (VAR_4 != ((void*)0))
  *VAR_4 = VAR_8;
 if (VAR_5 != ((void*)0))
  *VAR_5 = VAR_7;
}
