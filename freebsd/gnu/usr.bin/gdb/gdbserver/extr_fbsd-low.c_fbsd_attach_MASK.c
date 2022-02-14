
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct process_info {scalar_t__ stop_expected; } ;


 int VAR_0 ;
 int FUNC_0 (int,int) ;
 scalar_t__ FUNC_1 (int *,int) ;

int
FUNC_2 (int VAR_1)
{
  struct process_info *VAR_2;

  FUNC_0 (VAR_1, VAR_1);


  VAR_2 = (struct process_info *) FUNC_1 (&VAR_0, VAR_1);
  VAR_2->stop_expected = 0;

  return 0;
}
