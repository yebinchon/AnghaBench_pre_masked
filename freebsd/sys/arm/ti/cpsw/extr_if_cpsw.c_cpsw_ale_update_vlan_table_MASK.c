
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct cpsw_softc {int dummy; } ;


 scalar_t__ FUNC_0 (int*) ;
 int VAR_0 ;
 int FUNC_1 (int*) ;
 int VAR_1 ;
 int FUNC_2 (struct cpsw_softc*,int,int*) ;
 int FUNC_3 (struct cpsw_softc*,int,int*) ;

__attribute__((used)) static int
FUNC_4(struct cpsw_softc *VAR_2, int VAR_3, int VAR_4,
 int VAR_5, int VAR_6, int VAR_7)
{
 int VAR_8, VAR_9, VAR_10;
 uint32_t VAR_11[3];

 VAR_8 = VAR_10 = -1;

 for (VAR_9 = 5; VAR_9 < VAR_1; VAR_9++) {
  FUNC_2(VAR_2, VAR_9, VAR_11);


  if (VAR_8 < 0 && FUNC_0(VAR_11) == 0)
   VAR_8 = VAR_9;

  if (FUNC_1(VAR_11) == VAR_3) {
   VAR_10 = VAR_9;
   break;
  }
 }

 if (VAR_10 < 0) {
  if (VAR_8 < 0)
   return (-1);
  VAR_9 = VAR_8;
 }

 VAR_11[0] = (VAR_5 & 7) << 24 | (VAR_6 & 7) << 16 |
     (VAR_7 & 7) << 8 | (VAR_4 & 7);
 VAR_11[1] = VAR_0 << 28 | VAR_3 << 16;
 VAR_11[2] = 0;
 FUNC_3(VAR_2, VAR_9, VAR_11);

 return (0);
}
