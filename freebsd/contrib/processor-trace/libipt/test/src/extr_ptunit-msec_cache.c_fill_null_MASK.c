
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ptunit_result {int dummy; } ;
struct pt_msec_cache {int dummy; } ;
struct pt_mapped_section {int dummy; } ;
struct pt_image {int dummy; } ;
struct pt_asid {int dummy; } ;
typedef int mcache ;


 int FUNC_0 (struct pt_msec_cache*,int ,int) ;
 int FUNC_1 (struct pt_msec_cache*,struct pt_mapped_section const**,struct pt_image*,struct pt_asid*,unsigned long long) ;
 int VAR_0 ;
 int FUNC_2 (int,int ) ;
 struct ptunit_result FUNC_3 () ;

__attribute__((used)) static struct ptunit_result FUNC_4(void)
{
 const struct pt_mapped_section *VAR_1;
 struct pt_msec_cache VAR_2;
 struct pt_image VAR_3;
 struct pt_asid VAR_4;
 int VAR_5;

 FUNC_0(&VAR_2, 0, sizeof(VAR_2));

 VAR_5 = FUNC_1(((void*)0), &VAR_1, &VAR_3, &VAR_4, 0ull);
 FUNC_2(VAR_5, -VAR_0);

 VAR_5 = FUNC_1(&VAR_2, ((void*)0), &VAR_3, &VAR_4, 0ull);
 FUNC_2(VAR_5, -VAR_0);

 VAR_5 = FUNC_1(&VAR_2, &VAR_1, ((void*)0), &VAR_4, 0ull);
 FUNC_2(VAR_5, -VAR_0);

 VAR_5 = FUNC_1(&VAR_2, &VAR_1, &VAR_3, ((void*)0), 0ull);
 FUNC_2(VAR_5, -VAR_0);

 return FUNC_3();
}
