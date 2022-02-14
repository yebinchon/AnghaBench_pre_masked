
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct sk_buff {int* data; } ;
struct gre_protocol {int (* handler ) (struct sk_buff*) ;} ;


 size_t VAR_0 ;
 int VAR_1 ;
 int * VAR_2 ;
 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct sk_buff*,int) ;
 struct gre_protocol* FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (struct sk_buff*) ;

__attribute__((used)) static int FUNC_6(struct sk_buff *VAR_3)
{
 const struct gre_protocol *VAR_4;
 u8 VAR_5;
 int VAR_6;

 if (!FUNC_1(VAR_3, 12))
  goto drop;

 VAR_5 = VAR_3->data[1]&0x7f;
 if (VAR_5 >= VAR_0)
  goto drop;

 FUNC_3();
 VAR_4 = FUNC_2(VAR_2[VAR_5]);
 if (!VAR_4 || !VAR_4->handler)
  goto drop_unlock;
 VAR_6 = VAR_4->handler(VAR_3);
 FUNC_4();
 return VAR_6;

drop_unlock:
 FUNC_4();
drop:
 FUNC_0(VAR_3);
 return VAR_1;
}
