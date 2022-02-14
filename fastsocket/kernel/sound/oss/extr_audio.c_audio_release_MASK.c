
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct file {int dummy; } ;
struct coproc_operations {int owner; int devc; int (* close ) (int ,int ) ;} ;
struct TYPE_8__ {TYPE_3__* d; struct coproc_operations* coproc; TYPE_2__* dmap_in; TYPE_1__* dmap_out; } ;
struct TYPE_7__ {int owner; } ;
struct TYPE_6__ {int closing; } ;
struct TYPE_5__ {int closing; } ;


 int VAR_0 ;
 int FUNC_0 (int,int) ;
 int VAR_1 ;
 TYPE_4__** VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct file*) ;

void FUNC_5(int VAR_3, struct file *VAR_4)
{
 const struct coproc_operations *VAR_5;
 int VAR_6 = FUNC_4(VAR_4);

 VAR_3 = VAR_3 >> 4;







 VAR_2[VAR_3]->dmap_out->closing = 1;
 VAR_2[VAR_3]->dmap_in->closing = 1;





 if (VAR_6 & VAR_1)
  FUNC_3(VAR_3);

 if ( (VAR_5 = VAR_2[VAR_3]->coproc) != ((void*)0) ) {
  VAR_5->close(VAR_5->devc, VAR_0);
  FUNC_1(VAR_5->owner);
 }
 FUNC_0(VAR_3, VAR_6);

 FUNC_1(VAR_2[VAR_3]->d->owner);
}
