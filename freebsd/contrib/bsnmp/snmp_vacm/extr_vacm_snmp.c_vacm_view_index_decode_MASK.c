
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint32_t ;
typedef size_t uint ;
struct asn_oid {size_t* subs; int len; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int*,int*,int) ;

__attribute__((used)) static int
FUNC_1(const struct asn_oid *VAR_2, uint VAR_3, char *VAR_4,
   struct asn_oid *VAR_5)
{
 uint32_t VAR_6;
 int VAR_7;

 if (VAR_2->subs[VAR_3] >= VAR_1)
  return (-1);

 for (VAR_6 = 0; VAR_6 < VAR_2->subs[VAR_3]; VAR_6++)
  VAR_4[VAR_6] = VAR_2->subs[VAR_3 + VAR_6 + 1];
 VAR_4[VAR_6] = '\0';

 VAR_7 = VAR_3 + VAR_2->subs[VAR_3] + 1;
 if ((VAR_5->len = VAR_2->subs[VAR_7]) > VAR_0)
  return (-1);

 FUNC_0(&VAR_5->subs[0], &VAR_2->subs[VAR_7 + 1],
     VAR_5->len * sizeof(VAR_5->subs[0]));

 return (0);
}
