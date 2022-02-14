
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int ;
struct bhndb_softc {int dummy; } ;
typedef scalar_t__ rman_res_t ;
typedef int device_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,scalar_t__,scalar_t__*) ;
 struct bhndb_softc* FUNC_2 (int ) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_1, device_t VAR_2, u_int VAR_3, rman_res_t *VAR_4)
{
 struct bhndb_softc *VAR_5;
 u_int VAR_6;
 int VAR_7;

 VAR_5 = FUNC_2(VAR_1);


 if (VAR_3 >= FUNC_0(VAR_2))
  return (VAR_0);


 if ((VAR_7 = FUNC_1(VAR_2, VAR_3, &VAR_6)))
  return (VAR_7);


 *VAR_4 = VAR_6;

 return (0);
}
