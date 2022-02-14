
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_2__ {scalar_t__ va_size; int va_bytes; } ;
struct puffs_node {TYPE_1__ pn_va; } ;
struct dtfs_mount {int dtm_fsizes; } ;
struct dtfs_file {int df_numblocks; scalar_t__ df_datalen; int * df_blocks; } ;
typedef scalar_t__ off_t ;


 int FUNC_0 (scalar_t__,int) ;
 int VAR_0 ;
 int VAR_1 ;
 struct dtfs_file* FUNC_1 (struct puffs_node*) ;
 scalar_t__ FUNC_2 (scalar_t__,int ) ;
 int FUNC_3 (int ) ;
 int * FUNC_4 (int *,size_t) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ,int ) ;
 struct dtfs_mount* FUNC_7 (struct puffs_node*) ;

void
FUNC_8(struct puffs_node *VAR_2, off_t VAR_3)
{
 struct dtfs_file *VAR_4 = FUNC_1(VAR_2);
 struct dtfs_mount *VAR_5;
 size_t VAR_6;
 int VAR_7, VAR_8;
 int VAR_9;

 VAR_7 = VAR_3 > FUNC_2(VAR_4->df_datalen, VAR_1);
 VAR_8 = VAR_3 < VAR_2->pn_va.va_size;

 if (VAR_7 || VAR_8) {
  VAR_6 = FUNC_0(VAR_3, VAR_0) + 1;

  if (VAR_8)
   for (VAR_9 = VAR_6; VAR_9 < VAR_4->df_numblocks; VAR_9++)
    FUNC_5(VAR_4->df_blocks[VAR_9]);

  VAR_4->df_blocks = FUNC_4(VAR_4->df_blocks,
      VAR_6 * sizeof(uint8_t *));




  if (!VAR_8) {
   for (VAR_9 = VAR_4->df_numblocks; VAR_9 < VAR_6; VAR_9++) {
    VAR_4->df_blocks[VAR_9] = FUNC_3(VAR_1);
    FUNC_6(VAR_4->df_blocks[VAR_9], 0, VAR_1);
   }
  }

  VAR_4->df_datalen = VAR_3;
  VAR_4->df_numblocks = VAR_6;
 }

 VAR_5 = FUNC_7(VAR_2);
 if (!VAR_8) {
  VAR_5->dtm_fsizes += VAR_3 - VAR_2->pn_va.va_size;
 } else {
  VAR_5->dtm_fsizes -= VAR_2->pn_va.va_size - VAR_3;
 }

 VAR_2->pn_va.va_size = VAR_3;
 VAR_2->pn_va.va_bytes = FUNC_0(VAR_3,VAR_0)>>VAR_0;
}
