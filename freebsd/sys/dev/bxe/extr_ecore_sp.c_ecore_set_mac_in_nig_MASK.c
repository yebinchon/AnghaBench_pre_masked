
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct bxe_softc {int dummy; } ;


 int FUNC_0 (struct bxe_softc*) ;
 int VAR_0 ;
 int FUNC_1 (struct bxe_softc*,char*,char*,int) ;
 scalar_t__ FUNC_2 (struct bxe_softc*) ;
 int FUNC_3 (struct bxe_softc*,int,int*,int) ;
 int FUNC_4 (struct bxe_softc*) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_5 (struct bxe_softc*,scalar_t__,int) ;

void FUNC_6(struct bxe_softc *VAR_5,
     bool VAR_6, unsigned char *VAR_7, int VAR_8)
{
 uint32_t VAR_9[2];
 uint32_t VAR_10 = FUNC_2(VAR_5) ? VAR_3 :
    VAR_1;

 if (!FUNC_0(VAR_5) && !FUNC_4(VAR_5))
  return;

 if (VAR_8 > VAR_0)
  return;

 FUNC_1(VAR_5, "Going to %s LLH configuration at entry %d\n",
    (VAR_6 ? "ADD" : "DELETE"), VAR_8);

 if (VAR_6) {

  VAR_10 += 8*VAR_8;

  VAR_9[0] = ((VAR_7[2] << 24) | (VAR_7[3] << 16) |
         (VAR_7[4] << 8) | VAR_7[5]);
  VAR_9[1] = ((VAR_7[0] << 8) | VAR_7[1]);

  FUNC_3(VAR_5, VAR_10, VAR_9, 2);
 }

 FUNC_5(VAR_5, (FUNC_2(VAR_5) ? VAR_4 :
      VAR_2) + 4*VAR_8, VAR_6);
}
