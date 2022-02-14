
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_char ;
struct ng_parse_type {int dummy; } ;
struct TYPE_2__ {int arglen; } ;
struct ng_mesg {TYPE_1__ header; } ;



__attribute__((used)) static int
FUNC_0(const struct ng_parse_type *VAR_0,
 const u_char *VAR_1, const u_char *VAR_2)
{
 const struct ng_mesg *VAR_3;

 VAR_3 = (const struct ng_mesg *)(VAR_2 - sizeof(*VAR_3));
 return VAR_3->header.arglen;
}
