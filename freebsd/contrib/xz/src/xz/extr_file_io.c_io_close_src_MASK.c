
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int src_fd; int src_st; int src_name; } ;
typedef TYPE_1__ file_pair ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int VAR_2 ;
 int FUNC_3 (int,int ,int ) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_6 (int ) ;

__attribute__((used)) static void
FUNC_7(file_pair *VAR_6, bool VAR_7)
{

 if (VAR_4) {
  FUNC_1(VAR_6->src_fd == VAR_1);

  VAR_4 = 0;

  if (FUNC_3(VAR_1, VAR_0, VAR_5) == -1)
   FUNC_5(FUNC_0("Error restoring the status flags "
     "to standard input: %s"),
     FUNC_6(VAR_2));
 }


 if (VAR_6->src_fd != VAR_1 && VAR_6->src_fd != -1) {
  (void)FUNC_2(VAR_6->src_fd);

  if (VAR_7 && !VAR_3)
   FUNC_4(VAR_6->src_name, &VAR_6->src_st);
 }

 return;
}
