
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct adm6996fc_softc {int dummy; } ;
typedef int device_t ;


 int FUNC_0 (struct adm6996fc_softc*) ;
 int FUNC_1 (struct adm6996fc_softc*,int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ,scalar_t__) ;
 int FUNC_3 (struct adm6996fc_softc*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (int ) ;
 struct adm6996fc_softc* FUNC_5 (int ) ;

__attribute__((used)) static int
FUNC_6(device_t VAR_4, int VAR_5, int VAR_6)
{
 struct adm6996fc_softc *VAR_7;
 int VAR_8;

 VAR_7 = FUNC_5(VAR_4);
 FUNC_1(VAR_7, VAR_3);

 if (VAR_5 < 0 || VAR_5 >= 32)
  return (VAR_2);
 if (VAR_6 < 0 || VAR_6 >= 32)
  return (VAR_2);

 FUNC_0(VAR_7);
 VAR_8 = FUNC_2(FUNC_4(VAR_4),
     (VAR_0 + VAR_1 * VAR_5) + VAR_6);
 FUNC_3(VAR_7);

 return (VAR_8);
}
