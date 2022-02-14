
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;
struct ti_clock_dev {int dummy; } ;
struct omap4_prcm_softc {int sc_res; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int *,int*) ;
 struct omap4_prcm_softc* FUNC_2 (int ) ;

__attribute__((used)) static int
FUNC_3(struct ti_clock_dev *VAR_3,
                            unsigned int *VAR_4)
{
 uint32_t VAR_5;
 uint32_t VAR_6, VAR_7;
 uint32_t VAR_8, VAR_9;
 struct omap4_prcm_softc *VAR_10;

 VAR_10 = FUNC_2(VAR_0);
 if (VAR_10 == ((void*)0))
  return VAR_2;




 VAR_5 = FUNC_0(VAR_10->sc_res, VAR_1);

 VAR_6 = ((VAR_5 >> 8) & 0x7ff);
 VAR_7 = (VAR_5 & 0x7f) + 1;



 FUNC_1(((void*)0), &VAR_9);



 VAR_8 = ((uint64_t)VAR_9 * VAR_6) / VAR_7;


 if (VAR_4)
  *VAR_4 = VAR_8;

 return (0);
}
