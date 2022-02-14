
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mfi_softc {int mfi_evt_task; int mfi_evt_queue; int mfi_io_lock; } ;
struct mfi_evt_queue_elm {int detail; } ;
struct mfi_evt_detail {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,struct mfi_evt_queue_elm*,int ) ;
 int VAR_4 ;
 struct mfi_evt_queue_elm* FUNC_1 (int,int ,int) ;
 int FUNC_2 (int *,struct mfi_evt_detail*,int) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int ,int *) ;
 int VAR_5 ;

__attribute__((used)) static void
FUNC_5(struct mfi_softc *VAR_6, struct mfi_evt_detail *VAR_7)
{
 struct mfi_evt_queue_elm *VAR_8;

 FUNC_3(&VAR_6->mfi_io_lock, VAR_0);
 VAR_8 = FUNC_1(sizeof(*VAR_8), VAR_1, VAR_2|VAR_3);
 if (VAR_8 == ((void*)0))
  return;
 FUNC_2(&VAR_8->detail, VAR_7, sizeof(*VAR_7));
 FUNC_0(&VAR_6->mfi_evt_queue, VAR_8, VAR_4);
 FUNC_4(VAR_5, &VAR_6->mfi_evt_task);
}
