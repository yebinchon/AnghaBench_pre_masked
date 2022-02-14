
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct flowi {scalar_t__ proto; } ;
struct dst_entry {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct dst_entry**,struct flowi*,int) ;
 int VAR_3 ;
 int FUNC_1 (int *,struct dst_entry**,struct flowi*,struct sock*,int ) ;

int FUNC_2(struct dst_entry **VAR_4, struct flowi *VAR_5, struct sock *VAR_6, int VAR_7)
{
 int VAR_8;

 VAR_8 = FUNC_0(VAR_4, VAR_5, VAR_7 & VAR_1);
 if (VAR_8 == 0 && VAR_5->proto) {
  VAR_8 = FUNC_1(&VAR_3, VAR_4, VAR_5, VAR_6,
     (VAR_7 & VAR_0) ? 0 : VAR_2);
 }
 return VAR_8;
}
