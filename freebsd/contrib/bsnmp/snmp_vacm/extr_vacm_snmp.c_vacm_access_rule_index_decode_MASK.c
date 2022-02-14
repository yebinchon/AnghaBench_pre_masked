
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint32_t ;
typedef size_t uint ;
struct asn_oid {size_t* subs; } ;
typedef char int32_t ;


 size_t VAR_0 ;
 scalar_t__ FUNC_0 (char*) ;

__attribute__((used)) static int
FUNC_1(const struct asn_oid *VAR_1, uint VAR_2, char *VAR_3,
    char *VAR_4, int32_t *VAR_5, int32_t *VAR_6)
{
 uint32_t VAR_7;

 if (VAR_1->subs[VAR_2] >= VAR_0)
  return (-1);

 for (VAR_7 = 0; VAR_7 < VAR_1->subs[VAR_2]; VAR_7++)
  VAR_3[VAR_7] = VAR_1->subs[VAR_2 + VAR_7 + 1];
 VAR_3[VAR_7] = '\0';
 VAR_2 += FUNC_0(VAR_3) + 1;

 if (VAR_1->subs[VAR_2] >= VAR_0)
  return (-1);

 for (VAR_7 = 0; VAR_7 < VAR_1->subs[VAR_2]; VAR_7++)
  VAR_4[VAR_7] = VAR_1->subs[VAR_2 + VAR_7 + 1];
 VAR_4[VAR_7] = '\0';
 VAR_2 += FUNC_0(VAR_4) + 1;

 *VAR_5 = VAR_1->subs[VAR_2++];
 *VAR_6 = VAR_1->subs[VAR_2];

 return (0);
}
