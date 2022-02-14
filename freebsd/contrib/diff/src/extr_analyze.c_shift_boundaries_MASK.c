
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file_data {char* changed; size_t* equivs; size_t buffered_lines; } ;
typedef size_t lin ;



__attribute__((used)) static void
FUNC_0 (struct file_data VAR_0[])
{
  int VAR_1;

  for (VAR_1 = 0; VAR_1 < 2; VAR_1++)
    {
      char *VAR_2 = VAR_0[VAR_1].changed;
      char *VAR_3 = VAR_0[1 - VAR_1].changed;
      lin const *VAR_4 = VAR_0[VAR_1].equivs;
      lin VAR_5 = 0;
      lin VAR_6 = 0;
      lin VAR_7 = VAR_0[VAR_1].buffered_lines;

      while (1)
 {
   lin VAR_8, VAR_9, VAR_10;




   while (VAR_5 < VAR_7 && !VAR_2[VAR_5])
     {
       while (VAR_3[VAR_6++])
  continue;
       VAR_5++;
     }

   if (VAR_5 == VAR_7)
     break;

   VAR_9 = VAR_5;



   while (VAR_2[++VAR_5])
     continue;
   while (VAR_3[VAR_6])
     VAR_6++;

   do
     {


       VAR_8 = VAR_5 - VAR_9;





       while (VAR_9 && VAR_4[VAR_9 - 1] == VAR_4[VAR_5 - 1])
  {
    VAR_2[--VAR_9] = 1;
    VAR_2[--VAR_5] = 0;
    while (VAR_2[VAR_9 - 1])
      VAR_9--;
    while (VAR_3[--VAR_6])
      continue;
  }




       VAR_10 = VAR_3[VAR_6 - 1] ? VAR_5 : VAR_7;







       while (VAR_5 != VAR_7 && VAR_4[VAR_9] == VAR_4[VAR_5])
  {
    VAR_2[VAR_9++] = 0;
    VAR_2[VAR_5++] = 1;
    while (VAR_2[VAR_5])
      VAR_5++;
    while (VAR_3[++VAR_6])
      VAR_10 = VAR_5;
  }
     }
   while (VAR_8 != VAR_5 - VAR_9);




   while (VAR_10 < VAR_5)
     {
       VAR_2[--VAR_9] = 1;
       VAR_2[--VAR_5] = 0;
       while (VAR_3[--VAR_6])
  continue;
     }
 }
    }
}
