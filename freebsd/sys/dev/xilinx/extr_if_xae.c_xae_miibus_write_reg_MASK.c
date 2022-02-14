
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct xae_softc {int dummy; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct xae_softc*,int ,int) ;
 int VAR_4 ;
 int VAR_5 ;
 struct xae_softc* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct xae_softc*) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_6, int VAR_7, int VAR_8, int VAR_9)
{
 struct xae_softc *VAR_10;
 uint32_t VAR_11;

 VAR_10 = FUNC_1(VAR_6);

 if (FUNC_2(VAR_10))
  return (1);

 VAR_11 = VAR_1 | VAR_0;
 VAR_11 |= (VAR_8 << VAR_3);
 VAR_11 |= (VAR_7 << VAR_2);

 FUNC_0(VAR_10, VAR_5, VAR_9);
 FUNC_0(VAR_10, VAR_4, VAR_11);

 if (FUNC_2(VAR_10))
  return (1);

 return (0);
}
