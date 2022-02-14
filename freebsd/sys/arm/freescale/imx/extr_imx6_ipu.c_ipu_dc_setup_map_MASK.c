
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct ipu_softc {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct ipu_softc*,int ) ;
 int FUNC_3 (struct ipu_softc*,int ,int) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_4(struct ipu_softc *VAR_1, int VAR_2,
    int VAR_3, int VAR_4, int VAR_5)
{
 uint32_t VAR_6, VAR_7, VAR_8;

 VAR_8 = VAR_2 * 3 + VAR_3;

 VAR_6 = FUNC_2(VAR_1, FUNC_1(VAR_8));
 if (VAR_8 & 1)
  VAR_7 = 16;
 else
  VAR_7 = 0;
 VAR_6 &= ~(0xffff << VAR_7);
 VAR_6 |= ((VAR_4 << 8) | VAR_5) << VAR_7;
 FUNC_3(VAR_1, FUNC_1(VAR_8), VAR_6);

 VAR_6 = FUNC_2(VAR_1, FUNC_0(VAR_2));
 if (VAR_2 & 1)
  VAR_7 = 16 + 5 * VAR_3;
 else
  VAR_7 = 5 * VAR_3;
 VAR_6 &= ~(VAR_0 << VAR_7);
 VAR_6 |= (VAR_8) << VAR_7;
 FUNC_3(VAR_1, FUNC_0(VAR_2), VAR_6);
}
