
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fd_type {int sectrac; int secsize; int datalen; int gap; int tracks; int size; int trans; int heads; int f_gap; int f_inter; int offset_side2; int flags; } ;


 int FUNC_0 (char*,int,int,int,int,int,int,int,int,int,int,int,int) ;

__attribute__((used)) static void
FUNC_1(struct fd_type *VAR_0)
{

 FUNC_0("(%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,0x%x)",
     VAR_0->sectrac, VAR_0->secsize, VAR_0->datalen, VAR_0->gap, VAR_0->tracks,
     VAR_0->size, VAR_0->trans, VAR_0->heads, VAR_0->f_gap, VAR_0->f_inter,
     VAR_0->offset_side2, VAR_0->flags);
}
