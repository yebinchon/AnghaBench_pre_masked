
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_storage {int ai_family; int ss_family; int ai_addrlen; int ai_addr; int ai_protocol; int ai_socktype; int ss_len; } ;
struct sockaddr {int dummy; } ;
struct addrinfo {int ai_family; int ss_family; int ai_addrlen; int ai_addr; int ai_protocol; int ai_socktype; int ss_len; } ;
typedef int ss ;
typedef int hints ;
typedef int hello ;
typedef int al ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 () ;
 int FUNC_1 (int,struct sockaddr*,int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,int ,int ) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (int ,char*,char const*,int ) ;
 int FUNC_6 (struct sockaddr_storage*) ;
 int FUNC_7 (int) ;
 int FUNC_8 (char const*,char const*,struct sockaddr_storage*,struct sockaddr_storage**) ;
 int FUNC_9 (struct sockaddr_storage*,int ,int) ;
 int FUNC_10 (int,char const*,int,int ) ;
 int FUNC_11 (int,char const*,int,int ,int ,int ) ;
 int FUNC_12 (int,int,int,int*,int) ;
 int FUNC_13 (int,int ,int ) ;

__attribute__((used)) static void
FUNC_14(const char *VAR_6, const char *VAR_7, int VAR_8, int VAR_9)
{
 static const char VAR_10[] = "hello\n";
 int VAR_11, VAR_12, VAR_13, VAR_14;
 struct sockaddr_storage VAR_15;
 struct addrinfo VAR_16, *VAR_17;

 FUNC_9(&VAR_16, 0, sizeof(VAR_16));
 VAR_16.ai_family = VAR_8;
 VAR_16.ai_socktype = VAR_5;

 switch (VAR_8) {
 case 129:
  VAR_13 = VAR_1;
  VAR_14 = VAR_4;
  break;
 case 128:
  VAR_13 = VAR_2;
  VAR_14 = VAR_3;
  break;
 default:
  FUNC_0();
 }

 VAR_12 = FUNC_8(VAR_6, VAR_7, &VAR_16, &VAR_17);
 if (VAR_12)
  FUNC_5(VAR_0, "Cannot get address for %s (%s)",
      VAR_6, FUNC_7(VAR_12));

 VAR_11 = FUNC_13(VAR_17->ai_family, VAR_17->ai_socktype, VAR_17->ai_protocol);
 if (VAR_11 == -1)
  FUNC_4(VAR_0, "socket");

 if (FUNC_12(VAR_11, VAR_13, VAR_14, &VAR_9, sizeof(VAR_9)) == -1)
  FUNC_4(VAR_0, "setsockopt");

 FUNC_9(&VAR_15, 0, sizeof(VAR_15));
 VAR_15.ss_len = VAR_17->ai_addrlen;
 VAR_15.ss_family = VAR_17->ai_family;

 if (FUNC_1(VAR_11, (struct sockaddr *)&VAR_15, VAR_15.ss_len) == -1)
  FUNC_4(VAR_0, "bind");

 if (FUNC_11(VAR_11, VAR_10, sizeof(VAR_10) - 1, 0,
     VAR_17->ai_addr, VAR_17->ai_addrlen) == -1)
  FUNC_4(VAR_0, "sendto");

 if (FUNC_2(VAR_11) == -1)
  FUNC_4(VAR_0, "close");

 VAR_11 = FUNC_13(VAR_17->ai_family, VAR_17->ai_socktype, VAR_17->ai_protocol);
 if (VAR_11 == -1)
  FUNC_4(VAR_0, "socket");

 if (FUNC_12(VAR_11, VAR_13, VAR_14, &VAR_9, sizeof(VAR_9)) == -1)
  FUNC_4(VAR_0, "setsockopt");

 if (FUNC_3(VAR_11, VAR_17->ai_addr, VAR_17->ai_addrlen) == -1)
  FUNC_4(VAR_0, "connect");

 if (FUNC_10(VAR_11, VAR_10, sizeof(VAR_10) - 1, 0) == -1)
  FUNC_4(VAR_0, "send");

 if (FUNC_2(VAR_11) == -1)
  FUNC_4(VAR_0, "close");

 FUNC_6(VAR_17);
}
