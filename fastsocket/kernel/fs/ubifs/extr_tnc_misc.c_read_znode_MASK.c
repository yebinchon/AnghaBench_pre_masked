
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef union ubifs_key {int dummy; } ubifs_key ;
struct ubifs_znode {int child_cnt; int level; struct ubifs_zbranch* zbranch; } ;
struct ubifs_zbranch {scalar_t__ lnum; int offs; scalar_t__ len; union ubifs_key key; int * znode; } ;
struct ubifs_info {int fanout; scalar_t__ main_first; scalar_t__ leb_cnt; scalar_t__ leb_size; TYPE_1__* ranges; int max_idx_node_sz; } ;
struct ubifs_idx_node {int level; int child_cnt; } ;
struct ubifs_branch {int len; int offs; int lnum; int key; } ;
struct TYPE_2__ {scalar_t__ max_len; scalar_t__ len; int min_len; } ;


 int FUNC_0 (union ubifs_key*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 int VAR_3 ;

 int VAR_4 ;

 int FUNC_1 (struct ubifs_info*,struct ubifs_idx_node*) ;
 int FUNC_2 (char*,int,...) ;
 int FUNC_3 (char*,int,int ) ;
 int FUNC_4 (char*,int,int,int,int) ;
 int FUNC_5 (struct ubifs_info*,union ubifs_key const*) ;
 int FUNC_6 (struct ubifs_info*,int *,union ubifs_key*) ;
 int FUNC_7 (struct ubifs_info*,union ubifs_key*) ;
 int FUNC_8 (struct ubifs_info*,union ubifs_key const*,union ubifs_key const*) ;
 int FUNC_9 (struct ubifs_idx_node*) ;
 struct ubifs_idx_node* FUNC_10 (int ,int ) ;
 void* FUNC_11 (int ) ;
 void* FUNC_12 (int ) ;
 int FUNC_13 (char*,int,int,int) ;
 struct ubifs_branch* FUNC_14 (struct ubifs_info*,struct ubifs_idx_node*,int) ;
 int FUNC_15 (struct ubifs_info*,struct ubifs_idx_node*,int ,int,int,int) ;

__attribute__((used)) static int FUNC_16(struct ubifs_info *VAR_5, int VAR_6, int VAR_7, int VAR_8,
        struct ubifs_znode *VAR_9)
{
 int VAR_10, VAR_11, VAR_12, VAR_13;
 struct ubifs_idx_node *VAR_14;

 VAR_14 = FUNC_10(VAR_5->max_idx_node_sz, VAR_2);
 if (!VAR_14)
  return -VAR_1;

 VAR_11 = FUNC_15(VAR_5, VAR_14, VAR_3, VAR_8, VAR_6, VAR_7);
 if (VAR_11 < 0) {
  FUNC_9(VAR_14);
  return VAR_11;
 }

 VAR_9->child_cnt = FUNC_11(VAR_14->child_cnt);
 VAR_9->level = FUNC_11(VAR_14->level);

 FUNC_4("LEB %d:%d, level %d, %d branch",
  VAR_6, VAR_7, VAR_9->level, VAR_9->child_cnt);

 if (VAR_9->child_cnt > VAR_5->fanout || VAR_9->level > VAR_4) {
  FUNC_2("current fanout %d, branch count %d",
   VAR_5->fanout, VAR_9->child_cnt);
  FUNC_2("max levels %d, znode level %d",
   VAR_4, VAR_9->level);
  VAR_11 = 1;
  goto out_dump;
 }

 for (VAR_10 = 0; VAR_10 < VAR_9->child_cnt; VAR_10++) {
  const struct ubifs_branch *VAR_15 = FUNC_14(VAR_5, VAR_14, VAR_10);
  struct ubifs_zbranch *VAR_16 = &VAR_9->zbranch[VAR_10];

  FUNC_6(VAR_5, &VAR_15->key, &VAR_16->key);
  VAR_16->lnum = FUNC_12(VAR_15->lnum);
  VAR_16->offs = FUNC_12(VAR_15->offs);
  VAR_16->len = FUNC_12(VAR_15->len);
  VAR_16->znode = ((void*)0);



  if (VAR_16->lnum < VAR_5->main_first ||
      VAR_16->lnum >= VAR_5->leb_cnt || VAR_16->offs < 0 ||
      VAR_16->offs + VAR_16->len > VAR_5->leb_size || VAR_16->offs & 7) {
   FUNC_2("bad branch %d", VAR_10);
   VAR_11 = 2;
   goto out_dump;
  }

  switch (FUNC_7(VAR_5, &VAR_16->key)) {
  case 129:
  case 131:
  case 130:
  case 128:
   break;
  default:
   FUNC_3("bad key type at slot %d: %s", VAR_10,
    FUNC_0(&VAR_16->key));
   VAR_11 = 3;
   goto out_dump;
  }

  if (VAR_9->level)
   continue;

  VAR_12 = FUNC_7(VAR_5, &VAR_16->key);
  if (VAR_5->ranges[VAR_12].max_len == 0) {
   if (VAR_16->len != VAR_5->ranges[VAR_12].len) {
    FUNC_2("bad target node (type %d) length (%d)",
     VAR_12, VAR_16->len);
    FUNC_2("have to be %d", VAR_5->ranges[VAR_12].len);
    VAR_11 = 4;
    goto out_dump;
   }
  } else if (VAR_16->len < VAR_5->ranges[VAR_12].min_len ||
      VAR_16->len > VAR_5->ranges[VAR_12].max_len) {
   FUNC_2("bad target node (type %d) length (%d)",
    VAR_12, VAR_16->len);
   FUNC_2("have to be in range of %d-%d",
    VAR_5->ranges[VAR_12].min_len,
    VAR_5->ranges[VAR_12].max_len);
   VAR_11 = 5;
   goto out_dump;
  }
 }





 for (VAR_10 = 0; VAR_10 < VAR_9->child_cnt - 1; VAR_10++) {
  const union ubifs_key *VAR_17, *VAR_18;

  VAR_17 = &VAR_9->zbranch[VAR_10].key;
  VAR_18 = &VAR_9->zbranch[VAR_10 + 1].key;

  VAR_13 = FUNC_8(VAR_5, VAR_17, VAR_18);
  if (VAR_13 > 0) {
   FUNC_2("bad key order (keys %d and %d)", VAR_10, VAR_10 + 1);
   VAR_11 = 6;
   goto out_dump;
  } else if (VAR_13 == 0 && !FUNC_5(VAR_5, VAR_17)) {

   FUNC_2("keys %d and %d are not hashed but equivalent",
    VAR_10, VAR_10 + 1);
   VAR_11 = 7;
   goto out_dump;
  }
 }

 FUNC_9(VAR_14);
 return 0;

out_dump:
 FUNC_13("bad indexing node at LEB %d:%d, error %d", VAR_6, VAR_7, VAR_11);
 FUNC_1(VAR_5, VAR_14);
 FUNC_9(VAR_14);
 return -VAR_0;
}
