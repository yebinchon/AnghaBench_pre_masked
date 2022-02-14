
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pred_data {int special; int* codes; int allows_non_const; int allows_non_lvalue; int singleton; int name; } ;
typedef int rtx ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_2 ;
 char VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (struct pred_data*) ;
 int FUNC_5 (int ,char*) ;
 struct pred_data* FUNC_6 (int,int) ;

__attribute__((used)) static void
FUNC_7 (rtx VAR_11)
{
  struct pred_data *VAR_12 = FUNC_6 (sizeof (struct pred_data), 1);
  char VAR_13[VAR_4];
  bool VAR_14 = 0;
  int VAR_15;

  VAR_12->name = FUNC_3 (VAR_11, 0);
  if (FUNC_0 (VAR_11) == VAR_1)
    VAR_12->special = 1;

  FUNC_5 (FUNC_2 (VAR_11, 1), VAR_13);

  for (VAR_15 = 0; VAR_15 < VAR_4; VAR_15++)
    if (VAR_13[VAR_15] != VAR_3)
      {
 VAR_12->codes[VAR_15] = 1;
 if (FUNC_1 (VAR_15) != VAR_7)
   VAR_12->allows_non_const = 1;
 if (VAR_15 != VAR_6
     && VAR_15 != VAR_9
     && VAR_15 != VAR_2
     && VAR_15 != VAR_0
     && VAR_15 != VAR_5
     && VAR_15 != VAR_8)
   VAR_12->allows_non_lvalue = 1;

 if (VAR_14)
   VAR_12->singleton = VAR_10;
 else
   {
     VAR_12->singleton = VAR_15;
     VAR_14 = 1;
   }
      }
  FUNC_4 (VAR_12);
}
