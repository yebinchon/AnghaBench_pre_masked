
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr {scalar_t__ sa_family; } ;
struct sadb_address {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static int FUNC_0(struct sadb_address *VAR_2,
       struct sadb_address *VAR_3)
{
 struct sockaddr *VAR_4, *VAR_5;

 if (!VAR_2 || !VAR_3)
  return 0;

 VAR_4 = (struct sockaddr *)(VAR_2 + 1);
 VAR_5 = (struct sockaddr *)(VAR_3 + 1);
 if (VAR_4->sa_family != VAR_5->sa_family)
  return 0;
 if (VAR_4->sa_family != VAR_0



  )
  return 0;

 return 1;
}
