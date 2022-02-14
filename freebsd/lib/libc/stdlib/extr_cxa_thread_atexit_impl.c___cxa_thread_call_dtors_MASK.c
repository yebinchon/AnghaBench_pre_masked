
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int FUNC_3 (int ,char*,int ,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

void
FUNC_4(void)
{
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_0 && !FUNC_0(&VAR_1); VAR_5++)
  FUNC_2(VAR_3);

 if (!FUNC_0(&VAR_1)) {
  FUNC_3(VAR_2, "Thread %d is exiting with more "
      "thread-specific dtors created after %d iterations "
      "of destructor calls\n",
      FUNC_1(), VAR_5);
  FUNC_2(VAR_4);
 }
}
