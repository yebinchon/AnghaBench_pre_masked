
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct chipc_softc {scalar_t__ dev; } ;
typedef scalar_t__ rman_res_t ;
typedef int device_t ;
typedef scalar_t__ bhnd_size_t ;
typedef scalar_t__ bhnd_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (scalar_t__,scalar_t__) ;
 int VAR_2 ;
 int FUNC_2 (scalar_t__,int ,int ,int ,scalar_t__*,scalar_t__*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,int,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (scalar_t__,char*,int ,int ,int ,scalar_t__,...) ;

int
FUNC_7(struct chipc_softc *VAR_3, device_t VAR_4, int VAR_5,
    rman_res_t VAR_6, rman_res_t VAR_7, u_int VAR_8, u_int VAR_9)
{
 bhnd_addr_t VAR_10;
 bhnd_size_t VAR_11;
 bool VAR_12;
 int VAR_13;

 FUNC_0(FUNC_5(VAR_4) == VAR_3->dev, ("not a direct child"));
 VAR_12 = FUNC_1(VAR_6, VAR_7);


 VAR_13 = FUNC_2(VAR_3->dev, VAR_0, VAR_8,
     VAR_9, &VAR_10, &VAR_11);
 if (VAR_13) {
  FUNC_6(VAR_3->dev,
      "lookup of %s%u.%u failed: %d\n",
      FUNC_3(VAR_0), VAR_8, VAR_9, VAR_13);
  return (VAR_13);
 }


 if (VAR_12) {
  VAR_6 = 0;
  VAR_7 = VAR_11;
 }


 if (VAR_6 > VAR_11 || VAR_11 - VAR_6 < VAR_7) {
  FUNC_6(VAR_3->dev,
      "%s%u.%u region cannot map requested range %#jx+%#jx\n",
      FUNC_3(VAR_0), VAR_8, VAR_9, VAR_6,
      VAR_7);
  return (VAR_1);
 }

 return (FUNC_4(VAR_4, VAR_2, VAR_5,
     VAR_10 + VAR_6, VAR_7));
}
