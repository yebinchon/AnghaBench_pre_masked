
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct flowi {scalar_t__ proto; } ;
struct dst_entry {int dummy; } ;


 int FUNC_0 (struct dst_entry**,struct flowi*,int) ;
 int VAR_0 ;
 int FUNC_1 (int *,struct dst_entry**,struct flowi*,int *,int ) ;

__attribute__((used)) static int FUNC_2(struct dst_entry **VAR_1, struct flowi *VAR_2, int VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_0(VAR_1, VAR_2, VAR_3);
 if (VAR_4 == 0 && VAR_2->proto) {
  VAR_4 = FUNC_1(&VAR_0, VAR_1, VAR_2, ((void*)0), 0);
 }
 return VAR_4;
}
