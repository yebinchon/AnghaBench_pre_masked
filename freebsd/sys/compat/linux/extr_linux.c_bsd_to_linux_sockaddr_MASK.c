
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr {int sa_family; } ;
struct l_sockaddr {int sa_family; } ;
typedef int socklen_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct sockaddr const*,struct l_sockaddr*,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct l_sockaddr*,int ) ;
 struct l_sockaddr* FUNC_3 (int,int ,int ) ;

int
FUNC_4(const struct sockaddr *VAR_5, struct l_sockaddr **VAR_6,
    socklen_t VAR_7)
{
 struct l_sockaddr *VAR_8;
 int VAR_9, VAR_10;

 *VAR_6 = ((void*)0);
 if (VAR_7 < 2 || VAR_7 > VAR_4)
  return (VAR_1);

 VAR_8 = FUNC_3(VAR_7, VAR_2, VAR_3);
 FUNC_0(VAR_5, VAR_8, VAR_7);

 VAR_10 = FUNC_1(VAR_5->sa_family);
 if (VAR_10 == -1) {
  VAR_9 = VAR_0;
  goto out;
 }

 VAR_8->sa_family = VAR_10;
 *VAR_6 = VAR_8;
 return (0);

out:
 FUNC_2(VAR_8, VAR_2);
 return (VAR_9);
}
