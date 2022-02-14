
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
typedef scalar_t__ u_int ;
struct sbni_softc {scalar_t__ wait_frameno; scalar_t__ inppos; int ifp; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sbni_softc*,scalar_t__,int ) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (struct sbni_softc*,scalar_t__,int ) ;

__attribute__((used)) static int
FUNC_3(struct sbni_softc *VAR_2, u_int VAR_3, u_int VAR_4,
     u_int VAR_5, u_int32_t VAR_6)
{
 int VAR_7;

 if (VAR_5) {
  VAR_2->wait_frameno = VAR_4;
  VAR_2->inppos = 0;
 }

 if (VAR_2->wait_frameno == VAR_4) {

  if (VAR_2->inppos + VAR_3 <= VAR_0) {
   VAR_7 = FUNC_0(VAR_2, VAR_3, VAR_6);





  } else if ((VAR_7 = FUNC_2(VAR_2, VAR_3, VAR_6)) != 0) {
   VAR_2->wait_frameno = 0;
   VAR_2->inppos = 0;
   FUNC_1(VAR_2->ifp, VAR_1, 1);

  }
 } else
  VAR_7 = FUNC_2(VAR_2, VAR_3, VAR_6);

 if (VAR_5 && !VAR_7) {




  VAR_2->wait_frameno = 0;
  FUNC_1(VAR_2->ifp, VAR_1, 1);
 }

 return (VAR_7);
}
