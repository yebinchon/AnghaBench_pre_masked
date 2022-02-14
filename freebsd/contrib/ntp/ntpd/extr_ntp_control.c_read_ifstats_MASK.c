
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u_int ;
struct recvbuf {int dummy; } ;
struct TYPE_4__ {scalar_t__ ifnum; struct TYPE_4__* elink; } ;
typedef TYPE_1__ endpt ;


 int FUNC_0 (int ) ;
 TYPE_1__* VAR_0 ;
 int FUNC_1 (TYPE_1__*,scalar_t__) ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static void
FUNC_2(
 struct recvbuf * VAR_2
 )
{
 u_int VAR_3;
 endpt * VAR_4;





 for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++) {
  for (VAR_4 = VAR_0; VAR_4 != ((void*)0); VAR_4 = VAR_4->elink)
   if (VAR_3 == VAR_4->ifnum)
    break;
  if (((void*)0) == VAR_4)
   continue;

  FUNC_1(VAR_4, VAR_3);
 }
 FUNC_0(0);
}
