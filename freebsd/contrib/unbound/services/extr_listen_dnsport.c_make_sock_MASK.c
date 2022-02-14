
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr {int dummy; } ;
struct addrinfo {int ai_socktype; scalar_t__ ai_family; int ai_addrlen; scalar_t__ ai_addr; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct addrinfo*,int,int*,int*,int,int,int,int) ;
 int FUNC_1 (scalar_t__,int,struct sockaddr*,int ,int,int*,int*,int,int,int,int*,int,int,int) ;
 int VAR_4 ;
 int FUNC_2 (struct addrinfo*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (char const*,char const*,struct addrinfo*,struct addrinfo**) ;
 int FUNC_5 (char*,...) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (struct addrinfo*) ;

__attribute__((used)) static int
FUNC_8(int VAR_5, const char* VAR_6, const char* VAR_7,
 struct addrinfo *VAR_8, int VAR_9, int* VAR_10, size_t VAR_11, size_t VAR_12,
 int* VAR_13, int VAR_14, int VAR_15, int VAR_16, int VAR_17)
{
 struct addrinfo *VAR_18 = ((void*)0);
 int VAR_19, VAR_20, VAR_21, VAR_22;
 VAR_8->ai_socktype = VAR_5;
 *VAR_10 = 0;
 if((VAR_19=FUNC_4(VAR_6, VAR_7, VAR_8, &VAR_18)) != 0 || !VAR_18) {






  FUNC_5("node %s:%s getaddrinfo: %s %s",
   VAR_6?VAR_6:"default", VAR_7, FUNC_3(VAR_19),



   ""

  );
  return -1;
 }
 if(VAR_5 == VAR_3) {
  FUNC_7(VAR_18);
  VAR_20 = FUNC_1(VAR_18->ai_family, VAR_18->ai_socktype,
   (struct sockaddr*)VAR_18->ai_addr, VAR_18->ai_addrlen,
   VAR_9, &VAR_21, &VAR_22, (int)VAR_11, (int)VAR_12, 1,
   VAR_13, VAR_14, VAR_16, VAR_17);
  if(VAR_20 == -1 && VAR_21) {
   FUNC_5("bind: address already in use");
  } else if(VAR_20 == -1 && VAR_22 && VAR_8->ai_family == VAR_0){
   *VAR_10 = 1;
  }
 } else {
  VAR_20 = FUNC_0(VAR_18, VAR_9, &VAR_22, VAR_13,
   VAR_14, VAR_15, VAR_16, VAR_17);
  if(VAR_20 == -1 && VAR_22 && VAR_8->ai_family == VAR_0){
   *VAR_10 = 1;
  }
 }
 FUNC_2(VAR_18);
 return VAR_20;
}
