
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct disklabel {int dummy; } ;
typedef int label ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 () ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int,char*) ;
 int FUNC_5 (int ) ;
 int * FUNC_6 (int ,char*) ;
 int FUNC_7 (int *,struct disklabel*) ;
 int FUNC_8 () ;
 struct disklabel VAR_1 ;
 int FUNC_9 (int ) ;
 int FUNC_10 (char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_11 (int ) ;
 int FUNC_12 (char*,int ) ;
 scalar_t__ FUNC_13 () ;

__attribute__((used)) static int
FUNC_14(void)
{
 int VAR_4, VAR_5;
 struct disklabel VAR_6;
 FILE *VAR_7;

 if ((VAR_5 = FUNC_9(VAR_3)) == -1 ||
     (VAR_7 = FUNC_4(VAR_5, "w")) == ((void*)0)) {
  FUNC_12("can't create %s", VAR_3);
  return (1);
 }
 FUNC_1(VAR_7, ((void*)0));
 FUNC_3(VAR_7);
 for (;;) {
  if (!FUNC_2())
   break;
  VAR_7 = FUNC_6(VAR_3, "r");
  if (VAR_7 == ((void*)0)) {
   FUNC_12("can't reopen %s for reading", VAR_3);
   break;
  }
  FUNC_0((char *)&VAR_6, sizeof(VAR_6));
  VAR_4 = FUNC_7(VAR_7, &VAR_6);
  FUNC_3(VAR_7);
  if (VAR_4) {
   VAR_1 = VAR_6;
   if (FUNC_13() == 0) {
    (void) FUNC_11(VAR_3);
    return (0);
   }
  }
  FUNC_10("re-edit the label? [y]: ");
  FUNC_5(VAR_2);
  VAR_4 = FUNC_8();
  if (VAR_4 != VAR_0 && VAR_4 != (int)'\n')
   while (FUNC_8() != (int)'\n')
    ;
  if (VAR_4 == (int)'n')
   break;
 }
 (void) FUNC_11(VAR_3);
 return (1);
}
