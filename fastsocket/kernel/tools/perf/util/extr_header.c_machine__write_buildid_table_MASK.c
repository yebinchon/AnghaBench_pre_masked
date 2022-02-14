
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct machine {int pid; int user_dsos; int kernel_dsos; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int ,int ,int) ;
 int FUNC_1 (struct machine*) ;

__attribute__((used)) static int FUNC_2(struct machine *VAR_4, int VAR_5)
{
 int VAR_6;
 u16 VAR_7 = VAR_2,
     VAR_8 = VAR_3;

 if (!FUNC_1(VAR_4)) {
  VAR_7 = VAR_0;
  VAR_8 = VAR_1;
 }

 VAR_6 = FUNC_0(&VAR_4->kernel_dsos, VAR_4->pid,
       VAR_7, VAR_5);
 if (VAR_6 == 0)
  VAR_6 = FUNC_0(&VAR_4->user_dsos,
        VAR_4->pid, VAR_8, VAR_5);
 return VAR_6;
}
