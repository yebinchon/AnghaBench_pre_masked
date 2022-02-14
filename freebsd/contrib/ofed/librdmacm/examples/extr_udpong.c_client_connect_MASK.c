
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct addrinfo {int ai_addrlen; int ai_addr; int ai_protocol; int ai_socktype; int ai_family; } ;
struct TYPE_3__ {int op; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int,int) ;
 int VAR_2 ;
 int FUNC_1 (struct addrinfo*) ;
 TYPE_1__ VAR_3 ;
 char* FUNC_2 (int) ;
 int FUNC_3 (int ,int ,struct addrinfo*,struct addrinfo**) ;
 int FUNC_4 (struct addrinfo*,int ,int) ;
 int VAR_4 ;
 int FUNC_5 (char*) ;
 int VAR_5 ;
 int FUNC_6 (char*,char*) ;
 int VAR_6 ;
 int FUNC_7 (int) ;
 int FUNC_8 (int,int ,int ) ;
 int FUNC_9 (int ,int ,int ) ;
 int FUNC_10 (int) ;

__attribute__((used)) static int FUNC_11(void)
{
 struct addrinfo VAR_7, *VAR_8;
 int VAR_9;

 FUNC_4(&VAR_7, 0, sizeof VAR_7);
 VAR_7.ai_socktype = VAR_1;
  VAR_9 = FUNC_3(VAR_2, VAR_5, &VAR_7, &VAR_8);
 if (VAR_9) {
  FUNC_6("getaddrinfo: %s\n", FUNC_2(VAR_9));
  return VAR_9;
 }

 VAR_6 = FUNC_9(VAR_8->ai_family, VAR_8->ai_socktype, VAR_8->ai_protocol);
 if (VAR_6 < 0) {
  FUNC_5("rsocket");
  VAR_9 = VAR_6;
  goto out;
 }

 FUNC_10(VAR_6);
 VAR_9 = FUNC_8(VAR_6, VAR_8->ai_addr, VAR_8->ai_addrlen);
 if (VAR_9) {
  FUNC_5("rconnect");
  FUNC_7(VAR_6);
  goto out;
 }

 VAR_3.op = VAR_4;
 VAR_9 = FUNC_0(&VAR_3, VAR_0, 1000);
 if (VAR_9 == VAR_0)
  VAR_9 = 0;

out:
 FUNC_1(VAR_8);
 return VAR_9;
}
