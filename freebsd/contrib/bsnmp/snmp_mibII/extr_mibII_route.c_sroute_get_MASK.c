
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct sroute {int * index; } ;
struct asn_oid {int len; int * subs; } ;


 struct sroute* FUNC_0 (int ,int *,struct sroute*) ;
 int VAR_0 ;

__attribute__((used)) static struct sroute *
FUNC_1(const struct asn_oid *VAR_1, u_int VAR_2)
{
 struct sroute VAR_3;
 int VAR_4;

 if (VAR_1->len - VAR_2 != 13)
  return (((void*)0));
 for (VAR_4 = 0; VAR_4 < 13; VAR_4++)
  VAR_3.index[VAR_4] = VAR_1->subs[VAR_2 + VAR_4];
 return (FUNC_0(VAR_0, &VAR_0, &VAR_3));
}
