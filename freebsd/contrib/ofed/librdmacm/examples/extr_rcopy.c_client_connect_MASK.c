
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct addrinfo {int ai_addrlen; int ai_addr; int ai_protocol; int ai_socktype; int ai_family; } ;


 int VAR_0 ;
 int FUNC_0 (struct addrinfo*) ;
 char* FUNC_1 (int) ;
 int FUNC_2 (int ,int ,int *,struct addrinfo**) ;
 int FUNC_3 (char*) ;
 int VAR_1 ;
 int FUNC_4 (char*,char*) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int,int ,int ) ;
 int FUNC_7 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_8(void)
{
 struct addrinfo *VAR_2;
 int VAR_3, VAR_4;

  VAR_3 = FUNC_2(VAR_0, VAR_1, ((void*)0), &VAR_2);
 if (VAR_3) {
  FUNC_4("getaddrinfo failed: %s\n", FUNC_1(VAR_3));
  return VAR_3;
 }

 VAR_4 = FUNC_7(VAR_2->ai_family, VAR_2->ai_socktype, VAR_2->ai_protocol);
 if (VAR_4 < 0) {
  FUNC_3("rsocket failed\n");
  goto free;
 }

 VAR_3 = FUNC_6(VAR_4, VAR_2->ai_addr, VAR_2->ai_addrlen);
 if (VAR_3) {
  FUNC_3("rconnect failed\n");
  FUNC_5(VAR_4);
  VAR_4 = VAR_3;
 }

free:
 FUNC_0(VAR_2);
 return VAR_4;
}
