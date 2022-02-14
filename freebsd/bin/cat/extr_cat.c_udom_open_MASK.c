
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct addrinfo {int ai_addrlen; int ai_addr; int ai_protocol; int ai_socktype; int ai_family; struct addrinfo* ai_next; } ;
typedef int hints ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct addrinfo*,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int ,int ) ;
 int VAR_6 ;
 int FUNC_3 (struct addrinfo*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (char*,int *,struct addrinfo*,struct addrinfo**) ;
 int * FUNC_6 (char const*,char*) ;
 int FUNC_7 (int,int ) ;
 int FUNC_8 (int ,int ,int ) ;
 int FUNC_9 (char*,...) ;

__attribute__((used)) static int
FUNC_10(const char *VAR_7, int VAR_8)
{
 struct addrinfo VAR_9, *VAR_10, *VAR_11;
 char VAR_12[VAR_3];
 int VAR_13 = -1;
 int VAR_14;




 FUNC_0(&VAR_9, sizeof(VAR_9));
 VAR_9.ai_family = VAR_0;
 if (FUNC_6(VAR_7, VAR_12) == ((void*)0))
  return (-1);
 VAR_14 = FUNC_5(VAR_12, ((void*)0), &VAR_9, &VAR_11);
 if (VAR_14) {
  FUNC_9("%s", FUNC_4(VAR_14));
  VAR_6 = VAR_1;
  return (-1);
 }
 for (VAR_10 = VAR_11; VAR_10 != ((void*)0); VAR_10 = VAR_10->ai_next) {
  VAR_13 = FUNC_8(VAR_10->ai_family, VAR_10->ai_socktype,
      VAR_10->ai_protocol);
  if (VAR_13 < 0) {
   FUNC_3(VAR_11);
   return (-1);
  }
  VAR_14 = FUNC_2(VAR_13, VAR_10->ai_addr, VAR_10->ai_addrlen);
  if (VAR_14 == 0)
   break;
  else {
   FUNC_1(VAR_13);
   VAR_13 = -1;
  }
 }
 FUNC_3(VAR_11);




 if (VAR_13 >= 0) {
  switch(VAR_8 & VAR_2) {
  case 129:
   if (FUNC_7(VAR_13, VAR_5) == -1)
    FUNC_9(((void*)0));
   break;
  case 128:
   if (FUNC_7(VAR_13, VAR_4) == -1)
    FUNC_9(((void*)0));
   break;
  default:
   break;
  }
 }
 return (VAR_13);
}
