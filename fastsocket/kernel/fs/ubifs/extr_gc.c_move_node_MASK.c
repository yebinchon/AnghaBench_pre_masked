
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubifs_wbuf {int lnum; int offs; int used; } ;
struct ubifs_scan_node {int list; int len; int offs; int key; int node; } ;
struct ubifs_scan_leb {int lnum; } ;
struct ubifs_info {int dummy; } ;


 int FUNC_0 () ;
 int FUNC_1 (struct ubifs_scan_node*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct ubifs_info*,int *,int ,int ,int,int,int ) ;
 int FUNC_4 (struct ubifs_wbuf*,int ,int ) ;

__attribute__((used)) static int FUNC_5(struct ubifs_info *VAR_0, struct ubifs_scan_leb *VAR_1,
       struct ubifs_scan_node *VAR_2, struct ubifs_wbuf *VAR_3)
{
 int VAR_4, VAR_5 = VAR_3->lnum, VAR_6 = VAR_3->offs + VAR_3->used;

 FUNC_0();
 VAR_4 = FUNC_4(VAR_3, VAR_2->node, VAR_2->len);
 if (VAR_4)
  return VAR_4;

 VAR_4 = FUNC_3(VAR_0, &VAR_2->key, VAR_1->lnum,
    VAR_2->offs, VAR_5, VAR_6,
    VAR_2->len);
 FUNC_2(&VAR_2->list);
 FUNC_1(VAR_2);
 return VAR_4;
}
