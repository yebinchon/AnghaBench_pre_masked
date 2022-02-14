
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint32_t ;
typedef size_t uint ;
struct asn_oid {size_t len; int* subs; } ;


 int VAR_0 ;

__attribute__((used)) static int
FUNC_0(const struct asn_oid *VAR_1, uint VAR_2, char *VAR_3)
{
 uint32_t VAR_4;

 if (VAR_1->len - VAR_2 != VAR_1->subs[VAR_2] + 1 || VAR_1->subs[VAR_2] >=
     VAR_0)
  return (-1);

 for (VAR_4 = 0; VAR_4 < VAR_1->subs[VAR_2]; VAR_4++)
  VAR_3[VAR_4] = VAR_1->subs[VAR_2 + VAR_4 + 1];
 VAR_3[VAR_4] = '\0';

 return (0);
}
