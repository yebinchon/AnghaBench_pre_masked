
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int si_note; } ;
struct vpollinfo {int vpi_lock; TYPE_1__ vpi_selinfo; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,struct vpollinfo*) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_3(struct vpollinfo *VAR_1)
{

 FUNC_0(&VAR_1->vpi_selinfo.si_note);
 FUNC_1(&VAR_1->vpi_lock);
 FUNC_2(VAR_0, VAR_1);
}
