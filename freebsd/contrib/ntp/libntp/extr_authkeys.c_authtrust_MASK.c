
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_long ;
struct TYPE_4__ {void* lifetime; int flags; } ;
typedef TYPE_1__ symkey ;
typedef int keyid_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int,int ,int *,int *) ;
 TYPE_1__* FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 void* VAR_1 ;
 int FUNC_3 (TYPE_1__*) ;

void
FUNC_4(
 keyid_t VAR_2,
 u_long VAR_3
 )
{
 symkey * VAR_4;
 u_long VAR_5;






 VAR_4 = FUNC_1(VAR_2);
 if (!VAR_3 && VAR_4 == ((void*)0))
  return;






 if (VAR_4 != ((void*)0)) {






  FUNC_2(VAR_2);
  if (VAR_3 > 0) {
   VAR_4->flags |= VAR_0;
   if (VAR_3 > 1)
    VAR_4->lifetime = VAR_1 + VAR_3;
   else
    VAR_4->lifetime = 0;
  } else {
   FUNC_3(VAR_4);
  }
  return;
 }





 if (VAR_3 > 1) {
  VAR_5 = VAR_1 + VAR_3;
 } else {
  VAR_5 = 0;
 }
 FUNC_0(VAR_2, VAR_0, 0, VAR_5, 0, ((void*)0), ((void*)0));
}
