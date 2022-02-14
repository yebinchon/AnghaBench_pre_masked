
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct elfcopy {int s_cnt; int s_sn_sz; char* s_sn; char* as; int as_sz; scalar_t__* s_so; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__) ;

__attribute__((used)) static void
FUNC_1(struct elfcopy *VAR_2)
{
 size_t VAR_3;
 size_t VAR_4;
 int VAR_5;






 if (VAR_2->s_cnt != 0 && VAR_2->s_sn_sz % 2 != 0)
  VAR_2->s_sn[VAR_2->s_sn_sz++] = '\0';






 if (VAR_2->as != ((void*)0) && VAR_2->as_sz % 2 != 0)
  VAR_2->as[VAR_2->as_sz++] = '\n';
 if (VAR_2->s_cnt != 0) {
  VAR_3 = (VAR_2->s_cnt + 1) * sizeof(uint32_t) + VAR_2->s_sn_sz;
  VAR_4 = VAR_1 + (VAR_0 + VAR_3);
  if (VAR_2->as != ((void*)0))
   VAR_4 += VAR_0 + VAR_2->as_sz;
  for (VAR_5 = 0; (size_t)VAR_5 < VAR_2->s_cnt; VAR_5++)
   *(VAR_2->s_so + VAR_5) = FUNC_0(*(VAR_2->s_so + VAR_5) +
       VAR_4);
 }
}
