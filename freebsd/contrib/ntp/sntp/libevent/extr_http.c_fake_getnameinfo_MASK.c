
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tmpserv ;
struct sockaddr_in {int sin_addr; int sin_port; } ;
struct sockaddr {int dummy; } ;
struct in_addr {int dummy; } ;
struct hostent {char* h_name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int,char*,int ) ;
 struct hostent* FUNC_1 (char*,int,int ) ;
 char* FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 size_t FUNC_4 (char*,char*,size_t) ;

__attribute__((used)) static int
FUNC_5(const struct sockaddr *VAR_2, size_t VAR_3, char *VAR_4,
 size_t VAR_5, char *VAR_6, size_t VAR_7, int VAR_8)
{
 struct sockaddr_in *VAR_9 = (struct sockaddr_in *)VAR_2;

 if (VAR_6 != ((void*)0)) {
  char VAR_10[16];
  FUNC_0(VAR_10, sizeof(VAR_10),
      "%d", FUNC_3(VAR_9->sin_port));
  if (FUNC_4(VAR_6, VAR_10, VAR_7) >= VAR_7)
   return (-1);
 }

 if (VAR_4 != ((void*)0)) {
  if (VAR_8 & VAR_1) {
   if (FUNC_4(VAR_4, FUNC_2(VAR_9->sin_addr),
       VAR_5) >= VAR_5)
    return (-1);
   else
    return (0);
  } else {
   struct hostent *VAR_11;
   VAR_11 = FUNC_1((char *)&VAR_9->sin_addr,
       sizeof(struct in_addr), VAR_0);
   if (VAR_11 == ((void*)0))
    return (-2);

   if (FUNC_4(VAR_4, VAR_11->h_name, VAR_5) >= VAR_5)
    return (-1);
   else
    return (0);
  }
 }
 return (0);
}
