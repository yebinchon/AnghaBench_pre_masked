
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_storage {scalar_t__ ss_family; } ;
struct sockaddr_in6 {int sin6_addr; } ;
struct sockaddr_in {int dummy; } ;
struct sockaddr {int dummy; } ;
struct in6_addr {int dummy; } ;
typedef int socklen_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (struct sockaddr*,int,char*,int,char*,int,int) ;
 scalar_t__ FUNC_1 (int *,char*,int) ;
 int FUNC_2 (char*,char*,int) ;
 int FUNC_3 (char*,int ,int) ;

int FUNC_4(const struct sockaddr_storage *VAR_6, char *VAR_7, int VAR_8, char *VAR_9, int VAR_10, int VAR_11, char *VAR_12, int VAR_13)
{
 socklen_t VAR_14;
 int VAR_15;

 VAR_15 = -1;







 VAR_14 = sizeof(struct sockaddr_storage);


 if ((VAR_11 & VAR_2) == 0)
 {
  if ((VAR_6->ss_family == VAR_1) &&
   (FUNC_1(&((struct sockaddr_in6 *) VAR_6)->sin6_addr, "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", sizeof(struct in6_addr)) == 0))
  {
   if (VAR_7)
    FUNC_3(VAR_7, VAR_3, VAR_8);
   return VAR_15;
  }
 }

 if (FUNC_0((struct sockaddr *) VAR_6, VAR_14, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11) != 0)
 {

  if (VAR_12)
  {
   FUNC_2("getnameinfo(): ", VAR_12, VAR_13);
   VAR_12[VAR_13 - 1] = 0;
  }

  if (VAR_7)
  {
   FUNC_3(VAR_7, VAR_4, VAR_8);
   VAR_7[VAR_8 - 1] = 0;
  }

  if (VAR_9)
  {
   FUNC_3(VAR_9, VAR_5, VAR_10);
   VAR_9[VAR_10 - 1] = 0;
  }

  VAR_15 = 0;
 }

 return VAR_15;
}
