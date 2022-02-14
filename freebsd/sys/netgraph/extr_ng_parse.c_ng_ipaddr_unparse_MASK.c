
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct ng_parse_type {int dummy; } ;
struct in_addr {int dummy; } ;
typedef int ip ;


 int FUNC_0 (int const*,struct in_addr*,int) ;
 int FUNC_1 (char**,int*,char*,int ,int ,int ,int ) ;

__attribute__((used)) static int
FUNC_2(const struct ng_parse_type *VAR_0,
 const u_char *VAR_1, int *VAR_2, char *VAR_3, int VAR_4)
{
 struct in_addr VAR_5;
 int VAR_6;

 FUNC_0(VAR_1 + *VAR_2, &VAR_5, sizeof(VAR_5));
 if ((VAR_6 = FUNC_1(&VAR_3, &VAR_4, "%d.%d.%d.%d",
     ((u_char *)&VAR_5)[0], ((u_char *)&VAR_5)[1],
     ((u_char *)&VAR_5)[2], ((u_char *)&VAR_5)[3])) != 0)
  return (VAR_6);
 *VAR_2 += sizeof(VAR_5);
 return (0);
}
