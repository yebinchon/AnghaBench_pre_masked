
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct ipv6_pinfo {struct ipv6_fl_socklist* ipv6_fl_list; } ;
struct ipv6_fl_socklist {struct ipv6_fl_socklist* next; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int VAR_4 ;
 struct ipv6_pinfo* FUNC_2 (struct sock*) ;

__attribute__((used)) static int FUNC_3(struct sock *VAR_5)
{
 struct ipv6_pinfo *VAR_6 = FUNC_2(VAR_5);
 struct ipv6_fl_socklist *VAR_7;
 int VAR_8 = VAR_3 - FUNC_0(&VAR_4);
 int VAR_9 = 0;

 if (VAR_8 > VAR_3 - VAR_2)
  return 0;

 for (VAR_7 = VAR_6->ipv6_fl_list; VAR_7; VAR_7 = VAR_7->next)
  VAR_9++;

 if (VAR_8 <= 0 ||
     ((VAR_9 >= VAR_2 ||
      (VAR_9 > 0 && VAR_8 < VAR_3/2) || VAR_8 < VAR_3/4)
      && !FUNC_1(VAR_0)))
  return -VAR_1;

 return 0;
}
