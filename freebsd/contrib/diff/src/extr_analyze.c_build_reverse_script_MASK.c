
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file_data {char* changed; size_t buffered_lines; } ;
struct change {int dummy; } ;
typedef size_t lin ;


 struct change* FUNC_0 (size_t,size_t,size_t,size_t,struct change*) ;

__attribute__((used)) static struct change *
FUNC_1 (struct file_data const VAR_0[])
{
  struct change *VAR_1 = 0;
  char *VAR_2 = VAR_0[0].changed;
  char *VAR_3 = VAR_0[1].changed;
  lin VAR_4 = VAR_0[0].buffered_lines;
  lin VAR_5 = VAR_0[1].buffered_lines;



  lin VAR_6 = 0, VAR_7 = 0;

  while (VAR_6 < VAR_4 || VAR_7 < VAR_5)
    {
      if (VAR_2[VAR_6] | VAR_3[VAR_7])
 {
   lin VAR_8 = VAR_6, VAR_9 = VAR_7;


   while (VAR_2[VAR_6]) ++VAR_6;
   while (VAR_3[VAR_7]) ++VAR_7;


   VAR_1 = FUNC_0 (VAR_8, VAR_9, VAR_6 - VAR_8, VAR_7 - VAR_9, VAR_1);
 }


      VAR_6++, VAR_7++;
    }

  return VAR_1;
}
