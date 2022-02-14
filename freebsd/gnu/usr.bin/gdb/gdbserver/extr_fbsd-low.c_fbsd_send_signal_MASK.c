
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct process_info {int lwpid; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 struct process_info* FUNC_0 (int ) ;
 int FUNC_1 (int,int) ;

__attribute__((used)) static void
FUNC_2 (int VAR_2)
{
  extern int VAR_3;

  if (VAR_0 > 0)
    {
      struct process_info *VAR_4;

      VAR_4 = FUNC_0 (VAR_1);
      FUNC_1 (VAR_4->lwpid, VAR_2);
    }
  else
    FUNC_1 (VAR_3, VAR_2);
}
