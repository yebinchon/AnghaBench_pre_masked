
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (int ,int ,int *,int ) ;
 void* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 int VAR_5 ;
 int * VAR_6 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 void* FUNC_5 (int *,char*,int ) ;
 int VAR_15 ;
 int * VAR_16 ;
 int VAR_17 ;
 int FUNC_6 (int ,char*) ;
 void* VAR_18 ;
 void* VAR_19 ;
 int FUNC_7 () ;

__attribute__((used)) static void
FUNC_8(void)
{
 if ((VAR_16 = FUNC_0(VAR_15, VAR_17, ((void*)0), VAR_9)) == ((void*)0)) {
  FUNC_6(VAR_0, "fd_select(route): %m");
  return;
 }
 FUNC_3();
 FUNC_7();
 FUNC_1();
 (void)FUNC_2();
 VAR_8 = 0;
 VAR_7 = 0;

 VAR_2 = FUNC_5(&VAR_10,
     "The MIB module to describe generic objects for network interface"
     " sub-layers.", VAR_9);

 VAR_4 = FUNC_5(&VAR_12,
    "The MIB module for managing IP and ICMP implementations, but "
    "excluding their management of IP routes.", VAR_9);

 VAR_18 = FUNC_5(&VAR_13,
    "The MIB module for managing TCP implementations.", VAR_9);

 VAR_19 = FUNC_5(&VAR_14,
    "The MIB module for managing UDP implementations.", VAR_9);

 VAR_3 = FUNC_5(&VAR_11,
    "The MIB module for the display of CIDR multipath IP Routes.",
    VAR_9);

 VAR_6 = ((void*)0);
 VAR_5 = VAR_1;
 FUNC_4();
}
