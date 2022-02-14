
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct rman {int dummy; } ;
struct resource {int dummy; } ;
struct mv_pcib_softc {int sc_mem_base; int sc_mem_size; int ap_segment; struct rman sc_mem_rman; struct rman sc_io_rman; } ;
typedef int rman_res_t ;
typedef int device_t ;


 struct resource* FUNC_0 (int ,int ,int,int*,int,int,int,int) ;

 int VAR_0 ;
 scalar_t__ FUNC_1 (int,int) ;


 scalar_t__ FUNC_2 (int ,int,int,struct resource*) ;
 int FUNC_3 (int ) ;
 struct mv_pcib_softc* FUNC_4 (int ) ;
 int VAR_1 ;
 struct resource* FUNC_5 (int ,int ,int*,int,int,int,int) ;
 int FUNC_6 (struct resource*) ;
 struct resource* FUNC_7 (struct rman*,int,int,int,int,int ) ;
 int FUNC_8 (struct resource*,int) ;
 int FUNC_9 (struct resource*,int ) ;
 int FUNC_10 (struct resource*,int) ;

__attribute__((used)) static struct resource *
FUNC_11(device_t VAR_2, device_t VAR_3, int VAR_4, int *VAR_5,
    rman_res_t VAR_6, rman_res_t VAR_7, rman_res_t VAR_8, u_int VAR_9)
{
 struct mv_pcib_softc *VAR_10 = FUNC_4(VAR_2);
 struct rman *VAR_11 = ((void*)0);
 struct resource *VAR_12;

 switch (VAR_4) {
 case 129:
  VAR_11 = &VAR_10->sc_io_rman;
  break;
 case 128:
  VAR_11 = &VAR_10->sc_mem_rman;
  break;

 case 130:
  return (FUNC_5(VAR_10->ap_segment, VAR_3, VAR_5, VAR_6,
      VAR_7, VAR_8, VAR_9));

 default:
  return (FUNC_0(FUNC_3(VAR_2), VAR_2,
      VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9));
 }

 if (FUNC_1(VAR_6, VAR_7)) {
  VAR_6 = VAR_10->sc_mem_base;
  VAR_7 = VAR_10->sc_mem_base + VAR_10->sc_mem_size - 1;
  VAR_8 = VAR_10->sc_mem_size;
 }

 if ((VAR_6 < VAR_10->sc_mem_base) || (VAR_6 + VAR_8 - 1 != VAR_7) ||
     (VAR_7 > VAR_10->sc_mem_base + VAR_10->sc_mem_size - 1))
  return (((void*)0));

 VAR_12 = FUNC_7(VAR_11, VAR_6, VAR_7, VAR_8, VAR_9, VAR_3);
 if (VAR_12 == ((void*)0))
  return (((void*)0));

 FUNC_10(VAR_12, *VAR_5);
 FUNC_9(VAR_12, VAR_1);
 FUNC_8(VAR_12, VAR_6);

 if (VAR_9 & VAR_0)
  if (FUNC_2(VAR_3, VAR_4, *VAR_5, VAR_12)) {
   FUNC_6(VAR_12);
   return (((void*)0));
  }

 return (VAR_12);
}
