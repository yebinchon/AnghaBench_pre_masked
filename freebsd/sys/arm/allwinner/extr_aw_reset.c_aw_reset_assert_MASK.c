
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct aw_reset_softc {int mtx; } ;
typedef int device_t ;


 int FUNC_0 (intptr_t) ;
 int FUNC_1 (struct aw_reset_softc*,int ) ;
 int FUNC_2 (intptr_t) ;
 int FUNC_3 (struct aw_reset_softc*,int ,int) ;
 struct aw_reset_softc* FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int
FUNC_7(device_t VAR_0, intptr_t VAR_1, bool VAR_2)
{
 struct aw_reset_softc *VAR_3;
 uint32_t VAR_4;

 VAR_3 = FUNC_4(VAR_0);

 FUNC_5(&VAR_3->mtx);
 VAR_4 = FUNC_1(VAR_3, FUNC_0(VAR_1));
 if (VAR_2)
  VAR_4 &= ~(1 << FUNC_2(VAR_1));
 else
  VAR_4 |= (1 << FUNC_2(VAR_1));
 FUNC_3(VAR_3, FUNC_0(VAR_1), VAR_4);
 FUNC_6(&VAR_3->mtx);

 return (0);
}
