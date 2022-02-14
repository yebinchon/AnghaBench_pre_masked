
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int32_t ;
typedef scalar_t__ time_t ;
struct aac_softc {int dummy; } ;


 int FUNC_0 (struct aac_softc*,int) ;
 int VAR_0 ;
 int FUNC_1 (struct aac_softc*) ;
 scalar_t__ FUNC_2 (struct aac_softc*,int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_3 (struct aac_softc*,int) ;
 int FUNC_4 (struct aac_softc*,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 char* VAR_4 ;
 char* VAR_5 ;
 int FUNC_5 (struct aac_softc*,char*,char*) ;
 scalar_t__ VAR_6 ;

__attribute__((used)) static int
FUNC_6(struct aac_softc *VAR_7, u_int32_t VAR_8,
   u_int32_t VAR_9, u_int32_t VAR_10, u_int32_t VAR_11, u_int32_t VAR_12,
   u_int32_t *VAR_13)
{
 time_t VAR_14;
 u_int32_t VAR_15;

 FUNC_5(VAR_7, VAR_5, "");


 FUNC_4(VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12);


 FUNC_0(VAR_7, VAR_0);


 FUNC_3(VAR_7, VAR_0);


 VAR_14 = VAR_6;
 do {
  if (VAR_6 > (VAR_14 + VAR_1)) {
   FUNC_5(VAR_7, VAR_4, "timed out");
   return(VAR_3);
  }
 } while (!(FUNC_1(VAR_7) & VAR_0));


 FUNC_0(VAR_7, VAR_0);


 VAR_15 = FUNC_2(VAR_7, 0);
 if (VAR_13 != ((void*)0))
  *VAR_13 = VAR_15;

 if (VAR_15 != VAR_2)
  return (-1);
 return(0);
}
