
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct ipu_softc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ipu_softc*,int,int) ;
 int VAR_3 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 int VAR_4 ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;

__attribute__((used)) static void
FUNC_6(struct ipu_softc *VAR_5, int VAR_6, int VAR_7)
{
 uint32_t VAR_8;
 uint32_t VAR_9, VAR_10;
 int VAR_11, VAR_12;
 int VAR_13;

 VAR_12 = VAR_6 ? 2 : 5;

 for (VAR_11 = 0; VAR_11 < 3; VAR_11++) {
  if (VAR_11 == 0)
   VAR_13 = VAR_1;
  else if (VAR_11 == 1)
   VAR_13 = VAR_2;
  else if (VAR_11 == 2)
   VAR_13 = 0;

  VAR_9 = FUNC_4(5) |
      FUNC_1(VAR_13) |
      FUNC_5(1) |
      FUNC_2(VAR_7 + 1);



  VAR_10 = FUNC_3(VAR_3) |
      VAR_4;

  VAR_8 = VAR_0 + (VAR_12 + VAR_11) * 2 * sizeof(uint32_t);
  FUNC_0(VAR_5, VAR_8, VAR_9);
  FUNC_0(VAR_5, VAR_8 + sizeof(uint32_t), VAR_10);
 }
}
