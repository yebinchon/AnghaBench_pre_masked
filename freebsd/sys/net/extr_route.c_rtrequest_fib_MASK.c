
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct sockaddr {scalar_t__ sa_len; } ;
struct rtentry {int dummy; } ;
struct rt_addrinfo {int rti_flags; struct sockaddr** rti_info; } ;
typedef int info ;
typedef int caddr_t ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int,struct rt_addrinfo*,struct rtentry**,int ) ;

int
FUNC_2(int VAR_4,
 struct sockaddr *VAR_5,
 struct sockaddr *VAR_6,
 struct sockaddr *VAR_7,
 int VAR_8,
 struct rtentry **VAR_9,
 u_int VAR_10)
{
 struct rt_addrinfo VAR_11;

 if (VAR_5->sa_len == 0)
  return(VAR_0);

 FUNC_0((caddr_t)&VAR_11, sizeof(VAR_11));
 VAR_11.rti_flags = VAR_8;
 VAR_11.rti_info[VAR_1] = VAR_5;
 VAR_11.rti_info[VAR_2] = VAR_6;
 VAR_11.rti_info[VAR_3] = VAR_7;
 return FUNC_1(VAR_4, &VAR_11, VAR_9, VAR_10);
}
