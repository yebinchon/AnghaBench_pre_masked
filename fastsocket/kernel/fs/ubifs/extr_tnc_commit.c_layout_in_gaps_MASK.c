
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int idx_lebs; } ;
struct ubifs_info {int* gap_lebs; int ileb_cnt; int space_lock; TYPE_1__ lst; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ubifs_info*) ;
 int FUNC_1 (struct ubifs_info*) ;
 int VAR_3 ;
 int FUNC_2 (char*,int,...) ;
 int FUNC_3 (struct ubifs_info*,int) ;
 int FUNC_4 (int*) ;
 int* FUNC_5 (int,int ) ;
 int FUNC_6 (struct ubifs_info*,int*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int) ;
 int FUNC_10 (char*) ;

__attribute__((used)) static int FUNC_11(struct ubifs_info *VAR_4, int VAR_5)
{
 int VAR_6, VAR_7, VAR_8, *VAR_9;

 FUNC_2("%d znodes to write", VAR_5);

 VAR_4->gap_lebs = FUNC_5(sizeof(int) * (VAR_4->lst.idx_lebs + 1), VAR_2);
 if (!VAR_4->gap_lebs)
  return -VAR_0;

 VAR_9 = VAR_4->gap_lebs;
 do {
  FUNC_9(VAR_9 < VAR_4->gap_lebs + sizeof(int) * VAR_4->lst.idx_lebs);
  VAR_8 = FUNC_6(VAR_4, VAR_9);
  if (VAR_8 < 0) {
   VAR_6 = VAR_8;
   if (VAR_6 != -VAR_1) {
    FUNC_4(VAR_4->gap_lebs);
    VAR_4->gap_lebs = ((void*)0);
    return VAR_6;
   }
   if (!VAR_3) {




    FUNC_10("out of space");
    FUNC_7(&VAR_4->space_lock);
    FUNC_0(VAR_4);
    FUNC_8(&VAR_4->space_lock);
    FUNC_1(VAR_4);
   }

   VAR_6 = 0;
   break;
  }
  VAR_9++;
  VAR_5 -= VAR_8;
  VAR_7 = FUNC_3(VAR_4, VAR_5);
  FUNC_2("%d znodes remaining, need %d LEBs, have %d", VAR_5,
         VAR_7, VAR_4->ileb_cnt);
 } while (VAR_7 > VAR_4->ileb_cnt);

 *VAR_9 = -1;
 return 0;
}
