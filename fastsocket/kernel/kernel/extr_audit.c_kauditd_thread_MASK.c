
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int *) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_3 (struct sk_buff*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_4 (struct sk_buff*) ;
 int VAR_8 ;
 int FUNC_5 () ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 () ;
 int FUNC_8 (int ) ;
 int FUNC_9 () ;
 struct sk_buff* FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 () ;
 scalar_t__ FUNC_13 (struct sk_buff*) ;
 int VAR_9 ;
 int FUNC_14 (int *) ;

__attribute__((used)) static int FUNC_15(void *VAR_10)
{
 struct sk_buff *VAR_11;

 FUNC_9();
 while (!FUNC_5()) {
  if (VAR_3 && VAR_4) {
   VAR_11 = FUNC_10(&VAR_5);
   if (FUNC_13(VAR_11)) {
    while (VAR_11 && VAR_4) {
     FUNC_4(VAR_11);
     VAR_11 = FUNC_10(&VAR_5);
    }
   }
  }

  VAR_11 = FUNC_10(&VAR_6);
  FUNC_14(&VAR_2);
  if (VAR_11) {
   if (VAR_4)
    FUNC_4(VAR_11);
   else
    FUNC_3(VAR_11);
  } else {
   FUNC_0(VAR_9, VAR_7);
   FUNC_8(VAR_0);
   FUNC_2(&VAR_8, &VAR_9);

   if (!FUNC_11(&VAR_6)) {
    FUNC_12();
    FUNC_7();
   }

   FUNC_1(VAR_1);
   FUNC_6(&VAR_8, &VAR_9);
  }
 }
 return 0;
}
