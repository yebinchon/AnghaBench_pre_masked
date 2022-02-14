
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int s_addr; } ;
struct sockaddr_in {int sin_len; TYPE_1__ sin_addr; int sin_port; int sin_family; } ;
struct sockaddr {int dummy; } ;
struct sigaction {int sa_mask; scalar_t__ sa_flags; int sa_handler; } ;
typedef int ssize_t ;
typedef int socklen_t ;
typedef int sin ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (char*,...) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,struct sockaddr const*,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int,struct sockaddr*,int) ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 int FUNC_5 (int,int ,int) ;
 int FUNC_6 (int,struct sockaddr*,int*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int,int ) ;
 int FUNC_10 (struct sockaddr_in*,int ,int) ;
 int FUNC_11 (int,int *,int *,int *,int) ;
 int FUNC_12 (int,char*,int) ;
 int FUNC_13 (int ,struct sigaction*,int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int ,int,int ) ;

__attribute__((used)) static void
FUNC_16(bool VAR_16, bool VAR_17)
{
 int VAR_18 = -1, VAR_19 = -1, VAR_20 = -1;
 int VAR_21, VAR_22;
 ssize_t VAR_23;
 char VAR_24[10];
 struct sockaddr_in VAR_25, VAR_26;
 struct sigaction VAR_27;

 VAR_18 = FUNC_15(VAR_0, VAR_12 | VAR_11, 0);
 if (VAR_18 == -1)
  FUNC_0("socket");

 FUNC_10(&VAR_25, 0, sizeof(VAR_25));
 VAR_25.sin_family = VAR_0;



 VAR_25.sin_port = FUNC_8(0);
 VAR_25.sin_addr.s_addr = FUNC_7(VAR_7);
 VAR_21 = FUNC_2(VAR_18, (const struct sockaddr *)&VAR_25, (socklen_t)sizeof(VAR_25));
 if (VAR_21 == -1)
  FUNC_0("bind");

 socklen_t VAR_28 = sizeof(struct sockaddr_in);
 VAR_21 = FUNC_6(VAR_18, (struct sockaddr *)&VAR_26, &VAR_28);
 if (VAR_21 == -1)
  FUNC_0("getsockname");

 VAR_21 = FUNC_9(VAR_18, VAR_13);
 if (VAR_21 == -1)
  FUNC_0("listen");

 VAR_19 = FUNC_15(VAR_0, VAR_12 | VAR_11, 0);
 if (VAR_19 == -1)
  FUNC_0("socket");


 VAR_21 = FUNC_4(VAR_19, (struct sockaddr *) &VAR_26, VAR_28);
 if (VAR_21 != -1 || VAR_15 != VAR_1)
  FUNC_0("expected connect to fail");
 VAR_20 = FUNC_11(VAR_18, ((void*)0), ((void*)0), ((void*)0), VAR_16 ? 0 : VAR_11);
 VAR_21 = FUNC_4(VAR_19, (struct sockaddr *) &VAR_26, VAR_28);
 if (VAR_21 == -1 && VAR_15 != VAR_3)
  FUNC_0("connect failed");
 if (VAR_20 == -1) {
  VAR_20 = FUNC_11(VAR_18, ((void*)0), ((void*)0), ((void*)0), VAR_16 ? 0 : VAR_11);
  if (VAR_20 == -1)
   FUNC_0("paccept");
 }
 if (VAR_17) {
  VAR_22 = FUNC_5(VAR_20, VAR_5, 0);
  if (VAR_22 == -1)
   FUNC_0("fnctl");
  if (VAR_22 != (VAR_9|VAR_8))
   FUNC_0("fl 0x%x != 0x%x\n", VAR_22, VAR_9|VAR_8);
  VAR_21 = FUNC_5(VAR_20, VAR_6, VAR_22 & ~VAR_8);
  if (VAR_21 == -1)
   FUNC_0("fnctl setfl");

  VAR_22 = FUNC_5(VAR_20, VAR_5, 0);
  if (VAR_22 & VAR_8)
   FUNC_0("fl non blocking after reset");
 }
 VAR_27.sa_handler = VAR_14;
 VAR_27.sa_flags = 0;
 FUNC_14(&VAR_27.sa_mask);
 FUNC_13(VAR_10, &VAR_27, ((void*)0));
 FUNC_1(1);
 VAR_23 = FUNC_12(VAR_20, VAR_24, 10);

 if (VAR_16 || VAR_17) {
  if (VAR_23 == -1 && VAR_15 != VAR_2)
   FUNC_0("read");
 } else {
  if (VAR_23 != -1 || VAR_15 != VAR_4)
   FUNC_0("read");
 }
 return;
fail:
 FUNC_3(VAR_18);
 FUNC_3(VAR_19);
 FUNC_3(VAR_20);
}
