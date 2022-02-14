
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_int ;
struct TYPE_5__ {int flags; int pgno; } ;
struct TYPE_4__ {int pageput; } ;
typedef TYPE_1__ MPOOL ;
typedef TYPE_2__ BKT ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,char*,int) ;
 int VAR_3 ;

int
FUNC_2(MPOOL *VAR_4, void *VAR_5, u_int VAR_6)
{
 BKT *VAR_7;




 VAR_7 = (BKT *)((char *)VAR_5 - sizeof(BKT));







 VAR_7->flags &= ~VAR_1;
 if (VAR_6 & VAR_0)
  VAR_7->flags |= VAR_6 & VAR_0;
 return (VAR_2);
}
