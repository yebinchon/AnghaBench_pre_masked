
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint8_t ;
typedef size_t uint32_t ;
typedef size_t uint ;
struct asn_oid {size_t* subs; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;

__attribute__((used)) static int
FUNC_0(const struct asn_oid *VAR_2, uint VAR_3, uint8_t *VAR_4,
    uint32_t *VAR_5, char *VAR_6)
{
 uint32_t VAR_7, VAR_8;
 int VAR_9;

 if (VAR_2->subs[VAR_3] > VAR_1)
  return (-1);

 for (VAR_7 = 0; VAR_7 < VAR_2->subs[VAR_3]; VAR_7++)
  VAR_4[VAR_7] = VAR_2->subs[VAR_3 + VAR_7 + 1];
 *VAR_5 = VAR_7;

 VAR_9 = VAR_3 + VAR_2->subs[VAR_3] + 1;
 if ((VAR_8 = VAR_2->subs[VAR_9]) >= VAR_0)
  return (-1);

 for (VAR_7 = 0; VAR_7 < VAR_8; VAR_7++)
  VAR_6[VAR_7] = VAR_2->subs[VAR_9 + VAR_7 + 1];
 VAR_6[VAR_8] = '\0';

 return (0);
}
