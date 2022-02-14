
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ sigev_notify; } ;
struct mqueue_inode_info {int * notify_owner; int notify_cookie; int notify_sock; TYPE_1__ notify; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static void FUNC_3(struct mqueue_inode_info *VAR_2)
{
 if (VAR_2->notify_owner != ((void*)0) &&
     VAR_2->notify.sigev_notify == VAR_1) {
  FUNC_2(VAR_2->notify_cookie, VAR_0);
  FUNC_0(VAR_2->notify_sock, VAR_2->notify_cookie);
 }
 FUNC_1(VAR_2->notify_owner);
 VAR_2->notify_owner = ((void*)0);
}
