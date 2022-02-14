
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int ;
struct g_bde_work {int so; TYPE_1__* softc; } ;
struct g_bde_sector {int malloc; int size; int ref; int state; int offset; struct g_bde_work* owner; TYPE_1__* softc; int * data; } ;
struct TYPE_2__ {int nsect; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct g_bde_sector*,int ) ;
 int VAR_4 ;
 void* FUNC_1 (int,int ,int) ;

__attribute__((used)) static struct g_bde_sector *
FUNC_2(struct g_bde_work *VAR_5, u_int VAR_6)
{
 struct g_bde_sector *VAR_7;

 VAR_7 = FUNC_1(sizeof *VAR_7, VAR_1, VAR_2 | VAR_3);
 if (VAR_7 == ((void*)0))
  return (VAR_7);
 if (VAR_6 > 0) {
  VAR_7->data = FUNC_1(VAR_6, VAR_1, VAR_2 | VAR_3);
  if (VAR_7->data == ((void*)0)) {
   FUNC_0(VAR_7, VAR_1);
   return (((void*)0));
  }
  VAR_7->malloc = 1;
 }
 VAR_4++;
 VAR_5->softc->nsect++;
 VAR_7->size = VAR_6;
 VAR_7->softc = VAR_5->softc;
 VAR_7->ref = 1;
 VAR_7->owner = VAR_5;
 VAR_7->offset = VAR_5->so;
 VAR_7->state = VAR_0;
 return (VAR_7);
}
