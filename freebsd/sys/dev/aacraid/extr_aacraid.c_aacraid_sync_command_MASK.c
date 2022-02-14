
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int32_t ;
typedef scalar_t__ time_t ;
struct aac_softc {int msi_enabled; } ;


 int FUNC_0 (struct aac_softc*,int) ;
 int VAR_0 ;
 int FUNC_1 (struct aac_softc*) ;
 scalar_t__ FUNC_2 (struct aac_softc*,int) ;
 scalar_t__ VAR_1 ;
 int FUNC_3 (struct aac_softc*,int) ;
 int FUNC_4 (struct aac_softc*,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 char* VAR_5 ;
 char* VAR_6 ;
 int FUNC_5 (struct aac_softc*,char*,char*) ;
 scalar_t__ VAR_7 ;

int
FUNC_6(struct aac_softc *VAR_8, u_int32_t VAR_9,
   u_int32_t VAR_10, u_int32_t VAR_11, u_int32_t VAR_12, u_int32_t VAR_13,
   u_int32_t *VAR_14, u_int32_t *VAR_15)
{
 time_t VAR_16;
 u_int32_t VAR_17;

 FUNC_5(VAR_8, VAR_6, "");


 FUNC_4(VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, VAR_13);


 if (!VAR_8->msi_enabled)
  FUNC_0(VAR_8, VAR_0);


 FUNC_3(VAR_8, VAR_0);

 if ((VAR_9 != VAR_1) || (VAR_14 == ((void*)0)) || (*VAR_14 != 0)) {

  VAR_16 = VAR_7;
  do {
   if (VAR_7 > (VAR_16 + VAR_3)) {
    FUNC_5(VAR_8, VAR_5, "timed out");
    return(VAR_4);
   }
  } while (!(FUNC_1(VAR_8) & VAR_0));


  FUNC_0(VAR_8, VAR_0);


  VAR_17 = FUNC_2(VAR_8, 0);
  if (VAR_14 != ((void*)0))
   *VAR_14 = VAR_17;


  if (VAR_15 != ((void*)0))
   *VAR_15 = FUNC_2(VAR_8, 1);

  if (VAR_17 != VAR_2)
   return (-1);
 }
 return(0);
}
