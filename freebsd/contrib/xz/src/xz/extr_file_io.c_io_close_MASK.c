
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef char uint8_t ;
struct TYPE_7__ {scalar_t__ dest_pending_sparse; int dest_fd; int dest_name; scalar_t__ dest_try_sparse; } ;
typedef TYPE_1__ file_pair ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (TYPE_1__*) ;
 scalar_t__ FUNC_4 (TYPE_1__*,char const*,int) ;
 int FUNC_5 (int,scalar_t__,int ) ;
 int FUNC_6 (int ,int ,int ) ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 (int ) ;

extern void
FUNC_10(file_pair *VAR_3, bool VAR_4)
{

 if (VAR_4 && VAR_3->dest_try_sparse
   && VAR_3->dest_pending_sparse > 0) {







  if (FUNC_5(VAR_3->dest_fd, VAR_3->dest_pending_sparse - 1,
    VAR_0) == -1) {
   FUNC_6(FUNC_0("%s: Seeking failed when trying "
     "to create a sparse file: %s"),
     VAR_3->dest_name, FUNC_9(VAR_2));
   VAR_4 = 0;
  } else {
   const uint8_t VAR_5[1] = { '\0' };
   if (FUNC_4(VAR_3, VAR_5, 1))
    VAR_4 = 0;
  }
 }

 FUNC_7();



 if (VAR_4 && VAR_3->dest_fd != -1 && VAR_3->dest_fd != VAR_1)
  FUNC_3(VAR_3);



 if (FUNC_1(VAR_3, VAR_4))
  VAR_4 = 0;




 FUNC_2(VAR_3, VAR_4);

 FUNC_8();

 return;
}
