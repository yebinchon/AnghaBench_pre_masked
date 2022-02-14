
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct napi_struct {int dummy; } ;
typedef int gro_result_t ;


 int FUNC_0 (struct napi_struct*,struct sk_buff*) ;
 int FUNC_1 (int ,struct sk_buff*) ;
 int FUNC_2 (struct sk_buff*) ;

__attribute__((used)) static inline gro_result_t FUNC_3(struct napi_struct *VAR_0,
       struct sk_buff *VAR_1)
{
 FUNC_2(VAR_1);

 return FUNC_1(FUNC_0(VAR_0, VAR_1), VAR_1);
}
