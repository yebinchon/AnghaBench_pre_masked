
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_storage {int dummy; } ;
struct addrinfo {int ai_flags; int ai_addrlen; int ai_addr; int ai_family; int ai_protocol; int ai_socktype; } ;
typedef int portstr ;
typedef int iporhost ;
typedef int intmax_t ;
typedef int hints ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (struct addrinfo*,int) ;
 int VAR_11 ;
 int FUNC_1 (struct addrinfo*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (char*,char*,struct addrinfo*,struct addrinfo**) ;
 int FUNC_4 (struct sockaddr_storage*,int ,int ) ;
 int FUNC_5 (char const*,int,int,int*) ;
 int FUNC_6 (int,char*,char*,char*,int ) ;
 int FUNC_7 (char*,int,char*,int) ;
 char* FUNC_8 (char const*,char) ;
 size_t FUNC_9 (char*,char const*,size_t) ;
 scalar_t__ FUNC_10 (char const*,char*,int) ;
 char* FUNC_11 (char const*,char) ;

__attribute__((used)) static int
FUNC_12(const char *VAR_12, int VAR_13, struct sockaddr_storage *VAR_14)
{
 char VAR_15[VAR_6], VAR_16[6];
 struct addrinfo VAR_17;
 struct addrinfo *VAR_18;
 const char *VAR_19;
 intmax_t VAR_20;
 size_t VAR_21;
 int VAR_22;

 if (VAR_12 == ((void*)0))
  return (-1);

 FUNC_0(&VAR_17, sizeof(VAR_17));
 VAR_17.ai_flags = VAR_0 | VAR_1;
 VAR_17.ai_family = VAR_9;
 VAR_17.ai_socktype = VAR_10;
 VAR_17.ai_protocol = VAR_5;

 if (FUNC_10(VAR_12, "tcp4://", 7) == 0) {
  VAR_12 += 7;
  VAR_17.ai_family = VAR_7;
 } else if (FUNC_10(VAR_12, "tcp6://", 7) == 0) {
  VAR_12 += 7;
  VAR_17.ai_family = VAR_8;
 } else if (FUNC_10(VAR_12, "tcp://", 6) == 0) {
  VAR_12 += 6;
 } else {




 }
 VAR_19 = ((void*)0);
 if (FUNC_8(VAR_12, ':') != FUNC_11(VAR_12, ':')) {
  if (VAR_12[0] == '[')
   VAR_19 = FUNC_11(VAR_12, ':');
 } else {
  VAR_19 = FUNC_11(VAR_12, ':');
 }
 if (VAR_19 == ((void*)0)) {

  VAR_20 = VAR_13;
 } else {
  if (FUNC_5(VAR_19 + 1, 1, 65535, &VAR_20) == -1)
   return (VAR_11);
 }
 (void)FUNC_7(VAR_16, sizeof(VAR_16), "%jd", (intmax_t)VAR_20);

 if (VAR_19 == ((void*)0)) {
  VAR_21 = sizeof(VAR_15);
  if (FUNC_9(VAR_15, VAR_12, VAR_21) >= VAR_21)
   return (VAR_3);
 } else if (VAR_12[0] == '[' && VAR_19[-1] == ']') {
  VAR_21 = (size_t)(VAR_19 - VAR_12 - 2 + 1);
  if (VAR_21 > sizeof(VAR_15))
   return (VAR_3);
  (void)FUNC_9(VAR_15, VAR_12 + 1, VAR_21);
 } else {
  VAR_21 = (size_t)(VAR_19 - VAR_12 + 1);
  if (VAR_21 > sizeof(VAR_15))
   return (VAR_3);
  (void)FUNC_9(VAR_15, VAR_12, VAR_21);
 }

 VAR_22 = FUNC_3(VAR_15, VAR_16, &VAR_17, &VAR_18);
 if (VAR_22 != 0) {
  FUNC_6(1, "getaddrinfo(%s, %s) failed: %s.", VAR_15,
      VAR_16, FUNC_2(VAR_22));
  return (VAR_2);
 }
 if (VAR_18 == ((void*)0))
  return (VAR_4);

 FUNC_4(VAR_14, VAR_18->ai_addr, VAR_18->ai_addrlen);

 FUNC_1(VAR_18);

 return (0);
}
