
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gic_v3_softc {int dummy; } ;


 scalar_t__ FUNC_0 (size_t) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 size_t VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (struct gic_v3_softc*,int,scalar_t__,int) ;
 int FUNC_2 (struct gic_v3_softc*) ;
 int FUNC_3 (struct gic_v3_softc*) ;
 int FUNC_4 (struct gic_v3_softc*,int ) ;

__attribute__((used)) static int
FUNC_5(struct gic_v3_softc *VAR_10)
{
 int VAR_11;
 size_t VAR_12;

 VAR_11 = FUNC_2(VAR_10);
 if (VAR_11 != 0)
  return (VAR_11);

 VAR_11 = FUNC_3(VAR_10);
 if (VAR_11 != 0)
  return (VAR_11);


 FUNC_1(VAR_10, 4, VAR_6 + VAR_1,
     0xFFFFFFFF);


 FUNC_1(VAR_10, 4, VAR_6 + VAR_0,
     VAR_3);

 FUNC_1(VAR_10, 4, VAR_6 + VAR_2,
     VAR_4);


 for (VAR_12 = 0; VAR_12 <= VAR_7; VAR_12 += VAR_5) {
  FUNC_1(VAR_10, 4, VAR_6 + FUNC_0(VAR_12),
      VAR_8);
 }

 FUNC_4(VAR_10, VAR_9);

 return (0);
}
