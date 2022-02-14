
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubifs_info {int orph_first; int orph_last; int ohead_lnum; scalar_t__ ohead_offs; } ;


 int FUNC_0 (struct ubifs_info*,int) ;

int FUNC_1(struct ubifs_info *VAR_0)
{
 int VAR_1, VAR_2;

 for (VAR_1 = VAR_0->orph_first; VAR_1 <= VAR_0->orph_last; VAR_1++) {
  VAR_2 = FUNC_0(VAR_0, VAR_1);
  if (VAR_2)
   return VAR_2;
 }
 VAR_0->ohead_lnum = VAR_0->orph_first;
 VAR_0->ohead_offs = 0;
 return 0;
}
