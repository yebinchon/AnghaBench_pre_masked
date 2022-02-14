
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct ahd_softc {int dummy; } ;


 int FUNC_0 (struct ahd_softc*,int ,int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct ahd_softc*,int ,int ) ;
 int FUNC_3 (struct ahd_softc*,int ) ;

__attribute__((used)) static void
FUNC_4(struct ahd_softc *VAR_4, u_int VAR_5,
      u_int VAR_6, u_int VAR_7)
{
 FUNC_0(VAR_4, VAR_0, VAR_0);

 if (FUNC_1(VAR_6)) {


  if (FUNC_1(VAR_5)) {
   FUNC_2(VAR_4, VAR_2, VAR_7);
  } else {
   FUNC_3(VAR_4, VAR_5);
   FUNC_2(VAR_4, VAR_1, VAR_7);
  }
  if (FUNC_1(VAR_7))
   FUNC_2(VAR_4, VAR_3, VAR_5);
 } else {


  if (FUNC_1(VAR_5)) {
   FUNC_2(VAR_4, VAR_2, VAR_6);
  } else {
   FUNC_3(VAR_4, VAR_5);
   FUNC_2(VAR_4, VAR_1, VAR_6);
  }
  FUNC_3(VAR_4, VAR_6);
  FUNC_2(VAR_4, VAR_1, VAR_7);

  if (FUNC_1(VAR_7))
   FUNC_2(VAR_4, VAR_3, VAR_6);
 }
}
