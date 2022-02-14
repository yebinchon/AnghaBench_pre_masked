
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef size_t u_int ;
struct refclockio {scalar_t__ fd; TYPE_1__* srcclock; struct refclockio* next; } ;
struct asyncio_reader {scalar_t__ fd; int (* receiver ) (struct asyncio_reader*) ;struct asyncio_reader* link; } ;
typedef int l_fp ;
typedef int fd_set ;
struct TYPE_8__ {scalar_t__ fd; int flags; scalar_t__ bfd; struct TYPE_8__* elink; } ;
typedef TYPE_2__ endpt ;
struct TYPE_9__ {int resp_read_pipe; int resp_ready_seen; } ;
typedef TYPE_3__ blocking_child ;
struct TYPE_7__ {int srcadr; } ;
typedef scalar_t__ SOCKET ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__,int const*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,int *) ;
 int VAR_4 ;
 struct asyncio_reader* VAR_5 ;
 int VAR_6 ;
 TYPE_3__** VAR_7 ;
 size_t VAR_8 ;
 int FUNC_2 (int *,char*,int,int *) ;
 int VAR_9 ;
 TYPE_2__* VAR_10 ;
 int VAR_11 ;
 int FUNC_3 (int *) ;
 int VAR_12 ;
 char const* FUNC_4 (int *,int) ;
 int FUNC_5 (scalar_t__,int ) ;
 int FUNC_6 (int ,char*,char const*) ;
 int FUNC_7 (scalar_t__,TYPE_2__*,int ) ;
 int FUNC_8 (scalar_t__,struct refclockio*,int ) ;
 struct refclockio* VAR_13 ;
 char* FUNC_9 (int *) ;
 int FUNC_10 (struct asyncio_reader*) ;

__attribute__((used)) static void
FUNC_11(
 const l_fp * VAR_14,
 const fd_set * VAR_15
 )
{
 int VAR_16;
 u_int VAR_17;
 int VAR_18;
 SOCKET VAR_19;
 blocking_child *VAR_20;
 l_fp VAR_21;




 endpt * VAR_22;
 ++VAR_12;
 VAR_21 = *VAR_14;
 for (VAR_22 = VAR_10; VAR_22 != ((void*)0); VAR_22 = VAR_22->elink) {
  for (VAR_18 = 0; VAR_18 < 2; VAR_18++) {
   if (!VAR_18) {
    VAR_19 = VAR_22->fd;
   } else {
    if (!(VAR_22->flags & VAR_1))
     break;
    VAR_19 = VAR_22->bfd;
   }
   if (VAR_19 < 0)
    continue;
   if (FUNC_0(VAR_19, VAR_15))
    do {
     VAR_16 = FUNC_7(
       VAR_19, VAR_22, VAR_21);
    } while (VAR_16 > 0);

  }
 }
 for (VAR_17 = 0; VAR_17 < VAR_8; VAR_17++) {
  VAR_20 = VAR_7[VAR_17];
  if (((void*)0) == VAR_20 || -1 == VAR_20->resp_read_pipe)
   continue;
  if (FUNC_0(VAR_20->resp_read_pipe, VAR_15)) {
   ++VAR_20->resp_ready_seen;
   ++VAR_6;
  }
 }
}
