
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct page {int dummy; } ;
struct address_space {TYPE_1__* a_ops; } ;
typedef int isolate_mode_t ;
struct TYPE_2__ {int migratepage; } ;


 int FUNC_0 (struct page*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct page*) ;
 scalar_t__ FUNC_2 (struct page*) ;
 int FUNC_3 (struct page*) ;
 scalar_t__ FUNC_4 (struct page*) ;
 scalar_t__ FUNC_5 (struct page*) ;
 int FUNC_6 (struct page*) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (struct page*) ;
 struct address_space* FUNC_9 (struct page*) ;

int FUNC_10(struct page *VAR_6, isolate_mode_t VAR_7, int VAR_8)
{
 bool VAR_9;
 int VAR_10 = -VAR_1;


 if (!FUNC_3(VAR_6))
  return VAR_10;

 VAR_9 = (VAR_7 & (VAR_2|VAR_5)) ==
  (VAR_2|VAR_5);






 if (!VAR_9 && !FUNC_1(VAR_6) != !(VAR_7 & VAR_2))
  return VAR_10;

 if (!VAR_9 && !!FUNC_8(VAR_6) != VAR_8)
  return VAR_10;






 if (FUNC_4(VAR_6))
  return VAR_10;

 VAR_10 = -VAR_0;
 if (VAR_7 & (VAR_4|VAR_3)) {

  if (FUNC_5(VAR_6))
   return VAR_10;

  if (FUNC_2(VAR_6)) {
   struct address_space *VAR_11;


   if (VAR_7 & VAR_4)
    return VAR_10;






   VAR_11 = FUNC_9(VAR_6);
   if (VAR_11 && !VAR_11->a_ops->migratepage)
    return VAR_10;
  }
 }

 if (FUNC_7(FUNC_6(VAR_6))) {





  FUNC_0(VAR_6);
  VAR_10 = 0;
 }

 return VAR_10;
}
