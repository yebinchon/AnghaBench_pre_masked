
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint32_t ;
struct bsdar {int s_cnt; char* s_sn; int s_sn_sz; scalar_t__* s_so; } ;
struct archive {int dummy; } ;


 int FUNC_0 (struct bsdar*,struct archive*,long*,int) ;

__attribute__((used)) static void
FUNC_1(struct bsdar *VAR_0, struct archive *VAR_1)
{
 long VAR_2, VAR_3, VAR_4;
 char *VAR_5;
 uint32_t VAR_6;






 VAR_2 = (long) (VAR_0->s_cnt * 2 * sizeof(long));
 FUNC_0(VAR_0, VAR_1, &VAR_2, sizeof(long));






 for (VAR_6 = 0, VAR_5 = VAR_0->s_sn; VAR_6 < VAR_0->s_cnt; VAR_6++) {
  VAR_4 = (long) (VAR_5 - VAR_0->s_sn);
  VAR_3 = (long) VAR_0->s_so[VAR_6];
  FUNC_0(VAR_0, VAR_1, &VAR_4, sizeof(long));
  FUNC_0(VAR_0, VAR_1, &VAR_3, sizeof(long));


  while (*VAR_5++ != '\0')
   ;
 }





 VAR_2 = (long) VAR_0->s_sn_sz;
 FUNC_0(VAR_0, VAR_1, &VAR_2, sizeof(long));
 FUNC_0(VAR_0, VAR_1, VAR_0->s_sn, VAR_0->s_sn_sz);
}
