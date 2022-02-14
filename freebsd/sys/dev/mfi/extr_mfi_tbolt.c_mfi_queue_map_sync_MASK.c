
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mfi_softc {int mfi_map_sync_task; int mfi_io_lock; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int ,int *) ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_2(struct mfi_softc *VAR_2)
{
 FUNC_0(&VAR_2->mfi_io_lock, VAR_0);
 FUNC_1(VAR_1, &VAR_2->mfi_map_sync_task);
}
