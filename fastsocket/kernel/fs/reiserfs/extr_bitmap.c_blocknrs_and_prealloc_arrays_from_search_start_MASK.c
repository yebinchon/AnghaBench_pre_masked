
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;
typedef struct TYPE_12__ TYPE_10__ ;


struct super_block {int dummy; } ;
struct TYPE_13__ {int preallocate; int prealloc_size; TYPE_2__* inode; int formatted_node; TYPE_5__* th; scalar_t__ beg; scalar_t__ search_start; } ;
typedef TYPE_1__ reiserfs_blocknr_hint_t ;
typedef scalar_t__ b_blocknr_t ;
struct TYPE_15__ {struct super_block* t_super; } ;
struct TYPE_14__ {int i_uid; } ;
struct TYPE_12__ {int i_prealloc_count; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_10__* FUNC_0 (TYPE_2__*) ;
 scalar_t__ FUNC_1 (struct super_block*) ;
 int FUNC_2 (TYPE_1__*,scalar_t__*,scalar_t__,scalar_t__,int,int,int) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (struct super_block*,int ,char*,int,int ) ;
 int FUNC_5 (TYPE_5__*,TYPE_2__*,scalar_t__,int) ;
 int FUNC_6 (TYPE_2__*,int) ;
 int FUNC_7 (TYPE_2__*,int) ;
 int FUNC_8 (TYPE_2__*,int) ;

__attribute__((used)) static inline int FUNC_9
    (reiserfs_blocknr_hint_t * VAR_4, b_blocknr_t * VAR_5,
     int VAR_6) {
 struct super_block *VAR_7 = VAR_4->th->t_super;
 b_blocknr_t VAR_8 = VAR_4->search_start;
 b_blocknr_t VAR_9 = FUNC_1(VAR_7) - 1;
 int VAR_10 = 0;
 int VAR_11 = 0;

 FUNC_3(VAR_4);
 if (!VAR_4->formatted_node) {
  int VAR_12;





  VAR_12 =
      FUNC_6(VAR_4->inode, VAR_6);
  if (VAR_12)
   return VAR_2;
  if (VAR_4->preallocate && VAR_4->prealloc_size) {





   VAR_12 = FUNC_8(VAR_4->inode,
        VAR_4->prealloc_size);
   if (VAR_12)
    VAR_4->preallocate = VAR_4->prealloc_size = 0;
  }

 }

 do {
  switch (VAR_10++) {
  case 0:
   VAR_8 = VAR_4->search_start;
   VAR_9 = FUNC_1(VAR_7) - 1;
   break;
  case 1:
   VAR_8 = VAR_4->beg;
   VAR_9 = VAR_4->search_start;
   break;
  case 2:
   VAR_8 = 0;
   VAR_9 = VAR_4->beg;
   break;
  default:

   if (!VAR_4->formatted_node) {
    FUNC_7(VAR_4->inode,
     VAR_6 + VAR_4->prealloc_size -
     VAR_11);
   }
   while (VAR_11--)
    FUNC_5(VAR_4->th, VAR_4->inode,
          VAR_5[VAR_11],
          !VAR_4->formatted_node);

   return VAR_1;
  }
 } while ((VAR_11 += FUNC_2(VAR_4,
         VAR_5 +
         VAR_11,
         VAR_8, VAR_9,
         1,
         VAR_6 -
         VAR_11,
         VAR_4->
         prealloc_size))
   < VAR_6);
 if (!VAR_4->formatted_node &&
     VAR_6 + VAR_4->prealloc_size >
     VAR_11 + FUNC_0(VAR_4->inode)->i_prealloc_count) {
  FUNC_7(VAR_4->inode, VAR_6 +
      VAR_4->prealloc_size - VAR_11 -
      FUNC_0(VAR_4->inode)->
      i_prealloc_count);
 }

 return VAR_0;
}
