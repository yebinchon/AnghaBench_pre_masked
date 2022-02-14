
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr {scalar_t__ sa_family; } ;
union vxlan_sockaddr {struct sockaddr sa; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static int
FUNC_0(const union vxlan_sockaddr *VAR_3, int VAR_4)
{
 const struct sockaddr *VAR_5;
 int VAR_6;

 VAR_5 = &VAR_3->sa;
 VAR_6 = 0;

 if (VAR_5->sa_family == VAR_2 && VAR_4 != 0) {
  VAR_6 = 1;
 } else if (VAR_5->sa_family == VAR_0) {



 } else if (VAR_5->sa_family == VAR_1) {



 }

 return (VAR_6);
}
