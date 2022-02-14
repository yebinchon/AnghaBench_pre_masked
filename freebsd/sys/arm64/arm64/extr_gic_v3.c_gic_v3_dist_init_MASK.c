
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef scalar_t__ u_int ;
struct gic_v3_softc {scalar_t__ gic_nirqs; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int FUNC_6 (struct gic_v3_softc*,int,int ,int) ;
 int FUNC_7 (struct gic_v3_softc*,int ) ;

__attribute__((used)) static int
FUNC_8(struct gic_v3_softc *VAR_11)
{
 uint64_t VAR_12;
 u_int VAR_13;




 FUNC_6(VAR_11, 4, VAR_1, 0);
 FUNC_7(VAR_11, VAR_0);





 for (VAR_13 = VAR_9; VAR_13 < VAR_11->gic_nirqs; VAR_13 += VAR_6)
  FUNC_6(VAR_11, 4, FUNC_3(VAR_13), 0xFFFFFFFF);


 for (VAR_13 = VAR_9; VAR_13 < VAR_11->gic_nirqs; VAR_13 += VAR_5)
  FUNC_6(VAR_11, 4, FUNC_2(VAR_13), 0x00000000);


 for (VAR_13 = VAR_9;
     VAR_13 < VAR_11->gic_nirqs; VAR_13 += VAR_7) {

  FUNC_6(VAR_11, 4, FUNC_4(VAR_13), VAR_10);
 }





 for (VAR_13 = VAR_9; VAR_13 < VAR_11->gic_nirqs; VAR_13 += VAR_8)
  FUNC_6(VAR_11, 4, FUNC_1(VAR_13), 0xFFFFFFFF);

 FUNC_7(VAR_11, VAR_0);





 FUNC_6(VAR_11, 4, VAR_1, VAR_2 | VAR_4 |
     VAR_3);




 VAR_12 = FUNC_0(0);
 for (VAR_13 = VAR_9; VAR_13 < VAR_11->gic_nirqs; VAR_13++)
  FUNC_6(VAR_11, 4, FUNC_5(VAR_13), VAR_12);

 return (0);
}
