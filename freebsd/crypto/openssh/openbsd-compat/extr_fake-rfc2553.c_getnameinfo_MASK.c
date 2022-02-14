
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tmpserv ;
struct sockaddr_in {int sin_addr; int sin_port; } ;
struct sockaddr {scalar_t__ sa_family; } ;
struct in_addr {int dummy; } ;
struct hostent {char* h_name; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct hostent* FUNC_0 (char*,int,scalar_t__) ;
 char* FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,int,char*,int) ;
 size_t FUNC_4 (char*,char*,size_t) ;

int FUNC_5(const struct sockaddr *VAR_6, size_t VAR_7, char *VAR_8,
  size_t VAR_9, char *VAR_10, size_t VAR_11, int VAR_12)
{
 struct sockaddr_in *VAR_13 = (struct sockaddr_in *)VAR_6;
 struct hostent *VAR_14;
 char VAR_15[16];

 if (VAR_6->sa_family != VAR_1 && VAR_6->sa_family != VAR_0)
  return (VAR_2);
 if (VAR_10 != ((void*)0)) {
  FUNC_3(VAR_15, sizeof(VAR_15), "%d", FUNC_2(VAR_13->sin_port));
  if (FUNC_4(VAR_10, VAR_15, VAR_11) >= VAR_11)
   return (VAR_3);
 }

 if (VAR_8 != ((void*)0)) {
  if (VAR_12 & VAR_5) {
   if (FUNC_4(VAR_8, FUNC_1(VAR_13->sin_addr),
       VAR_9) >= VAR_9)
    return (VAR_3);
   else
    return (0);
  } else {
   VAR_14 = FUNC_0((char *)&VAR_13->sin_addr,
       sizeof(struct in_addr), VAR_0);
   if (VAR_14 == ((void*)0))
    return (VAR_4);

   if (FUNC_4(VAR_8, VAR_14->h_name, VAR_9) >= VAR_9)
    return (VAR_3);
   else
    return (0);
  }
 }
 return (0);
}
