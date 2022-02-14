
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_in {int sin_len; int sin_port; int sin_addr; int sin_family; } ;
struct sockaddr {int dummy; } ;
struct hostent {int h_addr; } ;
typedef int router ;


 int VAR_0 ;
 int VAR_1 ;
 struct hostent* FUNC_0 (char const*) ;
 scalar_t__ FUNC_1 (int *,int ) ;
 int FUNC_2 (char const*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char const*,int *) ;
 int FUNC_5 (int *,int ,int) ;
 int FUNC_6 (struct sockaddr_in*,int ,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_7 (char const*) ;
 scalar_t__ FUNC_8 (int ,int *,int ,int ,struct sockaddr*,int) ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static int
FUNC_9(const char *VAR_6)
{
 struct sockaddr_in VAR_7;
 struct hostent *VAR_8;

 if (FUNC_1(&VAR_4, 0) < 0) {
  FUNC_7("gettimeofday(sent)");
  return -1;
 }

 FUNC_6(&VAR_7, 0, sizeof(VAR_7));
 VAR_7.sin_family = VAR_0;



 if (!FUNC_4(VAR_6, &VAR_7.sin_addr)) {
  VAR_8 = FUNC_0(VAR_6);
  if (VAR_8 == ((void*)0)) {
   FUNC_2(VAR_6);
   return -1;
  }
  FUNC_5(&VAR_7.sin_addr, VAR_8->h_addr, sizeof(VAR_7.sin_addr));
 }
 VAR_7.sin_port = FUNC_3(VAR_1);

 if (FUNC_8(VAR_5, &VAR_2, VAR_3, 0,
     (struct sockaddr *)&VAR_7, sizeof(VAR_7)) < 0) {
  FUNC_7(VAR_6);
  return -1;
 }

 return 0;
}
