
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u_int ;
struct asn_oid {size_t len; int* subs; } ;


 size_t VAR_0 ;
 int FUNC_0 (char*,char*,int) ;

char *
FUNC_1(const struct asn_oid *VAR_1, char *VAR_2)
{
 u_int VAR_3, VAR_4;
 char *VAR_5;

 if ((VAR_3 = VAR_1->len) > VAR_0)
  VAR_3 = VAR_0;
 VAR_2[0] = '\0';
 for (VAR_4 = 0, VAR_5 = VAR_2; VAR_4 < VAR_3; VAR_4++) {
  if (VAR_4 > 0)
   *VAR_5++ = '.';
  VAR_5 += FUNC_0(VAR_5, "%u", VAR_1->subs[VAR_4]);
 }
 return (VAR_2);
}
