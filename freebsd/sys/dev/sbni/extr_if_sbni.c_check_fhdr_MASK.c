
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
typedef int u_int ;
typedef scalar_t__ u_char ;
struct sbni_softc {int dummy; } ;


 int FUNC_0 (scalar_t__,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_1 (struct sbni_softc*,int ) ;

__attribute__((used)) static int
FUNC_2(struct sbni_softc *VAR_6, u_int *VAR_7, u_int *VAR_8,
    u_int *VAR_9, u_int *VAR_10, u_int32_t *VAR_11)
{
 u_int32_t VAR_12;
 u_char VAR_13;

 VAR_12 = *VAR_11;
 if (FUNC_1(VAR_6, VAR_0) != VAR_5)
  return (0);

 VAR_13 = FUNC_1(VAR_6, VAR_0);
 *VAR_7 = (u_int)VAR_13;
 VAR_12 = FUNC_0(VAR_13, VAR_12);
 VAR_13 = FUNC_1(VAR_6, VAR_0);
 *VAR_7 |= ((u_int)VAR_13) << 8;
 VAR_12 = FUNC_0(VAR_13, VAR_12);

 *VAR_9 = *VAR_7 & VAR_1;
 *VAR_10 = (*VAR_7 & VAR_2) != 0;

 if ((*VAR_7 &= VAR_3) < 6 || *VAR_7 > VAR_4 - 3)
  return (0);

 VAR_13 = FUNC_1(VAR_6, VAR_0);
 *VAR_8 = (u_int)VAR_13;
 VAR_12 = FUNC_0(VAR_13, VAR_12);

 VAR_12 = FUNC_0(FUNC_1(VAR_6, VAR_0), VAR_12);
 *VAR_7 -= 2;

 *VAR_11 = VAR_12;
 return (1);
}
