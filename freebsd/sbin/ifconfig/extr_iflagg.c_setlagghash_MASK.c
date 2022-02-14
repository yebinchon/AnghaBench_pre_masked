
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lagg_reqflags {int rf_ifname; int rf_flags; } ;
struct afswtch {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (int,char*,...) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (int,int ,struct lagg_reqflags*) ;
 int VAR_4 ;
 scalar_t__ FUNC_4 (char*,char*) ;
 char* FUNC_5 (char const*) ;
 int FUNC_6 (int ,int ,int) ;
 char* FUNC_7 (char**,char*) ;

__attribute__((used)) static void
FUNC_8(const char *VAR_5, int VAR_6, int VAR_7, const struct afswtch *VAR_8)
{
 struct lagg_reqflags VAR_9;
 char *VAR_10, *VAR_11, *VAR_12;


 VAR_9.rf_flags = 0;
 VAR_10 = VAR_11 = FUNC_5(VAR_5);
 while ((VAR_12 = FUNC_7(&VAR_11, ",")) != ((void*)0)) {
  if (FUNC_4(VAR_12, "l2") == 0)
   VAR_9.rf_flags |= VAR_0;
  else if (FUNC_4(VAR_12, "l3") == 0)
   VAR_9.rf_flags |= VAR_1;
  else if (FUNC_4(VAR_12, "l4") == 0)
   VAR_9.rf_flags |= VAR_2;
  else
   FUNC_1(1, "Invalid lagghash option: %s", VAR_12);
 }
 FUNC_2(VAR_10);
 if (VAR_9.rf_flags == 0)
  FUNC_1(1, "No lagghash options supplied");

 FUNC_6(VAR_9.rf_ifname, VAR_4, sizeof(VAR_9.rf_ifname));
 if (FUNC_3(VAR_7, VAR_3, &VAR_9))
  FUNC_0(1, "SIOCSLAGGHASH");
}
