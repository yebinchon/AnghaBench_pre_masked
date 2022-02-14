
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ubus ;
struct u_businfo {scalar_t__ ub_version; int ub_generation; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (char*,...) ;
 int VAR_2 ;
 int FUNC_2 () ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_5 (char*,struct u_businfo*,size_t*,int *,int ) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (char*,scalar_t__,scalar_t__) ;

int
FUNC_8(void)
{
 struct u_businfo VAR_8;
 size_t VAR_9;
 int VAR_10, VAR_11;

 if (!VAR_4) {
  FUNC_0(&VAR_2);
  FUNC_0(&VAR_6);
  FUNC_0(&VAR_5);
 }





 for (VAR_11 = 0; VAR_11 < 10; VAR_11++) {
  FUNC_1("get interface version");
  VAR_9 = sizeof(VAR_8);
  if (FUNC_5("hw.bus.info", &VAR_8,
      &VAR_9, ((void*)0), 0) != 0) {
   FUNC_6("sysctlbyname(\"hw.bus.info\", ...) failed");
   return(VAR_1);
  }
  if ((VAR_9 != sizeof(VAR_8)) ||
      (VAR_8.ub_version != VAR_0)) {
   FUNC_7("kernel bus interface version mismatch: kernel %d expected %d",
       VAR_8.ub_version, VAR_0);
   return(VAR_1);
  }
  FUNC_1("generation count is %d", VAR_8.ub_generation);




  if (VAR_8.ub_generation == VAR_3)
   return(0);




  FUNC_2();
  VAR_4 = 0;
  VAR_3 = 0;

  if ((VAR_10 = FUNC_3(VAR_8.ub_generation)) != 0) {
   FUNC_2();
   if (VAR_10 == VAR_1)
    continue;
   break;
  }
  if ((VAR_10 = FUNC_4(VAR_8.ub_generation)) != 0) {
   FUNC_2();
   if (VAR_10 == VAR_1)
    continue;
   break;
  }
  VAR_4 = 1;
  VAR_3 = VAR_8.ub_generation;
  return(0);
 }
 FUNC_1("scan failed after %d retries", VAR_11);
 VAR_7 = VAR_10;
 return(1);
}
