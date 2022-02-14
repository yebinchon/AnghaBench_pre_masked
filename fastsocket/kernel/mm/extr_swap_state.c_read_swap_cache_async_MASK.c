
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int val; } ;
typedef TYPE_1__ swp_entry_t ;
struct vm_area_struct {int dummy; } ;
struct page {int dummy; } ;
typedef int gfp_t ;


 int FUNC_0 (struct page*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct page*) ;
 int FUNC_2 (struct page*,TYPE_1__) ;
 int FUNC_3 (struct page*) ;
 int FUNC_4 (struct page*) ;
 struct page* FUNC_5 (int,struct vm_area_struct*,unsigned long) ;
 int FUNC_6 () ;
 struct page* FUNC_7 (int *,int ) ;
 scalar_t__ FUNC_8 (int) ;
 int FUNC_9 (struct page*) ;
 int FUNC_10 (struct page*) ;
 int FUNC_11 (int) ;
 int FUNC_12 () ;
 int FUNC_13 (struct page*) ;
 int FUNC_14 (TYPE_1__,int *) ;
 int FUNC_15 (TYPE_1__) ;
 int VAR_3 ;

struct page *FUNC_16(swp_entry_t VAR_4, gfp_t VAR_5,
   struct vm_area_struct *VAR_6, unsigned long VAR_7)
{
 struct page *VAR_8, *VAR_9 = ((void*)0);
 int VAR_10;

 do {





  VAR_8 = FUNC_7(&VAR_3, VAR_4.val);
  if (VAR_8)
   break;




  if (!VAR_9) {
   VAR_9 = FUNC_5(VAR_5, VAR_6, VAR_7);
   if (!VAR_9)
    break;
  }




  VAR_10 = FUNC_11(VAR_5 & VAR_2);
  if (VAR_10)
   break;




  VAR_10 = FUNC_15(VAR_4);
  if (VAR_10 == -VAR_0) {
   FUNC_12();
   FUNC_6();
   continue;
  }
  if (VAR_10) {
   FUNC_12();
   break;
  }


  FUNC_4(VAR_9);
  FUNC_1(VAR_9);
  VAR_10 = FUNC_2(VAR_9, VAR_4);
  if (FUNC_8(!VAR_10)) {
   FUNC_12();



   FUNC_9(VAR_9);
   FUNC_13(VAR_9);
   return VAR_9;
  }
  FUNC_12();
  FUNC_0(VAR_9);
  FUNC_3(VAR_9);




  FUNC_14(VAR_4, ((void*)0));
 } while (VAR_10 != -VAR_1);

 if (VAR_9)
  FUNC_10(VAR_9);
 return VAR_8;
}
