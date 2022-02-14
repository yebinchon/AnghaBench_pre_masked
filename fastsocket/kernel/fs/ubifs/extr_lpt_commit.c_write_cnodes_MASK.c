
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubifs_pnode {int dummy; } ;
struct ubifs_nnode {int dummy; } ;
struct ubifs_info {int nhead_lnum; int nhead_offs; int lsave_sz; int leb_size; int ltab_sz; int nnode_sz; int pnode_sz; int lpt_first; int lpt_last; int lpt_lnum; int lpt_offs; int ltab_lnum; int ltab_offs; int lsave_lnum; int lsave_offs; scalar_t__ big_lpt; int min_io_size; int ltab_cmt; int lsave; struct ubifs_cnode* lpt_cnext; void* lpt_buf; } ;
struct ubifs_cnode {struct ubifs_cnode* cnext; int flags; scalar_t__ level; } ;


 int FUNC_0 (int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (struct ubifs_info*,int,int) ;
 int FUNC_3 (struct ubifs_info*) ;
 int FUNC_4 (struct ubifs_info*) ;
 int FUNC_5 (char*,int,int,int,int,int) ;
 int FUNC_6 (char*,int,int) ;
 int FUNC_7 () ;
 int FUNC_8 (void*,int,int) ;
 int FUNC_9 (struct ubifs_info*,int*) ;
 int FUNC_10 () ;
 int FUNC_11 () ;
 int FUNC_12 (int) ;
 int FUNC_13 (char*) ;
 int FUNC_14 (struct ubifs_info*,int) ;
 int FUNC_15 (struct ubifs_info*,int,void*,int,int,int ) ;
 int FUNC_16 (struct ubifs_info*,void*,int ) ;
 int FUNC_17 (struct ubifs_info*,void*,int ) ;
 int FUNC_18 (struct ubifs_info*,void*,struct ubifs_nnode*) ;
 int FUNC_19 (struct ubifs_info*,void*,struct ubifs_pnode*) ;

__attribute__((used)) static int FUNC_20(struct ubifs_info *VAR_3)
{
 int VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12;
 struct ubifs_cnode *VAR_13;
 void *VAR_14 = VAR_3->lpt_buf;

 VAR_13 = VAR_3->lpt_cnext;
 if (!VAR_13)
  return 0;
 VAR_4 = VAR_3->nhead_lnum;
 VAR_5 = VAR_3->nhead_offs;
 VAR_7 = VAR_5;

 if (VAR_5 == 0) {
  VAR_8 = FUNC_14(VAR_3, VAR_4);
  if (VAR_8)
   return VAR_8;
 }

 VAR_12 = !VAR_3->big_lpt;
 VAR_11 = 0;
 if (!VAR_12 && VAR_5 + VAR_3->lsave_sz <= VAR_3->leb_size) {
  VAR_12 = 1;
  FUNC_16(VAR_3, VAR_14 + VAR_5, VAR_3->lsave);
  VAR_5 += VAR_3->lsave_sz;
  FUNC_2(VAR_3, 1, VAR_3->lsave_sz);
 }

 if (VAR_5 + VAR_3->ltab_sz <= VAR_3->leb_size) {
  VAR_11 = 1;
  FUNC_17(VAR_3, VAR_14 + VAR_5, VAR_3->ltab_cmt);
  VAR_5 += VAR_3->ltab_sz;
  FUNC_2(VAR_3, 1, VAR_3->ltab_sz);
 }


 do {
  if (VAR_13->level)
   VAR_6 = VAR_3->nnode_sz;
  else
   VAR_6 = VAR_3->pnode_sz;
  while (VAR_5 + VAR_6 > VAR_3->leb_size) {
   VAR_9 = VAR_5 - VAR_7;
   if (VAR_9) {
    VAR_10 = FUNC_0(VAR_9, VAR_3->min_io_size);
    FUNC_8(VAR_14 + VAR_5, 0xff, VAR_10 - VAR_9);
    VAR_8 = FUNC_15(VAR_3, VAR_4, VAR_14 + VAR_7, VAR_7,
             VAR_10, VAR_2);
    if (VAR_8)
     return VAR_8;
   }
   FUNC_2(VAR_3, 2, VAR_3->leb_size - VAR_5);
   VAR_8 = FUNC_9(VAR_3, &VAR_4);
   if (VAR_8)
    goto no_space;
   VAR_5 = VAR_7 = 0;
   FUNC_12(VAR_4 >= VAR_3->lpt_first &&
         VAR_4 <= VAR_3->lpt_last);
   VAR_8 = FUNC_14(VAR_3, VAR_4);
   if (VAR_8)
    return VAR_8;

   if (!VAR_12) {
    VAR_12 = 1;
    FUNC_16(VAR_3, VAR_14 + VAR_5, VAR_3->lsave);
    VAR_5 += VAR_3->lsave_sz;
    FUNC_2(VAR_3, 1, VAR_3->lsave_sz);
    continue;
   }
   if (!VAR_11) {
    VAR_11 = 1;
    FUNC_17(VAR_3, VAR_14 + VAR_5, VAR_3->ltab_cmt);
    VAR_5 += VAR_3->ltab_sz;
    FUNC_2(VAR_3, 1, VAR_3->ltab_sz);
    continue;
   }
   break;
  }
  if (VAR_13->level)
   FUNC_18(VAR_3, VAR_14 + VAR_5,
      (struct ubifs_nnode *)VAR_13);
  else
   FUNC_19(VAR_3, VAR_14 + VAR_5,
      (struct ubifs_pnode *)VAR_13);






  FUNC_1(VAR_1, &VAR_13->flags);
  FUNC_11();
  FUNC_1(VAR_0, &VAR_13->flags);
  FUNC_10();
  VAR_5 += VAR_6;
  FUNC_2(VAR_3, 1, VAR_6);
  VAR_13 = VAR_13->cnext;
 } while (VAR_13 && VAR_13 != VAR_3->lpt_cnext);


 if (!VAR_12) {
  if (VAR_5 + VAR_3->lsave_sz > VAR_3->leb_size) {
   VAR_9 = VAR_5 - VAR_7;
   VAR_10 = FUNC_0(VAR_9, VAR_3->min_io_size);
   FUNC_8(VAR_14 + VAR_5, 0xff, VAR_10 - VAR_9);
   VAR_8 = FUNC_15(VAR_3, VAR_4, VAR_14 + VAR_7, VAR_7, VAR_10,
           VAR_2);
   if (VAR_8)
    return VAR_8;
   FUNC_2(VAR_3, 2, VAR_3->leb_size - VAR_5);
   VAR_8 = FUNC_9(VAR_3, &VAR_4);
   if (VAR_8)
    goto no_space;
   VAR_5 = VAR_7 = 0;
   FUNC_12(VAR_4 >= VAR_3->lpt_first &&
         VAR_4 <= VAR_3->lpt_last);
   VAR_8 = FUNC_14(VAR_3, VAR_4);
   if (VAR_8)
    return VAR_8;
  }
  VAR_12 = 1;
  FUNC_16(VAR_3, VAR_14 + VAR_5, VAR_3->lsave);
  VAR_5 += VAR_3->lsave_sz;
  FUNC_2(VAR_3, 1, VAR_3->lsave_sz);
 }


 if (!VAR_11) {
  if (VAR_5 + VAR_3->ltab_sz > VAR_3->leb_size) {
   VAR_9 = VAR_5 - VAR_7;
   VAR_10 = FUNC_0(VAR_9, VAR_3->min_io_size);
   FUNC_8(VAR_14 + VAR_5, 0xff, VAR_10 - VAR_9);
   VAR_8 = FUNC_15(VAR_3, VAR_4, VAR_14 + VAR_7, VAR_7, VAR_10,
           VAR_2);
   if (VAR_8)
    return VAR_8;
   FUNC_2(VAR_3, 2, VAR_3->leb_size - VAR_5);
   VAR_8 = FUNC_9(VAR_3, &VAR_4);
   if (VAR_8)
    goto no_space;
   VAR_5 = VAR_7 = 0;
   FUNC_12(VAR_4 >= VAR_3->lpt_first &&
         VAR_4 <= VAR_3->lpt_last);
   VAR_8 = FUNC_14(VAR_3, VAR_4);
   if (VAR_8)
    return VAR_8;
  }
  VAR_11 = 1;
  FUNC_17(VAR_3, VAR_14 + VAR_5, VAR_3->ltab_cmt);
  VAR_5 += VAR_3->ltab_sz;
  FUNC_2(VAR_3, 1, VAR_3->ltab_sz);
 }


 VAR_9 = VAR_5 - VAR_7;
 VAR_10 = FUNC_0(VAR_9, VAR_3->min_io_size);
 FUNC_8(VAR_14 + VAR_5, 0xff, VAR_10 - VAR_9);
 VAR_8 = FUNC_15(VAR_3, VAR_4, VAR_14 + VAR_7, VAR_7, VAR_10, VAR_2);
 if (VAR_8)
  return VAR_8;

 FUNC_2(VAR_3, 4, VAR_10 - VAR_9);
 VAR_8 = FUNC_2(VAR_3, 3, FUNC_0(VAR_5, VAR_3->min_io_size));
 if (VAR_8)
  return VAR_8;

 VAR_3->nhead_lnum = VAR_4;
 VAR_3->nhead_offs = FUNC_0(VAR_5, VAR_3->min_io_size);

 FUNC_6("LPT root is at %d:%d", VAR_3->lpt_lnum, VAR_3->lpt_offs);
 FUNC_6("LPT head is at %d:%d", VAR_3->nhead_lnum, VAR_3->nhead_offs);
 FUNC_6("LPT ltab is at %d:%d", VAR_3->ltab_lnum, VAR_3->ltab_offs);
 if (VAR_3->big_lpt)
  FUNC_6("LPT lsave is at %d:%d", VAR_3->lsave_lnum, VAR_3->lsave_offs);

 return 0;

no_space:
 FUNC_13("LPT out of space mismatch");
 FUNC_5("LPT out of space mismatch at LEB %d:%d needing %d, done_ltab "
  "%d, done_lsave %d", VAR_4, VAR_5, VAR_6, VAR_11, VAR_12);
 FUNC_3(VAR_3);
 FUNC_4(VAR_3);
 FUNC_7();
 return VAR_8;
}
