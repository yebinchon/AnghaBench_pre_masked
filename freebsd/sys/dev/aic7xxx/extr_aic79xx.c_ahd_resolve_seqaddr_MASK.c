
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int ;
struct patch {int dummy; } ;
struct ahd_softc {int dummy; } ;


 int FUNC_0 (scalar_t__,scalar_t__) ;
 int FUNC_1 (struct ahd_softc*,struct patch**,scalar_t__,scalar_t__*) ;
 struct patch* VAR_0 ;

__attribute__((used)) static u_int
FUNC_2(struct ahd_softc *VAR_1, u_int VAR_2)
{
 struct patch *VAR_3;
 int VAR_4;
 u_int VAR_5;
 u_int VAR_6;

 VAR_4 = 0;
 VAR_3 = VAR_0;
 VAR_5 = 0;

 for (VAR_6 = 0; VAR_6 < VAR_2;) {

  FUNC_1(VAR_1, &VAR_3, VAR_6, &VAR_5);

  if (VAR_5 > VAR_6) {
   int VAR_7;

   VAR_7 = FUNC_0(VAR_2, VAR_5);
   VAR_4 += VAR_7 - VAR_6;
   VAR_6 = VAR_5;
  } else {
   VAR_6++;
  }
 }
 return (VAR_2 - VAR_4);
}
