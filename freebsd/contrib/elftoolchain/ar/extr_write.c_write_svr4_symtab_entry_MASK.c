
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint32_t ;
struct bsdar {size_t s_cnt; size_t* s_so; int* s_sn; int s_sn_sz; } ;
struct archive {int dummy; } ;


 void* FUNC_0 (size_t) ;
 int FUNC_1 (struct bsdar*,struct archive*,int*,int) ;

__attribute__((used)) static void
FUNC_2(struct bsdar *VAR_0, struct archive *VAR_1)
{
 int VAR_2;
 uint32_t VAR_3;


 for (VAR_3 = 0; VAR_3 < VAR_0->s_cnt; VAR_3++)
  VAR_0->s_so[VAR_3] = FUNC_0(VAR_0->s_so[VAR_3]);

 VAR_2 = FUNC_0(VAR_0->s_cnt);
 FUNC_1(VAR_0, VAR_1, &VAR_2, sizeof(uint32_t));
 FUNC_1(VAR_0, VAR_1, VAR_0->s_so, sizeof(uint32_t) *
     VAR_0->s_cnt);
 FUNC_1(VAR_0, VAR_1, VAR_0->s_sn, VAR_0->s_sn_sz);
}
