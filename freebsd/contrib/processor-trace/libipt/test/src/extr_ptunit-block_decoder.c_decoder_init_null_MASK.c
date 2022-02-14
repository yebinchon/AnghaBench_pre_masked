
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ptunit_result {int dummy; } ;
struct pt_config {int dummy; } ;
struct pt_block_decoder {int dummy; } ;


 int FUNC_0 (struct pt_block_decoder*,struct pt_config*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int,int ) ;
 struct ptunit_result FUNC_2 () ;

__attribute__((used)) static struct ptunit_result FUNC_3(void)
{
 struct pt_block_decoder VAR_2;
 struct pt_config VAR_3;
 int VAR_4;

 VAR_4 = FUNC_0(((void*)0), &VAR_3);
 FUNC_1(VAR_4, -VAR_0);

 VAR_4 = FUNC_0(&VAR_2, ((void*)0));
 FUNC_1(VAR_4, -VAR_1);

 return FUNC_2();
}
