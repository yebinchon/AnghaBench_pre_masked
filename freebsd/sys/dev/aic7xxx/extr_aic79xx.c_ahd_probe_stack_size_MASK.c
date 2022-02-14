
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct ahd_softc {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct ahd_softc*,int ) ;
 int FUNC_1 (struct ahd_softc*,int ,int) ;

__attribute__((used)) static int
FUNC_2(struct ahd_softc *VAR_1)
{
 int VAR_2;

 VAR_2 = 0;
 while (1) {
  int VAR_3;







  for (VAR_3 = 1; VAR_3 <= VAR_2+1; VAR_3++) {
         FUNC_1(VAR_1, VAR_0, VAR_3 & 0xFF);
         FUNC_1(VAR_1, VAR_0, (VAR_3 >> 8) & 0xFF);
  }


  for (VAR_3 = VAR_2+1; VAR_3 > 0; VAR_3--) {
   u_int VAR_4;

   VAR_4 = FUNC_0(VAR_1, VAR_0)
        |(FUNC_0(VAR_1, VAR_0) << 8);
   if (VAR_4 != VAR_3)
    goto sized;
  }
  VAR_2++;
 }
sized:
 return (VAR_2);
}
