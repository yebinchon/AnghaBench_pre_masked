
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef int (* ub_callback_type ) (void*,int,struct ub_result*) ;
struct ub_result {int dummy; } ;
struct ub_ctx {int dummy; } ;


 int FUNC_0 (struct ub_ctx*,int *,int ,int (*) (void*,int,struct ub_result*),void**,int*,struct ub_result**) ;
 int FUNC_1 (void*,int,struct ub_result*) ;

__attribute__((used)) static int
FUNC_2(struct ub_ctx* VAR_0, uint8_t* VAR_1, uint32_t VAR_2)
{
 int VAR_3;
 ub_callback_type VAR_4;
 void* VAR_5;
 struct ub_result* VAR_6;
 int VAR_7;

 VAR_7 = FUNC_0(VAR_0, VAR_1, VAR_2, &VAR_4, &VAR_5, &VAR_3, &VAR_6);



 if(VAR_7 == 2)
  (*VAR_4)(VAR_5, VAR_3, VAR_6);

 return VAR_7;
}
