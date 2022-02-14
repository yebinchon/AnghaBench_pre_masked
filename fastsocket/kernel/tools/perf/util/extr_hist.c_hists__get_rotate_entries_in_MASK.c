
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rb_root {int dummy; } ;
struct hists {int lock; struct rb_root* entries_in_array; struct rb_root* entries_in; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static struct rb_root *FUNC_2(struct hists *VAR_0)
{
 struct rb_root *VAR_1;

 FUNC_0(&VAR_0->lock);

 VAR_1 = VAR_0->entries_in;
 if (++VAR_0->entries_in > &VAR_0->entries_in_array[1])
  VAR_0->entries_in = &VAR_0->entries_in_array[0];

 FUNC_1(&VAR_0->lock);

 return VAR_1;
}
