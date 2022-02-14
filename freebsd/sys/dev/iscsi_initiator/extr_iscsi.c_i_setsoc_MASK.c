
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_5__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct thread {int dummy; } ;
struct TYPE_6__ {struct thread* td; TYPE_5__* fp; int * soc; } ;
typedef TYPE_1__ isc_session_t ;
typedef int cap_rights_t ;
struct TYPE_7__ {int * f_data; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (struct thread*,int,int ,TYPE_5__**,int *,int *) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static int
FUNC_4(isc_session_t *VAR_1, int VAR_2, struct thread *VAR_3)
{
     cap_rights_t VAR_4;
     int VAR_5 = 0;

     if(VAR_1->soc != ((void*)0))
   FUNC_3(VAR_1);

     VAR_5 = FUNC_1(VAR_3, VAR_2, FUNC_0(&VAR_4, VAR_0),
      &VAR_1->fp, ((void*)0), ((void*)0));
     if(VAR_5)
   return VAR_5;

     VAR_1->soc = VAR_1->fp->f_data;
     VAR_1->td = VAR_3;
     FUNC_2(VAR_1);

     return VAR_5;
}
