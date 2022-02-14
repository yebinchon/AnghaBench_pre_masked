
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ type; } ;
struct TYPE_9__ {int * opts; } ;
typedef TYPE_1__ SCR ;


 scalar_t__ FUNC_0 (int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int * FUNC_1 (TYPE_1__*,int) ;
 int VAR_7 ;
 int * FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (int *,int *,int) ;
 int FUNC_4 (TYPE_1__*,int ,int *) ;
 scalar_t__ FUNC_5 (TYPE_1__*,int,int,int *,int ) ;
 TYPE_4__* VAR_8 ;

int
FUNC_6(
 SCR *VAR_9,
 SCR *VAR_10)
{
 int VAR_11, VAR_12;


 FUNC_3(VAR_10->opts, VAR_9->opts, sizeof(VAR_9->opts));


 for (VAR_11 = VAR_12 = 0; VAR_11 < VAR_7; ++VAR_11) {
  if (VAR_8[VAR_11].type != VAR_2 ||
      FUNC_0(&VAR_10->opts[VAR_11], VAR_1))
   continue;





  if (VAR_12 || FUNC_2(VAR_10, VAR_11) == ((void*)0)) {
   FUNC_5(VAR_10, VAR_11, VAR_4 | VAR_5, ((void*)0), 0);
   FUNC_5(VAR_10, VAR_11, VAR_3 | VAR_4 | VAR_5, ((void*)0), 0);
   continue;
  }


  if (FUNC_5(VAR_10, VAR_11, VAR_4 | VAR_6, FUNC_2(VAR_10, VAR_11), 0)) {
   FUNC_5(VAR_10, VAR_11, VAR_3 | VAR_4 | VAR_5, ((void*)0), 0);
   goto nomem;
  }


  if (FUNC_1(VAR_10, VAR_11) != ((void*)0) && FUNC_5(VAR_10, VAR_11,
      VAR_3 | VAR_4 | VAR_6, FUNC_1(VAR_10, VAR_11), 0)) {
nomem: FUNC_4(VAR_9, VAR_0, ((void*)0));
   VAR_12 = 1;
  }
 }
 return (VAR_12);
}
