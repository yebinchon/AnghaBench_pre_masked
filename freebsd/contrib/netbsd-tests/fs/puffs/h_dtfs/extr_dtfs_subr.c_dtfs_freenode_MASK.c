
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ va_nlink; int va_type; int va_size; } ;
struct puffs_node {TYPE_1__ pn_va; } ;
struct dtfs_mount {int dtm_fsizes; } ;
struct dtfs_file {int df_datalen; struct dtfs_file* df_linktarget; struct dtfs_file** df_blocks; } ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 struct dtfs_file* FUNC_1 (struct puffs_node*) ;







 int FUNC_2 (int) ;
 int FUNC_3 (struct dtfs_file*) ;
 struct dtfs_mount* FUNC_4 (struct puffs_node*) ;
 int FUNC_5 (struct puffs_node*) ;

void
FUNC_6(struct puffs_node *VAR_1)
{
 struct dtfs_file *VAR_2 = FUNC_1(VAR_1);
 struct dtfs_mount *VAR_3;
 int VAR_4;

 FUNC_2(VAR_1->pn_va.va_nlink == 0);
 VAR_3 = FUNC_4(VAR_1);

 switch (VAR_1->pn_va.va_type) {
 case 129:
  FUNC_2(VAR_3->dtm_fsizes >= VAR_1->pn_va.va_size);
  VAR_3->dtm_fsizes -= VAR_1->pn_va.va_size;
  for (VAR_4 = 0; VAR_4 < FUNC_0(VAR_2->df_datalen, VAR_0); VAR_4++)
   FUNC_3(VAR_2->df_blocks[VAR_4]);
  if (VAR_2->df_datalen > VAR_4 << VAR_0)
   FUNC_3(VAR_2->df_blocks[VAR_4]);
  break;
 case 130:
  FUNC_3(VAR_2->df_linktarget);
  break;
 case 133:
 case 134:
 case 132:
 case 128:
 case 131:
  break;
 default:
  FUNC_2(0);
  break;
 }

 FUNC_3(VAR_2);
 FUNC_5(VAR_1);
}
