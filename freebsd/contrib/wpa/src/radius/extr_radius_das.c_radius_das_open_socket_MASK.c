
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_in {int sin_port; int sin_family; } ;
struct sockaddr {int dummy; } ;
typedef int addr ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int,struct sockaddr*,int) ;
 int FUNC_1 (int) ;
 int VAR_4 ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct sockaddr_in*,int ,int) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,char*,int ) ;

__attribute__((used)) static int FUNC_7(int VAR_5)
{
 int VAR_6;
 struct sockaddr_in VAR_7;

 VAR_6 = FUNC_4(VAR_2, VAR_3, 0);
 if (VAR_6 < 0) {
  FUNC_6(VAR_1, "RADIUS DAS: socket: %s", FUNC_5(VAR_4));
  return -1;
 }

 FUNC_3(&VAR_7, 0, sizeof(VAR_7));
 VAR_7.sin_family = VAR_0;
 VAR_7.sin_port = FUNC_2(VAR_5);
 if (FUNC_0(VAR_6, (struct sockaddr *) &VAR_7, sizeof(VAR_7)) < 0) {
  FUNC_6(VAR_1, "RADIUS DAS: bind: %s", FUNC_5(VAR_4));
  FUNC_1(VAR_6);
  return -1;
 }

 return VAR_6;
}
