
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_un {int sun_path; int sun_family; } ;


 int VAR_0 ;
 char* VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int,struct sockaddr_un*,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,char*) ;
 scalar_t__ FUNC_5 (int,char*,int) ;
 int FUNC_6 (int ,int ,int ) ;
 int FUNC_7 (int ,char*) ;
 int FUNC_8 (char*) ;

FUNC_9()
{
 int VAR_3, VAR_4;
 struct sockaddr_un VAR_5;
 char VAR_6[1024];


 VAR_3 = FUNC_6(VAR_0, VAR_2, 0);
 if (VAR_3 < 0) {
  FUNC_3("opening datagram socket");
  FUNC_2(1);
 }

 VAR_5.sun_family = VAR_0;
 FUNC_7(VAR_5.sun_path, VAR_1);
 if (FUNC_0(VAR_3, &VAR_5, sizeof(struct sockaddr_un))) {
  FUNC_3("binding name to datagram socket");
  FUNC_2(1);
 }
 FUNC_4("socket -->%s\en", VAR_1);

 if (FUNC_5(VAR_3, VAR_6, 1024) < 0)
  FUNC_3("receiving datagram packet");
 FUNC_4("-->%s\en", VAR_6);
 FUNC_1(VAR_3);
 FUNC_8(VAR_1);
}
