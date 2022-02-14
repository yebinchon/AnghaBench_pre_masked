
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct c_fileinfo {int time; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,...) ;
 struct c_fileinfo* FUNC_1 (int ) ;
 int FUNC_2 () ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (int ,int ,int ) ;
 int VAR_5 ;

void
FUNC_5 (void)
{
  struct c_fileinfo *VAR_6 = FUNC_1 (VAR_4);
  int VAR_7 = FUNC_2 ();
  VAR_6->time += VAR_7 - VAR_0;

  FUNC_0 (VAR_5, "\n******\n");
  FUNC_3 ("header files (total)", VAR_3);
  FUNC_3 ("main file (total)", VAR_7 - VAR_0);
  FUNC_0 (VAR_5, "ratio = %g : 1\n",
    (double) VAR_3 / (double) (VAR_7 - VAR_0));
  FUNC_0 (VAR_5, "\n******\n");

  FUNC_4 (VAR_2, VAR_1, 0);
}
