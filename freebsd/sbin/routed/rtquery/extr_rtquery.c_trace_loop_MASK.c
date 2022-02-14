
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sockaddr_in {int sin_len; scalar_t__ sin_port; int sin_family; } ;
struct sockaddr {int dummy; } ;
typedef int myaddr ;
struct TYPE_2__ {int rip_vers; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_1__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int ,struct sockaddr*,int) ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,char*) ;
 scalar_t__ FUNC_3 () ;
 void* FUNC_4 (scalar_t__) ;
 int FUNC_5 (struct sockaddr_in*,int ,int) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (char*) ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;

__attribute__((used)) static void
FUNC_9(char *VAR_10[])
{
 struct sockaddr_in VAR_11;
 int VAR_12;

 if (FUNC_3() != 0) {
  (void)FUNC_2(VAR_9, "-t requires UID 0\n");
  FUNC_1(1);
 }

 if (VAR_7) {
  VAR_3.rip_vers = VAR_5;
 } else {
  VAR_3.rip_vers = VAR_4;
 }

 FUNC_5(&VAR_11, 0, sizeof(VAR_11));
 VAR_11.sin_family = VAR_0;



 VAR_11.sin_port = FUNC_4(VAR_2-1);
 while (FUNC_0(VAR_8, (struct sockaddr *)&VAR_11, sizeof(VAR_11)) < 0) {
  if (VAR_6 != VAR_1
      || VAR_11.sin_port == 0) {
   FUNC_8("bind");
   FUNC_1(2);
  }
  VAR_11.sin_port = FUNC_4(FUNC_6(VAR_11.sin_port)-1);
 }

 VAR_12 = 1;
 while (*VAR_10 != ((void*)0)) {
  if (FUNC_7(*VAR_10++) <= 0)
   VAR_12 = 0;
 }
 FUNC_1(VAR_12);
}
