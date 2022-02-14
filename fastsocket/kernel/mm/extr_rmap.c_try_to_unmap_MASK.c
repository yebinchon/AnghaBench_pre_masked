
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
typedef enum ttu_flags { ____Placeholder_ttu_flags } ttu_flags ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct page*) ;
 int FUNC_2 (struct page*) ;
 int FUNC_3 (struct page*) ;
 int FUNC_4 (struct page*) ;
 scalar_t__ FUNC_5 (struct page*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_6 (int) ;
 int FUNC_7 (struct page*) ;
 int FUNC_8 (struct page*,int) ;
 int FUNC_9 (struct page*,int) ;
 int FUNC_10 (struct page*,int) ;
 scalar_t__ FUNC_11 (int ) ;

int FUNC_12(struct page *VAR_2, enum ttu_flags VAR_3)
{
 int VAR_4;

 FUNC_0(!FUNC_4(VAR_2));
 FUNC_6(!FUNC_2(VAR_2) && FUNC_5(VAR_2));

 if (FUNC_11(FUNC_3(VAR_2)))
  VAR_4 = FUNC_10(VAR_2, VAR_3);
 else if (FUNC_1(VAR_2))
  VAR_4 = FUNC_8(VAR_2, VAR_3);
 else
  VAR_4 = FUNC_9(VAR_2, VAR_3);
 if (VAR_4 != VAR_0 && !FUNC_7(VAR_2))
  VAR_4 = VAR_1;
 return VAR_4;
}
