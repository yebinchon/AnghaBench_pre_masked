
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fd_type {int size; int sectrac; int heads; int tracks; int secsize; } ;
struct fd_data {int sectorsize; struct fd_type* ft; } ;



__attribute__((used)) static void
FUNC_0(struct fd_data *VAR_0, struct fd_type *VAR_1)
{
 VAR_0->ft = VAR_1;
 VAR_1->size = VAR_1->sectrac * VAR_1->heads * VAR_1->tracks;
 VAR_0->sectorsize = 128 << VAR_0->ft->secsize;
}
