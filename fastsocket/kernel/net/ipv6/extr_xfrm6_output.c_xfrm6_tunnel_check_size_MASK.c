
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int len; int dev; int local_df; } ;
struct dst_entry {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct dst_entry*) ;
 int FUNC_1 (struct sk_buff*,int ,int ,int,int ) ;
 struct dst_entry* FUNC_2 (struct sk_buff*) ;

__attribute__((used)) static int FUNC_3(struct sk_buff *VAR_3)
{
 int VAR_4, VAR_5 = 0;
 struct dst_entry *VAR_6 = FUNC_2(VAR_3);

 VAR_4 = FUNC_0(VAR_6);
 if (VAR_4 < VAR_2)
  VAR_4 = VAR_2;

 if (!VAR_3->local_df && VAR_3->len > VAR_4) {
  VAR_3->dev = VAR_6->dev;
  FUNC_1(VAR_3, VAR_1, 0, VAR_4, VAR_3->dev);
  VAR_5 = -VAR_0;
 }

 return VAR_5;
}
