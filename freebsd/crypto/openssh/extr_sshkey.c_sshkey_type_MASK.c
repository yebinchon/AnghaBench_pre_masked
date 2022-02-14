
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sshkey {int type; } ;
struct keytype {int type; char const* shortname; } ;


 struct keytype* VAR_0 ;

const char *
FUNC_0(const struct sshkey *VAR_1)
{
 const struct keytype *VAR_2;

 for (VAR_2 = VAR_0; VAR_2->type != -1; VAR_2++) {
  if (VAR_2->type == VAR_1->type)
   return VAR_2->shortname;
 }
 return "unknown";
}
