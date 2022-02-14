
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct set {void* dest_addr_elt; void* src_elt; void* dest; void* src; } ;
typedef void* rtx ;


 scalar_t__ VAR_0 ;
 void* FUNC_0 (void*) ;
 void* FUNC_1 (void*) ;
 scalar_t__ FUNC_2 (void*) ;
 int FUNC_3 (void*) ;
 int VAR_1 ;
 scalar_t__ FUNC_4 (void*) ;
 scalar_t__ VAR_2 ;
 void* FUNC_5 (void*) ;
 int VAR_3 ;
 scalar_t__ FUNC_6 (void*) ;
 scalar_t__ VAR_4 ;
 void* FUNC_7 (void*) ;
 void* FUNC_8 (void*) ;
 scalar_t__ VAR_5 ;
 void* FUNC_9 (void*,int ) ;
 void* FUNC_10 (void*,int ,int) ;
 int FUNC_11 (void*,int ) ;
 scalar_t__ FUNC_12 (void*) ;
 int VAR_6 ;
 void* FUNC_13 (void*,int ,int) ;
 scalar_t__ VAR_7 ;
 int FUNC_14 (void*,void*,void*) ;
 void* FUNC_15 (int ,void*,void*,void*) ;
 int FUNC_16 (void*,int ,int *) ;
 void* VAR_8 ;
 scalar_t__ FUNC_17 (void*,void*) ;

__attribute__((used)) static void
FUNC_18 (rtx VAR_9)
{
  int VAR_10 = 0;
  int VAR_11;
  struct set VAR_12[VAR_1];
  rtx VAR_13 = FUNC_5 (VAR_9);
  rtx VAR_14 = 0;

  VAR_13 = FUNC_5 (VAR_9);
  if (FUNC_2 (VAR_13) == VAR_0)
    {
      VAR_14 = FUNC_1 (VAR_13);
      VAR_13 = FUNC_0 (VAR_13);
    }


  if (FUNC_2 (VAR_13) == VAR_4)
    {
      VAR_12[0].src = FUNC_8 (VAR_13);
      VAR_12[0].dest = FUNC_7 (VAR_13);
      VAR_10 = 1;
    }
  else if (FUNC_2 (VAR_13) == VAR_2)
    {


      for (VAR_11 = FUNC_11 (VAR_13, 0) - 1; VAR_11 >= 0; --VAR_11)
 {
   rtx VAR_15 = FUNC_10 (VAR_13, 0, VAR_11);

   if (FUNC_2 (VAR_15) == VAR_4)
     {
       VAR_12[VAR_10].src = FUNC_8 (VAR_15);
       VAR_12[VAR_10].dest = FUNC_7 (VAR_15);
       VAR_10++;
     }
 }
    }



  for (VAR_11 = 0; VAR_11 < VAR_10; VAR_11++)
    {
      rtx VAR_16 = VAR_12[VAR_11].dest;



      if (FUNC_2 (VAR_12[VAR_11].dest) == VAR_5)
 VAR_12[VAR_11].dest = VAR_16 = FUNC_9 (VAR_16, 0);


      if (FUNC_6 (VAR_16)
   || (FUNC_4 (VAR_16) && VAR_7))
        {
   rtx VAR_17 = VAR_12[VAR_11].src;
   if (VAR_14)
     VAR_17 = FUNC_15 (FUNC_3 (VAR_17), VAR_14, VAR_17, VAR_16);
   VAR_12[VAR_11].src_elt = FUNC_13 (VAR_17, FUNC_3 (VAR_16), 1);
   if (FUNC_4 (VAR_16))
     VAR_12[VAR_11].dest_addr_elt = FUNC_13 (FUNC_9 (VAR_16, 0), VAR_3, 1);
   else
     VAR_12[VAR_11].dest_addr_elt = 0;
 }
    }




  FUNC_16 (VAR_13, VAR_6, ((void*)0));






  if (VAR_10 >= 2 && FUNC_12 (VAR_13) >= 0)
    {
      for (VAR_11 = 0; VAR_11 < VAR_10; VAR_11++)
 {
   rtx VAR_18 = VAR_12[VAR_11].dest;
   if (FUNC_6 (VAR_18) || FUNC_4 (VAR_18))
     {
       int VAR_19;
       for (VAR_19 = VAR_11 + 1; VAR_19 < VAR_10; VAR_19++)
  if (FUNC_17 (VAR_18, VAR_12[VAR_19].dest))
    {
      VAR_12[VAR_11].dest = VAR_8;
      VAR_12[VAR_19].dest = VAR_8;
    }
     }
 }
    }


  for (VAR_11 = 0; VAR_11 < VAR_10; VAR_11++)
    {
      rtx VAR_20 = VAR_12[VAR_11].dest;
      if (FUNC_6 (VAR_20)
   || (FUNC_4 (VAR_20) && VAR_7))
 FUNC_14 (VAR_20, VAR_12[VAR_11].src_elt, VAR_12[VAR_11].dest_addr_elt);
    }
}
