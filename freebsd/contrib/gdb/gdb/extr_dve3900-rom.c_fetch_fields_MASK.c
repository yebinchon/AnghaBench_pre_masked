
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bit_field {int length; unsigned long start; int * suffix; int * prefix; } ;
typedef int buf ;


 int FUNC_0 (int *,char*,int) ;
 unsigned long FUNC_1 (char*,int *,int) ;

__attribute__((used)) static unsigned long
FUNC_2 (struct bit_field *VAR_0)
{
  char VAR_1[20];
  unsigned long VAR_2 = 0;
  unsigned long VAR_3;

  for (; VAR_0->prefix != ((void*)0); VAR_0++)
    {
      FUNC_0 (VAR_0->prefix, ((void*)0), 0);
      FUNC_0 (VAR_0->suffix, VAR_1, sizeof (VAR_1));
      if (VAR_0->length != 0)
 {
   VAR_3 = FUNC_1 (VAR_1, ((void*)0), 16);
   VAR_3 &= ((1 << VAR_0->length) - 1);
   VAR_2 |= VAR_3 << VAR_0->start;
 }

    }

  return VAR_2;
}
