
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int LPBYTE ;
typedef int HKEY ;
typedef scalar_t__ BOOL ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (scalar_t__,int ) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,int ,int ,int ,int *) ;
 scalar_t__ FUNC_3 (int ,char*,int *,int *,int ,int *) ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_4 (scalar_t__,int ,int ) ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 int FUNC_5 (scalar_t__,char*) ;
 int FUNC_6 (scalar_t__,scalar_t__) ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;

void
FUNC_7() {
 HKEY VAR_21;
 BOOL VAR_22 = VAR_7;

 FUNC_4(VAR_13, 0, VAR_6);
 if (FUNC_2(VAR_3, VAR_0, 0, VAR_5, &VAR_21)
  != VAR_1)
  VAR_22 = VAR_2;

 if (VAR_22 == VAR_7) {

  if (FUNC_3(VAR_21, "InstallDir", ((void*)0), ((void*)0),
   (LPBYTE)VAR_13, &VAR_8) != VAR_1)
   VAR_22 = VAR_2;
  FUNC_1(VAR_21);
 }

 FUNC_0(VAR_20, VAR_6);

 if (VAR_22 == VAR_2)

  FUNC_6(VAR_13, VAR_20);

 FUNC_6(VAR_14, VAR_13);
 FUNC_5(VAR_14, "\\etc\\named.conf");

 FUNC_6(VAR_10, VAR_13);
 FUNC_5(VAR_10, "\\etc\\lwresd.conf");

 FUNC_6(VAR_12, VAR_20);
 FUNC_5(VAR_12, "\\Drivers\\etc\\resolv.conf");

 FUNC_6(VAR_17, VAR_13);
 FUNC_5(VAR_17, "\\etc\\rndc.key");

 FUNC_6(VAR_18, VAR_13);
 FUNC_5(VAR_18, "\\etc\\session.key");

 FUNC_6(VAR_16, VAR_13);
 FUNC_5(VAR_16, "\\etc\\rndc.conf");
 FUNC_6(VAR_15, VAR_13);
 FUNC_5(VAR_15, "\\etc\\named.pid");

 FUNC_6(VAR_11, VAR_13);
 FUNC_5(VAR_11, "\\etc\\lwresd.pid");

 FUNC_6(VAR_9, VAR_13);
 FUNC_5(VAR_9, "\\bin");

 FUNC_6(VAR_19, VAR_13);
 FUNC_5(VAR_19, "\\etc");

 VAR_4 = VAR_7;
}
