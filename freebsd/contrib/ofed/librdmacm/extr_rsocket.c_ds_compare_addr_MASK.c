
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_in6 {int dummy; } ;
struct sockaddr_in {int dummy; } ;
struct sockaddr {scalar_t__ sa_family; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (void const*,void const*,size_t) ;

__attribute__((used)) static int FUNC_1(const void *VAR_1, const void *VAR_2)
{
 const struct sockaddr *VAR_3, *VAR_4;
 size_t VAR_5;

 VAR_3 = (const struct sockaddr *) VAR_1;
 VAR_4 = (const struct sockaddr *) VAR_2;

 VAR_5 = (VAR_3->sa_family == VAR_0 && VAR_4->sa_family == VAR_0) ?
       sizeof(struct sockaddr_in6) : sizeof(struct sockaddr_in);
 return FUNC_0(VAR_1, VAR_2, VAR_5);
}
