
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr {int dummy; } ;
struct addrinfo {int ai_family; int ai_socktype; int ai_addrlen; scalar_t__ ai_addr; int ai_protocol; } ;


 int FUNC_0 (int,int ,char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int,struct sockaddr*,int ) ;
 int VAR_2 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct addrinfo*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct sockaddr const*,int ,char*,scalar_t__,int *,int ,int ) ;
 int FUNC_6 (int,int,int ) ;
 scalar_t__ FUNC_7 (char*) ;
 int FUNC_8 (char*,char*,int,int) ;
 int FUNC_9 (struct addrinfo**,int,int,int) ;
 int VAR_3 ;
 int FUNC_10 (int ) ;

__attribute__((used)) static int
FUNC_11(int VAR_4, int VAR_5, int VAR_6)
{
 struct addrinfo *VAR_7;
 char VAR_8[VAR_0+1];
 int VAR_9, VAR_10;

 FUNC_9(&VAR_7, VAR_4, VAR_5, VAR_6);
 VAR_9 = FUNC_5(
     (const struct sockaddr*)VAR_7->ai_addr, VAR_7->ai_addrlen,
     VAR_8, FUNC_7(VAR_8) - 1, ((void*)0), 0, VAR_1);
 FUNC_0(VAR_9, 0,
     "getnameinfo failed: %s", FUNC_4(VAR_9));
 FUNC_8(
     "Will try to connect to host='%s', address_family=%d, "
     "socket_type=%d\n",
     VAR_8, VAR_7->ai_family, VAR_7->ai_socktype);

 FUNC_2(VAR_3);
 VAR_10 = FUNC_6(VAR_7->ai_family, VAR_7->ai_socktype, VAR_7->ai_protocol);
 VAR_9 = FUNC_1(VAR_10, (struct sockaddr*)VAR_7->ai_addr, VAR_7->ai_addrlen);
 FUNC_3(VAR_7);
 FUNC_0(VAR_9, 0, "connect failed: %s", FUNC_10(VAR_2));
 return (VAR_10);
}
