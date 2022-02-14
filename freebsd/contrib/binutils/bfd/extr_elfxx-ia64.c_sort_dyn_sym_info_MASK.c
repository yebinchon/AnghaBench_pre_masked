
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct elfNN_ia64_dyn_sym_info {scalar_t__ addend; scalar_t__ got_offset; } ;
typedef scalar_t__ bfd_vma ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct elfNN_ia64_dyn_sym_info*,struct elfNN_ia64_dyn_sym_info*,unsigned int) ;
 int FUNC_2 (struct elfNN_ia64_dyn_sym_info*,unsigned int,int,int ) ;

__attribute__((used)) static unsigned int
FUNC_3 (struct elfNN_ia64_dyn_sym_info *VAR_1,
     unsigned int VAR_2)
{
  bfd_vma VAR_3, VAR_4, VAR_5;
  unsigned int VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12;

  FUNC_2 (VAR_1, VAR_2, sizeof (*VAR_1), VAR_0);


  VAR_4 = VAR_1 [0].addend;
  VAR_5 = VAR_1 [0].got_offset;
  for (VAR_6 = 1; VAR_6 < VAR_2; VAR_6++)
    {
      VAR_3 = VAR_1 [VAR_6].addend;
      if (VAR_3 == VAR_4)
 {

   if (VAR_5 == (bfd_vma) -1)
     VAR_5 = VAR_1 [VAR_6].got_offset;
   break;
 }
      VAR_5 = VAR_1 [VAR_6].got_offset;
      VAR_4 = VAR_3;
    }


  VAR_10 = VAR_6++;


  if (VAR_6 < VAR_2)
    {
      while (VAR_6 < VAR_2)
 {


   VAR_7 = VAR_10 - 1;
   if (VAR_5 != (bfd_vma) -1)
     VAR_1 [VAR_7].got_offset = VAR_5;

   VAR_3 = VAR_1 [VAR_6].addend;
   VAR_5 = VAR_1 [VAR_6].got_offset;



   if (VAR_3 == VAR_4)
     {
       for (VAR_11 = VAR_6 + 1; VAR_11 < VAR_2; VAR_11++)
  {
    if (VAR_1 [VAR_11].addend != VAR_3)
      break;


    if (VAR_5 == (bfd_vma) -1)
      VAR_5 = VAR_1 [VAR_11].got_offset;
  }


       if (VAR_5 != (bfd_vma) -1)
  VAR_1 [VAR_7].got_offset = VAR_5;
     }
   else
     VAR_11 = VAR_6;

   if (VAR_11 >= VAR_2)
     break;


   VAR_4 = VAR_1 [VAR_11].addend;
   VAR_5 = VAR_1 [VAR_11].got_offset;
   for (VAR_8 = VAR_11 + 1; VAR_8 < VAR_2; VAR_8++)
     {
       VAR_3 = VAR_1 [VAR_8].addend;
       if (VAR_3 == VAR_4)
  {

    if (VAR_5 == (bfd_vma) -1)
      VAR_5 = VAR_1 [VAR_8].got_offset;



    if (VAR_5 != (bfd_vma) -1)
      VAR_1 [VAR_8 - 1].got_offset = VAR_5;
    break;
  }
       VAR_5 = VAR_1 [VAR_8].got_offset;
       VAR_4 = VAR_3;
     }


   VAR_12 = VAR_8 - VAR_11;
   VAR_6 = VAR_8 + 1;

   if (VAR_12 == 1 && VAR_8 < VAR_2)
     {



       for (VAR_9 = VAR_8 + 1, VAR_11++; VAR_9 < VAR_2; VAR_9++, VAR_11++)
  {
    if (VAR_1 [VAR_9].addend != VAR_3)
      break;

    if (VAR_5 == (bfd_vma) -1)
      VAR_5 = VAR_1 [VAR_9].got_offset;
  }



       FUNC_0 (VAR_3 == VAR_4);
       if (VAR_5 != (bfd_vma) -1)
  VAR_1 [VAR_9 - 1].got_offset = VAR_5;

       if (VAR_9 < VAR_2)
  {


    VAR_4 = VAR_1 [VAR_9].addend;
    VAR_5 = VAR_1 [VAR_9].got_offset;
    for (VAR_8 = VAR_9 + 1; VAR_8 < VAR_2; VAR_8++)
      {
        VAR_3 = VAR_1 [VAR_8].addend;
        if (VAR_3 == VAR_4)
   {


     if (VAR_5 == (bfd_vma) -1)
       VAR_5 = VAR_1 [VAR_8].got_offset;
     break;
   }
        VAR_5 = VAR_1 [VAR_8].got_offset;
        VAR_4 = VAR_3;
        VAR_9++;
      }

    VAR_12 = VAR_9 - VAR_11 + 1;
    VAR_6 = VAR_9 + 1;
  }
     }

   FUNC_1 (&VAR_1 [VAR_10], &VAR_1 [VAR_11], VAR_12 * sizeof (*VAR_1));

   VAR_10 += VAR_12;
 }

      VAR_2 = VAR_10;
    }
  else
    {


      if (VAR_10 < VAR_2)
 {


   if (VAR_5 != (bfd_vma) -1)
     VAR_1 [VAR_10 - 1].got_offset = VAR_5;
   VAR_2 = VAR_10;
 }
    }

  return VAR_2;
}
