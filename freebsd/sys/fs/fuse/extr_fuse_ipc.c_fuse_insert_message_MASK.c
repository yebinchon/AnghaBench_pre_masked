
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct fuse_ticket {int tk_flag; TYPE_1__* tk_data; } ;
struct TYPE_5__ {int si_note; } ;
struct TYPE_4__ {int ms_mtx; TYPE_2__ ks_rsel; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct fuse_ticket*) ;
 int FUNC_5 (struct fuse_ticket*) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (TYPE_2__*,scalar_t__) ;
 int FUNC_8 (TYPE_1__*) ;

void
FUNC_9(struct fuse_ticket *VAR_2, bool VAR_3)
{
 if (VAR_2->tk_flag & VAR_0) {
  FUNC_6("FUSE: ticket reused without being refreshed");
 }
 VAR_2->tk_flag |= VAR_0;

 if (FUNC_1(VAR_2->tk_data)) {
  return;
 }
 FUNC_2(VAR_2->tk_data->ms_mtx);
 if (VAR_3)
  FUNC_5(VAR_2);
 else
  FUNC_4(VAR_2);
 FUNC_8(VAR_2->tk_data);
 FUNC_7(&VAR_2->tk_data->ks_rsel, VAR_1 + 1);
 FUNC_0(&VAR_2->tk_data->ks_rsel.si_note, 0);
 FUNC_3(VAR_2->tk_data->ms_mtx);
}
