
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_char ;
struct ng_parse_type {int dummy; } ;
struct TYPE_2__ {int hooks; } ;
struct hooklist {TYPE_1__ nodeinfo; } ;



__attribute__((used)) static int
FUNC_0(const struct ng_parse_type *VAR_0,
 const u_char *VAR_1, const u_char *VAR_2)
{
 const struct hooklist *VAR_3 = (const struct hooklist *)VAR_1;

 return VAR_3->nodeinfo.hooks;
}
