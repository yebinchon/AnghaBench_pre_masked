
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ptunit_result {int dummy; } ;
struct pt_msec_cache {int dummy; } ;
struct pt_mapped_section {int dummy; } ;
struct pt_image {int dummy; } ;


 int FUNC_0 (struct pt_msec_cache*,struct pt_mapped_section const**,struct pt_image*,unsigned long long) ;
 int VAR_0 ;
 int FUNC_1 (int,int ) ;
 struct ptunit_result FUNC_2 () ;

__attribute__((used)) static struct ptunit_result FUNC_3(void)
{
 const struct pt_mapped_section *VAR_1;
 struct pt_msec_cache VAR_2;
 struct pt_image VAR_3;
 int VAR_4;

 VAR_4 = FUNC_0(((void*)0), &VAR_1, &VAR_3, 0ull);
 FUNC_1(VAR_4, -VAR_0);

 VAR_4 = FUNC_0(&VAR_2, ((void*)0), &VAR_3, 0ull);
 FUNC_1(VAR_4, -VAR_0);

 VAR_4 = FUNC_0(&VAR_2, &VAR_1, ((void*)0), 0ull);
 FUNC_1(VAR_4, -VAR_0);

 return FUNC_2();
}
