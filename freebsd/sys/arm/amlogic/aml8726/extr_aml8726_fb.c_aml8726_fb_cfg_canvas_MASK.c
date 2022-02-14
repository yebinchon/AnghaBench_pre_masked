
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {scalar_t__ fb_height; scalar_t__ fb_pbase; scalar_t__ fb_stride; } ;
struct aml8726_fb_softc {TYPE_1__ info; } ;


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
 int FUNC_0 (struct aml8726_fb_softc*,int ) ;
 int FUNC_1 (struct aml8726_fb_softc*,int ,int) ;

__attribute__((used)) static void
FUNC_2(struct aml8726_fb_softc *VAR_14)
{
 uint32_t VAR_15;
 uint32_t VAR_16;







 VAR_16 = (uint32_t)VAR_14->info.fb_stride / 8;


 VAR_15 = (VAR_16 << VAR_11) &
     VAR_10;


 VAR_15 |= (uint32_t)VAR_14->info.fb_pbase / 8;

 FUNC_1(VAR_14, VAR_9, VAR_15);


 VAR_15 = ((VAR_16 >> VAR_12) <<
     VAR_8) & VAR_7;


 VAR_15 |= ((uint32_t)VAR_14->info.fb_height <<
     VAR_5) & VAR_4;


 VAR_15 |= VAR_3;

 FUNC_1(VAR_14, VAR_6, VAR_15);

 FUNC_1(VAR_14, VAR_1, (VAR_2 |
     (VAR_13 << VAR_0)));

 FUNC_0(VAR_14, VAR_1);
}
