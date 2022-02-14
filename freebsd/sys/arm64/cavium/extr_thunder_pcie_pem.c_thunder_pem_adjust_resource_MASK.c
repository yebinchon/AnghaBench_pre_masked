
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thunder_pem_softc {int id; } ;
struct rman {int dummy; } ;
struct resource {int dummy; } ;
typedef int rman_res_t ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int,struct resource*,int ,int ) ;
 struct thunder_pem_softc* FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,struct resource*,int ,int ) ;
 int FUNC_3 (struct resource*,int ,int ) ;
 int FUNC_4 (struct resource*,struct rman*) ;
 struct rman* FUNC_5 (struct thunder_pem_softc*,int) ;

__attribute__((used)) static int
FUNC_6(device_t VAR_2, device_t VAR_3, int VAR_4,
    struct resource *VAR_5, rman_res_t VAR_6, rman_res_t VAR_7)
{
 struct thunder_pem_softc *VAR_8;
 struct rman *VAR_9;

 VAR_8 = FUNC_1(VAR_2);





 VAR_9 = FUNC_5(VAR_8, VAR_4);
 if (VAR_9 == ((void*)0))
  return (FUNC_0(VAR_2, VAR_3, VAR_4, VAR_5,
      VAR_6, VAR_7));
 if (!FUNC_4(VAR_5, VAR_9))




  return (VAR_0);
 return (FUNC_3(VAR_5, VAR_6, VAR_7));
}
