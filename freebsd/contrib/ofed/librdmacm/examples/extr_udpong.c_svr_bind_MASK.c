
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct addrinfo {int ai_addrlen; int ai_addr; int ai_protocol; int ai_socktype; int ai_family; } ;


 int VAR_0 ;
 int FUNC_0 (struct addrinfo*) ;
 char* FUNC_1 (int) ;
 int FUNC_2 (int ,int ,struct addrinfo*,struct addrinfo**) ;
 int FUNC_3 (struct addrinfo*,int ,int) ;
 int FUNC_4 (char*) ;
 int VAR_1 ;
 int FUNC_5 (char*,char*) ;
 int VAR_2 ;
 int FUNC_6 (int,int ,int ) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int ,int ,int ) ;
 int FUNC_9 (int) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_10(void)
{
 struct addrinfo VAR_4, *VAR_5;
 int VAR_6;

 FUNC_3(&VAR_4, 0, sizeof VAR_4);
 VAR_4.ai_socktype = VAR_0;
  VAR_6 = FUNC_2(VAR_3, VAR_1, &VAR_4, &VAR_5);
 if (VAR_6) {
  FUNC_5("getaddrinfo: %s\n", FUNC_1(VAR_6));
  return VAR_6;
 }

 VAR_2 = FUNC_8(VAR_5->ai_family, VAR_5->ai_socktype, VAR_5->ai_protocol);
 if (VAR_2 < 0) {
  FUNC_4("rsocket");
  VAR_6 = VAR_2;
  goto out;
 }

 FUNC_9(VAR_2);
 VAR_6 = FUNC_6(VAR_2, VAR_5->ai_addr, VAR_5->ai_addrlen);
 if (VAR_6) {
  FUNC_4("rbind");
  FUNC_7(VAR_2);
 }

out:
 FUNC_0(VAR_5);
 return VAR_6;
}
