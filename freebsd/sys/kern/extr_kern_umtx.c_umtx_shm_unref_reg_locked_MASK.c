
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {size_t hash; } ;
struct umtx_shm_reg {scalar_t__ ushm_refcnt; int ushm_flags; TYPE_1__ ushm_key; } ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (struct umtx_shm_reg*,int ) ;
 int VAR_0 ;
 int FUNC_2 (int *,struct umtx_shm_reg*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int *,int ) ;
 int VAR_3 ;
 int * VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static bool
FUNC_4(struct umtx_shm_reg *VAR_7, bool VAR_8)
{
 bool VAR_9;

 FUNC_3(&VAR_3, VAR_0);
 FUNC_0(VAR_7->ushm_refcnt > 0, ("ushm_reg %p refcnt 0", VAR_7));
 VAR_7->ushm_refcnt--;
 VAR_9 = VAR_7->ushm_refcnt == 0;
 if (VAR_9 || VAR_8) {
  if ((VAR_7->ushm_flags & VAR_2) != 0) {
   FUNC_2(&VAR_4[VAR_7->ushm_key.hash],
       VAR_7, VAR_6);
   VAR_7->ushm_flags &= ~VAR_2;
  }
  if ((VAR_7->ushm_flags & VAR_1) != 0) {
   FUNC_1(VAR_7, VAR_5);
   VAR_7->ushm_flags &= ~VAR_1;
  }
 }
 return (VAR_9);
}
