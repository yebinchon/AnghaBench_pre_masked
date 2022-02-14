
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_un {int sun_path; int sun_family; } ;
struct sockaddr {int dummy; } ;
typedef int devd_addr ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,int) ;
 int VAR_0 ;
 int FUNC_2 (struct sockaddr_un*) ;
 int FUNC_3 (int,struct sockaddr*,int ) ;
 int FUNC_4 () ;
 int FUNC_5 (struct sockaddr_un*,int ,int) ;
 int FUNC_6 (int ,int,int ) ;
 int FUNC_7 (int ,char const*,int) ;

__attribute__((used)) static int
FUNC_8(int VAR_1, const char* VAR_2) {
 struct sockaddr_un VAR_3;
 int VAR_4, VAR_5;

 FUNC_5(&VAR_3, 0, sizeof(VAR_3));
 VAR_3.sun_family = VAR_0;
 FUNC_7(VAR_3.sun_path, VAR_2, sizeof(VAR_3.sun_path));
 VAR_4 = FUNC_6(VAR_0, VAR_1, 0);
 FUNC_0(VAR_4 >= 0);
 VAR_5 = FUNC_3(VAR_4, (struct sockaddr*)&VAR_3, FUNC_2(&VAR_3));
 FUNC_1(0, VAR_5);

 FUNC_4();
 return (VAR_4);
}
