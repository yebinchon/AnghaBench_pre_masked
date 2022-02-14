
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* outf_p ;
struct TYPE_3__ {size_t bufused; scalar_t__* buf; int name; struct TYPE_3__* next; } ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int ,char*) ;
 scalar_t__ FUNC_4 (scalar_t__*,int,size_t,int *) ;
 TYPE_1__* VAR_1 ;
 int FUNC_5 (char*) ;

__attribute__((used)) static void
FUNC_6 (void)
{
  outf_p VAR_2;

  for (VAR_2 = VAR_1; VAR_2; VAR_2 = VAR_2->next)
    {
      FILE * VAR_3;

      VAR_3 = FUNC_3 (VAR_2->name, "r");
      if (VAR_3 != ((void*)0) )
 {
   int VAR_4;
   size_t VAR_5;

   for (VAR_5 = 0; VAR_5 < VAR_2->bufused; VAR_5++)
     {
       int VAR_6;
       VAR_6 = FUNC_2 (VAR_3);
       if (VAR_6 == VAR_0 || VAR_6 != (unsigned char) VAR_2->buf[VAR_5])
  break;
     }
   VAR_4 = VAR_5 == VAR_2->bufused && FUNC_2 (VAR_3) == VAR_0;
   FUNC_1 (VAR_3);

   if (VAR_4)
     continue;
 }

      VAR_3 = FUNC_3 (VAR_2->name, "w");
      if (VAR_3 == ((void*)0))
 {
   FUNC_5 ("opening output file");
   FUNC_0 (1);
 }
      if (FUNC_4 (VAR_2->buf, 1, VAR_2->bufused, VAR_3) != VAR_2->bufused)
 {
   FUNC_5 ("writing output file");
   FUNC_0 (1);
 }
      if (FUNC_1 (VAR_3) != 0)
 {
   FUNC_5 ("closing output file");
   FUNC_0 (1);
 }
    }
}
