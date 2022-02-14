
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fis_image_desc {char* name; int offset; int size; int addr; int entry; int dsize; int dsum; int fsum; } ;


 int FUNC_0 (char*,int,...) ;

__attribute__((used)) static void
FUNC_1(int VAR_0, struct fis_image_desc *VAR_1)
{

 FUNC_0("[%2d] \"%-15.15s\" %08x:%08x", VAR_0, VAR_1->name,
     VAR_1->offset, VAR_1->size);
 FUNC_0(" addr %08x entry %08x\n", VAR_1->addr, VAR_1->entry);
 FUNC_0("     dsize 0x%x dsum 0x%x fsum 0x%x\n", VAR_1->dsize,
     VAR_1->dsum, VAR_1->fsum);
}
