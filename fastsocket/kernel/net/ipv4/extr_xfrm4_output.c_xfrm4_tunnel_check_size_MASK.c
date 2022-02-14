
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int len; scalar_t__ local_df; } ;
struct dst_entry {int dummy; } ;
struct TYPE_4__ {int flags; } ;
struct TYPE_3__ {int frag_off; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__* FUNC_0 (struct sk_buff*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct dst_entry*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct sk_buff*,int ,int ,int ) ;
 TYPE_1__* FUNC_5 (struct sk_buff*) ;
 struct dst_entry* FUNC_6 (struct sk_buff*) ;

__attribute__((used)) static int FUNC_7(struct sk_buff *VAR_5)
{
 int VAR_6, VAR_7 = 0;
 struct dst_entry *VAR_8;

 if (FUNC_0(VAR_5)->flags & VAR_3)
  goto out;

 if (!(FUNC_5(VAR_5)->frag_off & FUNC_3(VAR_4)) || VAR_5->local_df)
  goto out;

 VAR_8 = FUNC_6(VAR_5);
 VAR_6 = FUNC_1(VAR_8);
 if (VAR_5->len > VAR_6) {
  FUNC_4(VAR_5, VAR_1, VAR_2, FUNC_2(VAR_6));
  VAR_7 = -VAR_0;
 }
out:
 return VAR_7;
}
