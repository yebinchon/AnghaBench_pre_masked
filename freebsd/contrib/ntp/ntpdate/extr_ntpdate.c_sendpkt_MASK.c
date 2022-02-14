
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr {int dummy; } ;
struct pkt {int dummy; } ;
typedef int sockaddr_u ;
typedef scalar_t__ SOCKET ;
typedef scalar_t__ DWORD ;


 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int *) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_2 () ;
 scalar_t__ VAR_8 ;
 int FUNC_3 (int) ;
 scalar_t__* VAR_9 ;
 scalar_t__* VAR_10 ;
 int FUNC_4 (int ,char*,...) ;
 int FUNC_5 (scalar_t__,char*,int,int ,struct sockaddr*,int ) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void
FUNC_7(
 sockaddr_u *VAR_11,
 struct pkt *VAR_12,
 int VAR_13
 )
{
 int VAR_14;
 int VAR_15;
 SOCKET VAR_16 = VAR_2;






 for(VAR_14 = 0; (VAR_14 < VAR_4); VAR_14++) {
  if(FUNC_0(VAR_11) == VAR_10[VAR_14]) {
   VAR_16 = VAR_9[VAR_14];
  break;
  }
 }

 if (VAR_2 == VAR_16) {
  FUNC_4(VAR_3, "cannot find family compatible socket to send ntp packet");
  FUNC_3(1);

 }

 VAR_15 = FUNC_5(VAR_16, (char *)VAR_12, VAR_13, 0, (struct sockaddr *)VAR_11,
   FUNC_1(VAR_11));

 if (VAR_5 == VAR_15) {

  if (VAR_8 != VAR_1 && VAR_8 != VAR_0)




   FUNC_4(VAR_3, "sendto(%s): %m", FUNC_6(VAR_11));
 }
}
