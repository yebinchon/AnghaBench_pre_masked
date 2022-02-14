
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct napi_struct {int dummy; } ;
typedef int gro_result_t ;


 int VAR_0 ;
 int FUNC_0 (struct napi_struct*,struct sk_buff*) ;
 int FUNC_1 (struct napi_struct*,struct sk_buff*,int ) ;
 struct sk_buff* FUNC_2 (struct napi_struct*) ;

__attribute__((used)) static inline gro_result_t FUNC_3(struct napi_struct *VAR_1)
{
 struct sk_buff *VAR_2 = FUNC_2(VAR_1);

 if (!VAR_2)
  return VAR_0;

 return FUNC_1(VAR_1, VAR_2, FUNC_0(VAR_1, VAR_2));
}
