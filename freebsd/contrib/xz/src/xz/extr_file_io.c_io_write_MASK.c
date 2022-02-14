
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int u8; } ;
typedef TYPE_1__ io_buf ;
struct TYPE_8__ {scalar_t__ dest_pending_sparse; int dest_name; int dest_fd; scalar_t__ dest_try_sparse; } ;
typedef TYPE_2__ file_pair ;


 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int) ;
 int VAR_2 ;
 int FUNC_2 (TYPE_2__*,int ,size_t) ;
 scalar_t__ FUNC_3 (TYPE_1__ const*) ;
 int FUNC_4 (int ,scalar_t__,int ) ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (int ) ;

extern bool
FUNC_7(file_pair *VAR_3, const io_buf *VAR_4, size_t VAR_5)
{
 FUNC_1(VAR_5 <= VAR_0);

 if (VAR_3->dest_try_sparse) {
  if (VAR_5 == VAR_0) {
   if (FUNC_3(VAR_4)) {
    VAR_3->dest_pending_sparse += VAR_5;
    return 0;
   }
  } else if (VAR_5 == 0) {
   return 0;
  }



  if (VAR_3->dest_pending_sparse > 0) {
   if (FUNC_4(VAR_3->dest_fd, VAR_3->dest_pending_sparse,
     VAR_1) == -1) {
    FUNC_5(FUNC_0("%s: Seeking failed when "
      "trying to create a sparse "
      "file: %s"), VAR_3->dest_name,
      FUNC_6(VAR_2));
    return 1;
   }

   VAR_3->dest_pending_sparse = 0;
  }
 }

 return FUNC_2(VAR_3, VAR_4->u8, VAR_5);
}
