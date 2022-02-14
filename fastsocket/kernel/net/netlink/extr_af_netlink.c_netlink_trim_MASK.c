
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int end; int tail; int truesize; } ;
typedef int gfp_t ;


 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct sk_buff*,int ,int,int ) ;
 struct sk_buff* FUNC_2 (struct sk_buff*,int ) ;
 int FUNC_3 (struct sk_buff*) ;
 scalar_t__ FUNC_4 (struct sk_buff*) ;

__attribute__((used)) static inline struct sk_buff *FUNC_5(struct sk_buff *VAR_0,
        gfp_t VAR_1)
{
 int VAR_2;

 FUNC_3(VAR_0);

 VAR_2 = VAR_0->end - VAR_0->tail;
 if (VAR_2 * 2 < VAR_0->truesize)
  return VAR_0;

 if (FUNC_4(VAR_0)) {
  struct sk_buff *VAR_3 = FUNC_2(VAR_0, VAR_1);
  if (!VAR_3)
   return VAR_0;
  FUNC_0(VAR_0);
  VAR_0 = VAR_3;
 }

 if (!FUNC_1(VAR_0, 0, -VAR_2, VAR_1))
  VAR_0->truesize -= VAR_2;

 return VAR_0;
}
