
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file_data {char* changed; int buffered_lines; } ;
struct change {int dummy; } ;
typedef int lin ;


 struct change* FUNC_0 (int,int,int,int,struct change*) ;

__attribute__((used)) static struct change *
FUNC_1 (struct file_data const VAR_0[])
{
  struct change *VAR_1 = 0;
  char *VAR_2 = VAR_0[0].changed;
  char *VAR_3 = VAR_0[1].changed;
  lin VAR_4 = VAR_0[0].buffered_lines, VAR_5 = VAR_0[1].buffered_lines;



  while (VAR_4 >= 0 || VAR_5 >= 0)
    {
      if (VAR_2[VAR_4 - 1] | VAR_3[VAR_5 - 1])
 {
   lin VAR_6 = VAR_4, VAR_7 = VAR_5;


   while (VAR_2[VAR_4 - 1]) --VAR_4;
   while (VAR_3[VAR_5 - 1]) --VAR_5;


   VAR_1 = FUNC_0 (VAR_4, VAR_5, VAR_6 - VAR_4, VAR_7 - VAR_5, VAR_1);
 }


      VAR_4--, VAR_5--;
    }

  return VAR_1;
}
