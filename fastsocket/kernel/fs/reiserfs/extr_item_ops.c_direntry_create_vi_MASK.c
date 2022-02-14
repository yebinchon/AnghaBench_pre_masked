
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct virtual_node {size_t vn_pos_in_item; int vn_mode; } ;
struct virtual_item {scalar_t__ vi_item_len; int vi_ih; scalar_t__ vi_item; int vi_index; struct direntry_uarea* vi_uarea; } ;
struct reiserfs_de_head {int dummy; } ;
struct direntry_uarea {int entry_count; int* entry_sizes; int flags; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct reiserfs_de_head*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int,int,size_t,int ) ;
 int FUNC_6 (int *,char*,char*,int ,int) ;

__attribute__((used)) static int FUNC_7(struct virtual_node *VAR_7,
         struct virtual_item *VAR_8,
         int VAR_9, int VAR_10)
{
 struct direntry_uarea *VAR_11 = VAR_8->vi_uarea;
 int VAR_12, VAR_13;
 int VAR_14 = sizeof(struct direntry_uarea);
 struct reiserfs_de_head *VAR_15;

 VAR_8->vi_index = VAR_6;

 FUNC_0(!(VAR_8->vi_ih) || !VAR_8->vi_item);

 VAR_11->flags = 0;
 if (FUNC_4(VAR_8->vi_ih) == VAR_2)
  VAR_11->flags |= VAR_1;

 VAR_15 = (struct reiserfs_de_head *)(VAR_8->vi_item);


 VAR_11->entry_count = FUNC_2(VAR_8->vi_ih) +
     ((VAR_9) ? ((VAR_7->vn_mode == VAR_4) ? -1 :
         (VAR_7->vn_mode == VAR_5 ? 1 : 0)) : 0);

 for (VAR_12 = 0; VAR_12 < VAR_11->entry_count; VAR_12++) {
  VAR_13 = FUNC_5(VAR_9, VAR_12, VAR_7->vn_pos_in_item,
      VAR_7->vn_mode);
  VAR_11->entry_sizes[VAR_12] =
      (VAR_13 ? FUNC_1(&(VAR_15[VAR_13 - 1])) : FUNC_3(VAR_8->vi_ih)) -
      FUNC_1(&(VAR_15[VAR_13])) + VAR_0;
 }

 VAR_14 += (VAR_11->entry_count * sizeof(short));


 if (VAR_9 && VAR_7->vn_mode == VAR_5)
  VAR_11->entry_sizes[VAR_7->vn_pos_in_item] = VAR_10;
 return VAR_14;

}
