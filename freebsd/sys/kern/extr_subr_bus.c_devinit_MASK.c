
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int si_note; } ;
struct TYPE_4__ {int mtx; TYPE_1__ sel; int devq; int cv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int VAR_3 ;
 int FUNC_1 (int *,char*) ;
 int VAR_4 ;
 int FUNC_2 () ;
 int VAR_5 ;
 TYPE_2__ VAR_6 ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int ,int *,int ,int *,int ,int ,int,char*) ;
 int FUNC_5 (int *,char*,char*,int ) ;

__attribute__((used)) static void
FUNC_6(void)
{
 VAR_5 = FUNC_4(VAR_1, &VAR_4, 0, ((void*)0),
     VAR_3, VAR_0, 0600, "devctl");
 FUNC_5(&VAR_6.mtx, "dev mtx", "devd", VAR_2);
 FUNC_1(&VAR_6.cv, "dev cv");
 FUNC_0(&VAR_6.devq);
 FUNC_3(&VAR_6.sel.si_note, &VAR_6.mtx);
 FUNC_2();
}
