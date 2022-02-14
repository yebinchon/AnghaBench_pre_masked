
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int xp_fd; } ;
typedef TYPE_1__ SVCXPRT ;


 int FUNC_0 (int,int *) ;
 int VAR_0 ;
 TYPE_1__** VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (TYPE_1__**,char,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

void
FUNC_7(SVCXPRT *VAR_5)
{
 int VAR_6;

 FUNC_1(VAR_5 != ((void*)0));

 VAR_6 = VAR_5->xp_fd;

 FUNC_6(&VAR_2);
 if (VAR_1 == ((void*)0)) {
  VAR_1 = (SVCXPRT **)
   FUNC_3((VAR_0 + 1) * sizeof(SVCXPRT *));
  if (VAR_1 == ((void*)0)) {
   FUNC_5(&VAR_2);
   return;
  }
  FUNC_4(VAR_1, '\0', (VAR_0 + 1) * sizeof(SVCXPRT *));
 }
 if (VAR_6 < VAR_0) {
  VAR_1[VAR_6] = VAR_5;
  FUNC_0(VAR_6, &VAR_3);
  VAR_4 = FUNC_2(VAR_4, VAR_6);
 } else if (VAR_6 == VAR_0)
  VAR_1[VAR_6] = VAR_5;
 FUNC_5(&VAR_2);
}
