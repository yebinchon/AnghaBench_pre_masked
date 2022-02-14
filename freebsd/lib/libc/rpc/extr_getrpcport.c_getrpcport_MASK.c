
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_long ;
typedef int u_int ;
struct TYPE_2__ {int s_addr; } ;
struct sockaddr_in {int sin_len; TYPE_1__ sin_addr; scalar_t__ sin_port; int sin_family; } ;
struct hostent {int h_length; int h_addr; } ;
typedef int addr ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 struct hostent* FUNC_1 (char*) ;
 int FUNC_2 (int *,int ,size_t) ;
 int FUNC_3 (struct sockaddr_in*,int ,int) ;
 int FUNC_4 (struct sockaddr_in*,int ,int ,int ) ;

int
FUNC_5(char *VAR_1, int VAR_2, int VAR_3, int VAR_4)
{
 struct sockaddr_in VAR_5;
 struct hostent *VAR_6;

 FUNC_0(VAR_1 != ((void*)0));

 if ((VAR_6 = FUNC_1(VAR_1)) == ((void*)0))
  return (0);
 FUNC_3(&VAR_5, 0, sizeof(VAR_5));
 VAR_5.sin_len = sizeof(struct sockaddr_in);
 VAR_5.sin_family = VAR_0;
 VAR_5.sin_port = 0;
 if (VAR_6->h_length > VAR_5.sin_len)
  VAR_6->h_length = VAR_5.sin_len;
 FUNC_2(&VAR_5.sin_addr.s_addr, VAR_6->h_addr, (size_t)VAR_6->h_length);

 return (FUNC_4(&VAR_5, (u_long)VAR_2, (u_long)VAR_3,
     (u_int)VAR_4));
}
