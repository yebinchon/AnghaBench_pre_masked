
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ubifs_info {int dummy; } ;
struct TYPE_2__ {int len; } ;
struct ubifs_dent_node {scalar_t__ type; scalar_t__* name; int inum; TYPE_1__ ch; int nlen; int key; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct ubifs_info*,int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (scalar_t__*,int) ;
 int FUNC_5 (char*,...) ;

int FUNC_6(struct ubifs_info *VAR_7,
    const struct ubifs_dent_node *VAR_8)
{
 int VAR_9 = FUNC_0(VAR_7, VAR_8->key);
 int VAR_10 = FUNC_1(VAR_8->nlen);

 if (FUNC_2(VAR_8->ch.len) != VAR_10 + VAR_3 + 1 ||
     VAR_8->type >= VAR_4 ||
     VAR_10 > VAR_5 || VAR_8->name[VAR_10] != 0 ||
     FUNC_4(VAR_8->name, VAR_10) != VAR_10 ||
     FUNC_3(VAR_8->inum) > VAR_1) {
  FUNC_5("bad %s node", VAR_9 == VAR_2 ?
     "directory entry" : "extended attribute entry");
  return -VAR_0;
 }

 if (VAR_9 != VAR_2 && VAR_9 != VAR_6) {
  FUNC_5("bad key type %d", VAR_9);
  return -VAR_0;
 }

 return 0;
}
