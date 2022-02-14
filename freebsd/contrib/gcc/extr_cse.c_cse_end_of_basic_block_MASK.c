
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cse_basic_block_data {int path_size; int low_cuid; int high_cuid; int nsets; TYPE_1__* path; scalar_t__ last; } ;
typedef scalar_t__ rtx ;
struct TYPE_2__ {scalar_t__ status; scalar_t__ branch; } ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 int FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 scalar_t__ FUNC_8 (scalar_t__) ;
 int FUNC_9 (scalar_t__) ;
 scalar_t__ FUNC_10 (scalar_t__) ;
 scalar_t__ FUNC_11 (scalar_t__) ;
 int FUNC_12 (scalar_t__) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_13 (int ) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_14 (scalar_t__) ;
 scalar_t__ FUNC_15 (scalar_t__) ;
 int FUNC_16 (scalar_t__,scalar_t__) ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_17 (int ) ;
 scalar_t__ FUNC_18 (int ,int ) ;
 scalar_t__ FUNC_19 (scalar_t__,int ,int *) ;
 scalar_t__ VAR_9 ;
 scalar_t__ FUNC_20 (scalar_t__) ;

__attribute__((used)) static void
FUNC_21 (rtx VAR_10, struct cse_basic_block_data *VAR_11,
   int VAR_12, int VAR_13)
{
  rtx VAR_14 = VAR_10, VAR_15;
  int VAR_16 = 0;
  int VAR_17 = FUNC_4 (VAR_10), VAR_18 = FUNC_4 (VAR_10);
  rtx VAR_19 = FUNC_5 (VAR_10) ? VAR_10 : FUNC_20 (VAR_10);
  int VAR_20 = VAR_11->path_size;
  int VAR_21 = 0;
  int VAR_22;






  while (VAR_20 > 0)
    {
      if (VAR_11->path[VAR_20 - 1].status != VAR_4)
 {
   VAR_11->path[VAR_20 - 1].status = VAR_4;
   break;
 }
      else
 VAR_20--;
    }







  if (FUNC_3 (VAR_10) == VAR_6)
    VAR_12 = VAR_13 = 0;


  while (VAR_14 && !FUNC_10 (VAR_14))
    {



      if (FUNC_15 (VAR_14) && FUNC_1 (FUNC_15 (VAR_14))
   && FUNC_19 (FUNC_15 (VAR_14), VAR_7, ((void*)0)))
 break;



      if (FUNC_5 (VAR_14) && FUNC_2 (FUNC_14 (VAR_14)) == VAR_1)
 VAR_16 += FUNC_18 (FUNC_14 (VAR_14), 0);
      else if (!FUNC_12 (VAR_14))
 VAR_16 += 1;




      if (FUNC_6 (VAR_14) <= VAR_9 && FUNC_4 (VAR_14) > VAR_18)
 VAR_18 = FUNC_4 (VAR_14);
      if (FUNC_6 (VAR_14) <= VAR_9 && FUNC_4 (VAR_14) < VAR_17)
 VAR_17 = FUNC_4 (VAR_14);



      if (VAR_21 < VAR_20 && VAR_11->path[VAR_21].branch == VAR_14)
 {
   if (VAR_11->path[VAR_21].status != VAR_4)
     VAR_14 = FUNC_7 (VAR_14);


   VAR_21++;
 }
      else if ((VAR_12 || VAR_13) && VAR_20 < FUNC_13 (VAR_2) - 1
        && FUNC_8 (VAR_14)
        && FUNC_2 (FUNC_14 (VAR_14)) == VAR_8
        && FUNC_2 (FUNC_17 (FUNC_14 (VAR_14))) == VAR_0
        && FUNC_7 (VAR_14) != 0
        && FUNC_9 (FUNC_7 (VAR_14)) == 1
        && FUNC_11 (FUNC_7 (VAR_14)) != 0)
 {
   for (VAR_15 = FUNC_15 (FUNC_7 (VAR_14)); VAR_15; VAR_15 = FUNC_15 (VAR_15))
     if ((!FUNC_12 (VAR_15)
   || (FUNC_15 (VAR_15) && FUNC_1 (FUNC_15 (VAR_15))
       && FUNC_19 (FUNC_15 (VAR_15), VAR_7, ((void*)0))))
  && (!FUNC_10 (VAR_15) || FUNC_9 (VAR_15) != 0))
       break;



   if (VAR_12 && VAR_15 != 0 && FUNC_0 (VAR_15))
     {


       if (FUNC_20 (VAR_15) == VAR_19)
  {
    VAR_14 = FUNC_11 (VAR_14);
    continue;
  }


       for (VAR_22 = 0; VAR_22 < VAR_21; VAR_22++)
  if (VAR_11->path[VAR_22].branch == VAR_14)
    break;

       if (VAR_22 != VAR_21)
  break;

       VAR_11->path[VAR_21].branch = VAR_14;
       VAR_11->path[VAR_21++].status = VAR_5;





       VAR_20 = VAR_21;

       VAR_14 = FUNC_7 (VAR_14);

       FUNC_16 (FUNC_11 (VAR_14), VAR_6);
     }

   else if (VAR_13 && VAR_15 != 0 && !FUNC_10 (VAR_15))
     {
       rtx VAR_23;

       if (FUNC_20 (VAR_15) == VAR_19)
  {
    VAR_14 = FUNC_11 (VAR_14);
    continue;
  }

       for (VAR_22 = 0; VAR_22 < VAR_21; VAR_22++)
  if (VAR_11->path[VAR_22].branch == VAR_14)
    break;

       if (VAR_22 != VAR_21)
  break;



       for (VAR_23 = FUNC_11 (VAR_14); VAR_23 && VAR_23 != VAR_15; VAR_23 = FUNC_11 (VAR_23))
  if (FUNC_10 (VAR_23))
    break;

       if (VAR_23 == VAR_15)
  {
    VAR_11->path[VAR_21].branch = VAR_14;
    VAR_11->path[VAR_21++].status = VAR_3;

    VAR_20 = VAR_21;

    VAR_14 = FUNC_7 (VAR_14);

    FUNC_16 (FUNC_11 (VAR_14), VAR_6);
  }
     }
 }
      VAR_14 = FUNC_11 (VAR_14);
    }

  VAR_11->low_cuid = VAR_17;
  VAR_11->high_cuid = VAR_18;
  VAR_11->nsets = VAR_16;
  VAR_11->last = VAR_14;



  for (VAR_22 = VAR_20 - 1; VAR_22 >= 0; VAR_22--)
    if (VAR_11->path[VAR_22].status != VAR_4)
      break;

  if (VAR_22 == -1)
    VAR_11->path_size = 0;
  else
    VAR_11->path_size = VAR_20;


  VAR_11->path[VAR_20].branch = 0;
}
