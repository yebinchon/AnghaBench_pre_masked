
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tidinfo {int state; } ;
typedef int ptid_t ;


 struct tidinfo* FUNC_0 (int,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,int,char*,int) ;

char *
FUNC_4 (ptid_t VAR_0)
{
  static char VAR_1[1024];
  int VAR_2, VAR_3, VAR_4;
  struct tidinfo *VAR_5;

  VAR_2 = FUNC_1 (VAR_0);
  VAR_3 = FUNC_2 (VAR_0);

  VAR_4 = FUNC_3 (VAR_1, 1023, "process %d", VAR_2);







  return VAR_1;
}
