
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int32_t ;
typedef scalar_t__ u_int ;
struct sbni_softc {scalar_t__ inppos; scalar_t__ wait_frameno; int ifp; TYPE_1__* rx_buf_p; } ;
typedef scalar_t__ caddr_t ;
struct TYPE_2__ {scalar_t__ m_data; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,scalar_t__,scalar_t__) ;
 int FUNC_1 (struct sbni_softc*) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (struct sbni_softc*) ;
 int FUNC_4 (struct sbni_softc*,scalar_t__,scalar_t__) ;

__attribute__((used)) static int
FUNC_5(struct sbni_softc *VAR_3, u_int VAR_4, u_int32_t VAR_5)
{
 caddr_t VAR_6;

 if (VAR_3->inppos + VAR_4 > VAR_1)
  return (0);

 if (!VAR_3->rx_buf_p && !FUNC_1(VAR_3))
  return (0);

 VAR_6 = VAR_3->rx_buf_p->m_data + VAR_3->inppos;
 FUNC_4(VAR_3, VAR_6, VAR_4);
 if (FUNC_0(VAR_5, VAR_6, VAR_4) != VAR_0)
  return (0);

 VAR_3->inppos += VAR_4 - 4;
 if (--VAR_3->wait_frameno == 0) {
  FUNC_3(VAR_3);
  FUNC_2(VAR_3->ifp, VAR_2, 1);
 }

 return (1);
}
