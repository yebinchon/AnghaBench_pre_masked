
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ vm_offset_t ;
struct csrreg {int key; int val; } ;
struct csrdirectory {scalar_t__ crc_len; } ;
struct crom_ptr {scalar_t__ index; struct csrdirectory* dir; } ;
struct crom_context {size_t depth; struct crom_ptr* stack; } ;


 scalar_t__ FUNC_0 (struct crom_context*) ;
 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct csrreg* FUNC_1 (struct crom_context*) ;
 int FUNC_2 (char*) ;

void
FUNC_3(struct crom_context *VAR_3)
{
 struct crom_ptr *VAR_4;
 struct csrreg *VAR_5;

 if (VAR_3->depth < 0)
  return;
 VAR_5 = FUNC_1(VAR_3);
 if ((VAR_5->key & VAR_2) == VAR_1) {
  if (VAR_3->depth >= VAR_0) {
   FUNC_2("crom_next: too deep\n");
   goto again;
  }
  VAR_3->depth++;

  VAR_4 = &VAR_3->stack[VAR_3->depth];
  VAR_4->dir = (struct csrdirectory *) (VAR_5 + VAR_5->val);
  VAR_4->index = 0;
  goto check;
 }
again:
 VAR_4 = &VAR_3->stack[VAR_3->depth];
 VAR_4->index++;
check:
 if (VAR_4->index < VAR_4->dir->crc_len &&
     (vm_offset_t)FUNC_1(VAR_3) <= FUNC_0(VAR_3))
  return;

 if (VAR_4->index < VAR_4->dir->crc_len)
  FUNC_2("crom_next: bound check failed\n");

 if (VAR_3->depth > 0) {
  VAR_3->depth--;
  goto again;
 }

 VAR_3->depth = -1;
}
