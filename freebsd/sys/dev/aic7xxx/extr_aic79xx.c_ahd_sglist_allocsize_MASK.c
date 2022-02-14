
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct ahd_softc {int dummy; } ;
typedef int bus_size_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ahd_softc*) ;
 int FUNC_1 (int,int) ;

__attribute__((used)) static u_int
FUNC_2(struct ahd_softc *VAR_2)
{
 bus_size_t VAR_3;
 bus_size_t VAR_4;
 bus_size_t VAR_5;
 bus_size_t VAR_6;


 VAR_3 = FUNC_0(VAR_2);
 VAR_4 = VAR_3;


 while ((VAR_4 + VAR_3) <= VAR_1)
  VAR_4 += VAR_3;





 VAR_6 = VAR_4;
 VAR_5 = FUNC_1(VAR_3, VAR_1);
 if (VAR_5 < 4 * VAR_1)
  VAR_5 = 4 * VAR_1;
 if (VAR_5 > (VAR_0 * VAR_3))
  VAR_5 = (VAR_0 * VAR_3);
 while ((VAR_4 + VAR_3) <= VAR_5
    && (VAR_4 % VAR_1) != 0) {
  bus_size_t VAR_7;
  bus_size_t VAR_8;

  VAR_4 += VAR_3;
  VAR_7 = VAR_4 % VAR_1;
  VAR_8 = VAR_6 % VAR_1;
  if (VAR_7 > VAR_8 || VAR_7 == 0) {
   VAR_6 = VAR_4;
  }
 }
 return (VAR_6);
}
