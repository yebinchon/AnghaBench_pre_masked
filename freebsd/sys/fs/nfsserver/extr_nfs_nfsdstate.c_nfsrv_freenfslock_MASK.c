
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * le_prev; } ;
struct nfslock {TYPE_1__ lo_lckfile; } ;
struct TYPE_4__ {int srvlocks; } ;


 int FUNC_0 (struct nfslock*,int ) ;
 int VAR_0 ;
 int FUNC_1 (struct nfslock*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_2__ VAR_4 ;

__attribute__((used)) static void
FUNC_2(struct nfslock *VAR_5)
{

 if (VAR_5->lo_lckfile.le_prev != ((void*)0)) {
  FUNC_0(VAR_5, VAR_1);
  VAR_4--;
  VAR_3--;
 }
 FUNC_0(VAR_5, VAR_2);
 FUNC_1(VAR_5, VAR_0);
}
