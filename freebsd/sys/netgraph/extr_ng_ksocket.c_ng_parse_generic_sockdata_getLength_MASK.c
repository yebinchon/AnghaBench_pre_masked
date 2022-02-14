
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct sockaddr {int const* sa_len; } ;
struct ng_parse_type {int dummy; } ;


 int const* VAR_0 ;

__attribute__((used)) static int
FUNC_0(const struct ng_parse_type *VAR_1,
 const u_char *VAR_2, const u_char *VAR_3)
{
 const struct sockaddr *VAR_4;

 VAR_4 = (const struct sockaddr *)(VAR_3 - VAR_0);
 return (VAR_4->sa_len < VAR_0) ? 0 : VAR_4->sa_len - VAR_0;
}
