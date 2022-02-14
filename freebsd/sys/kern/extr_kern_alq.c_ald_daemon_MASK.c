
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct alq {int dummy; } ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (struct alq*) ;
 int FUNC_3 (struct alq*) ;
 int FUNC_4 (int ,int ,int *,int ) ;
 int FUNC_5 (int ) ;
 struct alq* FUNC_6 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_7 (struct alq*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_8 (struct alq*) ;
 int VAR_8 ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int *,int *,int ,char*,int ) ;
 int VAR_9 ;
 int FUNC_11 (struct alq*) ;

__attribute__((used)) static void
FUNC_12(void)
{
 int VAR_10;
 struct alq *VAR_11;

 VAR_7 = FUNC_5(VAR_4);

 VAR_8 = FUNC_4(VAR_9,
     VAR_5, ((void*)0), VAR_1);

 FUNC_0();

 for (;;) {
  while ((VAR_11 = FUNC_6(&VAR_2)) == ((void*)0) &&
      !VAR_6)
   FUNC_10(&VAR_2, &VAR_3, VAR_0, "aldslp", 0);


  if (VAR_6 && VAR_11 == ((void*)0)) {
   FUNC_1();
   break;
  }

  FUNC_2(VAR_11);
  FUNC_7(VAR_11);
  FUNC_1();
  VAR_10 = FUNC_8(VAR_11);
  FUNC_3(VAR_11);
  if (VAR_10)
   FUNC_11(VAR_11);
  FUNC_0();
 }

 FUNC_9(0);
}
