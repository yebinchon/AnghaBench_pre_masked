
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int flags; int * fp; int * soc; int td; int io_mtx; } ;
typedef TYPE_1__ isc_session_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,int ) ;
 int VAR_6 ;
 int FUNC_2 (int **,int *,int,char*,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int,char*,...) ;
 int FUNC_6 (int *,int ) ;

void
FUNC_7(isc_session_t *VAR_7)
{
     int VAR_8;

     FUNC_0(8);
     FUNC_5(3, "sp=%p sp->soc=%p", VAR_7, VAR_7? VAR_7->soc: 0);
     FUNC_3(&VAR_7->io_mtx);
     VAR_7->flags &= ~VAR_2;
     FUNC_2(&VAR_7->soc, &VAR_7->io_mtx, VAR_4|VAR_3, "isc_stpc", 5*VAR_6);

     FUNC_6(VAR_7->soc, VAR_5);

     FUNC_3(&VAR_7->io_mtx);
     FUNC_5(3, "soshutdown");
     VAR_7->flags &= ~VAR_0;
     VAR_8 = 2;
     while(VAR_8-- && (VAR_7->flags & VAR_1)) {
   FUNC_5(3, "waiting n=%d... flags=%x", VAR_8, VAR_7->flags);
   FUNC_2(&VAR_7->soc, &VAR_7->io_mtx, VAR_4, "isc_stpc", 5*VAR_6);
     }
     FUNC_4(&VAR_7->io_mtx);

     if(VAR_7->fp != ((void*)0))
   FUNC_1(VAR_7->fp, VAR_7->td);
     VAR_7->soc = ((void*)0);
     VAR_7->fp = ((void*)0);

     FUNC_5(3, "done");
}
