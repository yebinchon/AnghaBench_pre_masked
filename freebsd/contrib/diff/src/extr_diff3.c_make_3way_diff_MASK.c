
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct diff_block {struct diff_block* next; } ;
struct diff3_block {struct diff3_block* next; } ;
typedef scalar_t__ lin ;


 scalar_t__ FUNC_0 (struct diff_block*,int ) ;
 scalar_t__ FUNC_1 (struct diff_block*,int ) ;
 int VAR_0 ;
 int FUNC_2 (char*) ;
 struct diff3_block* FUNC_3 (struct diff_block**,struct diff_block**,int,int,struct diff3_block const*) ;

__attribute__((used)) static struct diff3_block *
FUNC_4 (struct diff_block *VAR_1, struct diff_block *VAR_2)
{
  struct diff_block *VAR_3[2];
  struct diff_block *VAR_4[2];
  struct diff_block *VAR_5[2];

  lin VAR_6;

  int VAR_7;
  int VAR_8;
  int VAR_9;

  struct diff_block *VAR_10;
  struct diff_block *VAR_11;

  struct diff3_block *VAR_12;
  struct diff3_block *VAR_13;
  struct diff3_block **VAR_14;

  struct diff3_block const *VAR_15;

  static struct diff3_block const VAR_16;


  VAR_12 = 0;
  VAR_14 = &VAR_12;
  VAR_5[0] = VAR_1; VAR_5[1] = VAR_2;
  VAR_15 = &VAR_16;



  while (VAR_5[0] || VAR_5[1])
    {
      VAR_3[0] = VAR_3[1] = VAR_4[0] = VAR_4[1] = 0;


      if (!VAR_5[0])
 VAR_8 = 1;
      else if (!VAR_5[1])
 VAR_8 = 0;
      else
 VAR_8 =
   (FUNC_1 (VAR_5[0], VAR_0) > FUNC_1 (VAR_5[1], VAR_0));

      VAR_7 = VAR_8;

      VAR_10 = VAR_5[VAR_7];

      VAR_6 = FUNC_0 (VAR_10, VAR_0);


      VAR_3[VAR_7]
 = VAR_4[VAR_7]
 = VAR_10;
      VAR_5[VAR_7] = VAR_10->next;
      VAR_4[VAR_7]->next = 0;


      VAR_9 = VAR_7 ^ 0x1;
      VAR_11 = VAR_5[VAR_9];



      while (VAR_11
      && FUNC_1 (VAR_11, VAR_0) <= VAR_6 + 1)
 {



   if (VAR_3[VAR_9])
     VAR_4[VAR_9]->next = VAR_11;
   else
     VAR_3[VAR_9] = VAR_11;
   VAR_4[VAR_9] = VAR_11;




   VAR_5[VAR_9] = VAR_5[VAR_9]->next;
   VAR_11->next = 0;







   if (VAR_6 < FUNC_0 (VAR_11, VAR_0))
     {
       VAR_7 ^= 1;
       VAR_10 = VAR_11;
       VAR_6 = FUNC_0 (VAR_11, VAR_0);
     }


   VAR_9 = VAR_7 ^ 0x1;
   VAR_11 = VAR_5[VAR_9];
 }




      VAR_13 = FUNC_3 (VAR_3, VAR_4,
           VAR_8, VAR_7,
           VAR_15);

      if (!VAR_13)
 FUNC_2 ("internal error: screwup in format of diff blocks");


      *VAR_14 = VAR_13;
      VAR_14 = &VAR_13->next;


      VAR_15 = VAR_13;
    }
  return VAR_12;
}
