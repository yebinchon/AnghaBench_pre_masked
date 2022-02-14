
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ bool_t ;
struct TYPE_4__ {int xp_fd; } ;
typedef TYPE_1__ SVCXPRT ;


 int FUNC_0 (int,int *) ;
 int VAR_0 ;
 TYPE_1__** VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static void
FUNC_4(SVCXPRT *VAR_5, bool_t VAR_6)
{
 int VAR_7;

 FUNC_1(VAR_5 != ((void*)0));

 VAR_7 = VAR_5->xp_fd;

 if (VAR_6)
  FUNC_3(&VAR_2);
 if ((VAR_7 < VAR_0) && (VAR_1[VAR_7] == VAR_5)) {
  VAR_1[VAR_7] = ((void*)0);
  FUNC_0(VAR_7, &VAR_3);
  if (VAR_7 >= VAR_4) {
   for (VAR_4--; VAR_4>=0; VAR_4--)
    if (VAR_1[VAR_4])
     break;
  }
 } else if ((VAR_7 == VAR_0) && (VAR_1[VAR_7] == VAR_5))
  VAR_1[VAR_7] = ((void*)0);
 if (VAR_6)
  FUNC_2(&VAR_2);
}
