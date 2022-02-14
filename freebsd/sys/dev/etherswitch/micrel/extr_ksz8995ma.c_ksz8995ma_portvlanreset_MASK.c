
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ksz8995ma_softc {int numports; } ;
typedef int device_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 struct ksz8995ma_softc* FUNC_0 (int ) ;
 int FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (int ,scalar_t__,int) ;

__attribute__((used)) static void
FUNC_3(device_t VAR_2)
{
 int VAR_3, VAR_4;
 struct ksz8995ma_softc *VAR_5;

 VAR_5 = FUNC_0(VAR_2);

 for (VAR_3 = 0; VAR_3 < VAR_5->numports; ++VAR_3) {
  VAR_4 = FUNC_1(VAR_2, VAR_0 +
      VAR_1 * VAR_3);
  FUNC_2(VAR_2, VAR_0 +
      VAR_1 * VAR_3, (VAR_4 & 0xe0) | 0x1f);
 }
}
