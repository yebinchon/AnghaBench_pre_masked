
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ptid_t ;
typedef int pid_t ;
typedef enum target_signal { ____Placeholder_target_signal } target_signal ;
typedef int caddr_t ;
typedef int ULONGEST ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,int,int ,int ) ;
 int FUNC_3 (int ,int ,int*) ;
 int FUNC_4 (int ,int ,int) ;
 int FUNC_5 (int) ;

void
FUNC_6 (ptid_t VAR_5, int VAR_6, enum target_signal VAR_7)
{
  pid_t VAR_8 = FUNC_1 (VAR_5);
  int VAR_9 = VAR_2;

  if (VAR_8 == -1)



    VAR_8 = FUNC_1 (VAR_4);

  if (!VAR_6)
    {
      ULONGEST VAR_10;
      FUNC_3 (VAR_3, VAR_0,
         &VAR_10);
      if (VAR_10 & 0x0100)
 FUNC_4 (VAR_3, VAR_0,
     VAR_10 & ~0x0100);

      VAR_9 = VAR_1;
    }




  if (FUNC_2 (VAR_9, VAR_8, (caddr_t) 1,
       FUNC_5 (VAR_7)) == -1)
    FUNC_0 ("ptrace");
}
