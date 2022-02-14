
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t u_char ;
struct mbuf {int dummy; } ;
struct lp_data {size_t* sc_ifbuf; scalar_t__ sc_iferrs; TYPE_1__* sc_ifp; int sc_dev; } ;
typedef int device_t ;
struct TYPE_5__ {int if_flags; int if_mtu; int if_drv_flags; int if_fib; int if_bpf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (struct mbuf*,int ) ;
 int VAR_11 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_1__*,int ,int) ;
 int FUNC_5 (TYPE_1__*,char*) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (TYPE_1__*,struct mbuf*) ;
 struct mbuf* FUNC_8 (size_t*,int,int ,TYPE_1__*,int ) ;
 int FUNC_9 (int ,struct mbuf*) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ,int) ;
 int FUNC_15 (int ,int) ;
 int* VAR_12 ;
 int* VAR_13 ;

__attribute__((used)) static void
FUNC_16(void *VAR_14)
{
 struct lp_data *VAR_15 = VAR_14;
 device_t VAR_16 = FUNC_3(VAR_15->sc_dev);
 int VAR_17, VAR_18;
 u_char *VAR_19;
 u_char VAR_20, VAR_21;
 struct mbuf *VAR_22;

 FUNC_10(VAR_16);
 if (VAR_15->sc_ifp->if_flags & VAR_5) {


  FUNC_15(VAR_16, 0x01);


  VAR_18 = FUNC_2(VAR_9, VAR_16);
  if (VAR_18 == -1)
   goto err;
  VAR_17 = VAR_18;
  VAR_18 = FUNC_2(VAR_9, VAR_16);
  if (VAR_18 == -1)
   goto err;
  VAR_17 = VAR_17 + (VAR_18 << 8);
  if (VAR_17 > VAR_15->sc_ifp->if_mtu + VAR_10)
   goto err;

  VAR_19 = VAR_15->sc_ifbuf;

  while (VAR_17--) {
   VAR_18 = FUNC_2(VAR_9, VAR_16);
   if (VAR_18 == -1) {
    goto err;
   }
   *VAR_19++ = VAR_18;
  }


  VAR_18 = FUNC_2(VAR_9, VAR_16);
  if (VAR_18 == -1) {
   goto err;
  }

  VAR_17 = VAR_19 - VAR_15->sc_ifbuf;
  if (VAR_17 <= VAR_0)
   goto err;

  VAR_15->sc_iferrs = 0;

  VAR_17 -= VAR_0;
  FUNC_4(VAR_15->sc_ifp, VAR_3, 1);
  FUNC_4(VAR_15->sc_ifp, VAR_1, VAR_17);
  VAR_22 = FUNC_8(VAR_15->sc_ifbuf + VAR_0, VAR_17, 0, VAR_15->sc_ifp,
      0);
  if (VAR_22) {
   FUNC_13(VAR_16);
   if (FUNC_1(VAR_15->sc_ifp->if_bpf))
    FUNC_7(VAR_15->sc_ifp, VAR_22);

   FUNC_0(VAR_22, VAR_15->sc_ifp->if_fib);


   FUNC_9(VAR_11, VAR_22);
   FUNC_11(VAR_16);
  }
  return;
 }
 while ((FUNC_12(VAR_16) & VAR_7)) {
  VAR_17 = VAR_15->sc_ifp->if_mtu + VAR_6;
  VAR_19 = VAR_15->sc_ifbuf;
  while (VAR_17--) {

   VAR_21 = FUNC_12(VAR_16);
   FUNC_15(VAR_16, 8);

   VAR_18 = VAR_9;
   while ((FUNC_12(VAR_16) & VAR_7))
    if (!--VAR_18)
     goto err;

   VAR_20 = FUNC_12(VAR_16);
   FUNC_15(VAR_16, 0);

   *VAR_19++= VAR_12[VAR_21] | VAR_13[VAR_20];

   VAR_18 = VAR_9;
   while (!((VAR_21 = FUNC_12(VAR_16)) & VAR_7)) {
    if (VAR_21 != VAR_20 &&
        (((VAR_21 = FUNC_12(VAR_16)) ^ 0xb8) & 0xf8) ==
        (VAR_20 & 0xf8))
     goto end;
    if (!--VAR_18)
     goto err;
   }
  }

 end:
  VAR_17 = VAR_19 - VAR_15->sc_ifbuf;
  if (VAR_17 <= VAR_6)
   goto err;

  VAR_15->sc_iferrs = 0;

  VAR_17 -= VAR_6;
  FUNC_4(VAR_15->sc_ifp, VAR_3, 1);
  FUNC_4(VAR_15->sc_ifp, VAR_1, VAR_17);
  VAR_22 = FUNC_8(VAR_15->sc_ifbuf + VAR_6, VAR_17, 0, VAR_15->sc_ifp,
      0);
  if (VAR_22) {
   FUNC_13(VAR_16);
   if (FUNC_1(VAR_15->sc_ifp->if_bpf))
    FUNC_7(VAR_15->sc_ifp, VAR_22);

   FUNC_0(VAR_22, VAR_15->sc_ifp->if_fib);


   FUNC_9(VAR_11, VAR_22);
   FUNC_11(VAR_16);
  }
 }
 return;

err:
 FUNC_15(VAR_16, 0);
 FUNC_6("R");
 FUNC_4(VAR_15->sc_ifp, VAR_2, 1);
 VAR_15->sc_iferrs++;





 if (VAR_15->sc_iferrs > VAR_8) {
  FUNC_5(VAR_15->sc_ifp, "Too many errors, Going off-line.\n");
  FUNC_14(VAR_16, 0x00);
  VAR_15->sc_ifp->if_drv_flags &= ~VAR_4;
  VAR_15->sc_iferrs = 0;
 }
}
