
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef union ubifs_key {int dummy; } ubifs_key ;
struct ubifs_znode {int level; int child_cnt; TYPE_1__* zbranch; } ;
struct TYPE_4__ {int lnum; int offs; struct ubifs_znode* znode; } ;
struct ubifs_info {TYPE_2__ zroot; } ;
struct TYPE_3__ {int lnum; int offs; int key; } ;


 int VAR_0 ;
 struct ubifs_znode* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct ubifs_znode*) ;
 struct ubifs_znode* FUNC_2 (struct ubifs_info*,struct ubifs_znode*,int) ;
 int FUNC_3 (struct ubifs_info*,union ubifs_key*) ;
 scalar_t__ FUNC_4 (struct ubifs_info*,int *,union ubifs_key*) ;
 struct ubifs_znode* FUNC_5 (struct ubifs_info*,struct ubifs_znode*) ;
 struct ubifs_znode* FUNC_6 (struct ubifs_info*,struct ubifs_znode*) ;
 int FUNC_7 (int) ;
 struct ubifs_znode* FUNC_8 (struct ubifs_info*,TYPE_2__*,int *,int ) ;
 int FUNC_9 (struct ubifs_info*,struct ubifs_znode*,union ubifs_key*,int*) ;

__attribute__((used)) static struct ubifs_znode *FUNC_10(struct ubifs_info *VAR_1,
     union ubifs_key *VAR_2, int VAR_3,
     int VAR_4, int VAR_5)
{
 struct ubifs_znode *VAR_6, *VAR_7;
 int VAR_8, VAR_9;





 if (VAR_3 < 0)
  return FUNC_0(-VAR_0);


 VAR_6 = VAR_1->zroot.znode;
 if (!VAR_6) {
  VAR_6 = FUNC_8(VAR_1, &VAR_1->zroot, ((void*)0), 0);
  if (FUNC_1(VAR_6))
   return VAR_6;
 }

 if (VAR_1->zroot.lnum == VAR_4 && VAR_1->zroot.offs == VAR_5)
  return VAR_6;

 if (VAR_3 >= VAR_6->level)
  return ((void*)0);
 while (1) {
  FUNC_9(VAR_1, VAR_6, VAR_2, &VAR_8);
  if (VAR_8 < 0) {
   VAR_6 = FUNC_5(VAR_1, VAR_6);
   if (!VAR_6)
    return ((void*)0);
   if (FUNC_1(VAR_6))
    return VAR_6;
   FUNC_9(VAR_1, VAR_6, VAR_2, &VAR_8);
   FUNC_7(VAR_8 >= 0);
  }
  if (VAR_6->level == VAR_3 + 1)
   break;
  VAR_6 = FUNC_2(VAR_1, VAR_6, VAR_8);
  if (FUNC_1(VAR_6))
   return VAR_6;
 }

 if (VAR_6->zbranch[VAR_8].lnum == VAR_4 && VAR_6->zbranch[VAR_8].offs == VAR_5)
  return FUNC_2(VAR_1, VAR_6, VAR_8);

 if (!FUNC_3(VAR_1, VAR_2))
  return ((void*)0);




 VAR_7 = VAR_6;
 VAR_9 = VAR_8;

 while (1) {

  if (VAR_8)
   VAR_8 -= 1;
  else {
   VAR_6 = FUNC_5(VAR_1, VAR_6);
   if (!VAR_6)
    break;
   if (FUNC_1(VAR_6))
    return VAR_6;
   VAR_8 = VAR_6->child_cnt - 1;
  }

  if (VAR_6->zbranch[VAR_8].lnum == VAR_4 &&
      VAR_6->zbranch[VAR_8].offs == VAR_5)
   return FUNC_2(VAR_1, VAR_6, VAR_8);

  if (FUNC_4(VAR_1, &VAR_6->zbranch[VAR_8].key, VAR_2) < 0)
   break;
 }

 VAR_6 = VAR_7;
 VAR_8 = VAR_9;

 while (1) {

  if (++VAR_8 >= VAR_6->child_cnt) {
   VAR_6 = FUNC_6(VAR_1, VAR_6);
   if (!VAR_6)
    break;
   if (FUNC_1(VAR_6))
    return VAR_6;
   VAR_8 = 0;
  }

  if (VAR_6->zbranch[VAR_8].lnum == VAR_4 &&
      VAR_6->zbranch[VAR_8].offs == VAR_5)
   return FUNC_2(VAR_1, VAR_6, VAR_8);

  if (FUNC_4(VAR_1, &VAR_6->zbranch[VAR_8].key, VAR_2) > 0)
   break;
 }
 return ((void*)0);
}
