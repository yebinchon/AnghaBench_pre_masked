
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct addrinfo {int ai_flags; int ai_socktype; } ;
typedef int hints ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct addrinfo*) ;
 scalar_t__ FUNC_2 (char const*,int *,struct addrinfo*,struct addrinfo**) ;
 int FUNC_3 (struct addrinfo*,int ,int) ;

__attribute__((used)) static int
FUNC_4(const char *VAR_2)
{
 struct addrinfo VAR_3, *VAR_4;





 if (VAR_2 == ((void*)0)) {
  FUNC_0("is_numeric_hostname called with NULL hostname");
  return -1;
 }

 FUNC_3(&VAR_3, 0, sizeof(VAR_3));
 VAR_3.ai_socktype = VAR_1;
 VAR_3.ai_flags = VAR_0;

 if (FUNC_2(VAR_2, ((void*)0), &VAR_3, &VAR_4) == 0) {
  FUNC_1(VAR_4);
  return -1;
 }

 return 0;
}
