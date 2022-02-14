
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct type {int dummy; } ;
struct symtab {int dummy; } ;
struct symbol {int dummy; } ;
struct block {int dummy; } ;


 int FUNC_0 (struct type*) ;
 int VAR_0 ;
 int VAR_1 ;
 struct type* FUNC_1 (struct type*,int) ;
 char* FUNC_2 (struct type*,int) ;
 int FUNC_3 (struct type*) ;
 int FUNC_4 (struct type*) ;
 scalar_t__ FUNC_5 (int,struct type*,struct symbol**) ;
 scalar_t__ FUNC_6 (int,struct type*,struct symbol**) ;
 scalar_t__ FUNC_7 (char*,char*,int ) ;
 scalar_t__ FUNC_8 (char*,struct block*,int ,int*,struct symtab**) ;
 scalar_t__ FUNC_9 (char*,char*) ;
 int FUNC_10 (char*) ;
 scalar_t__ FUNC_11 (char*,char*,int) ;
 char* FUNC_12 (struct type*) ;

__attribute__((used)) static int
FUNC_13 (struct type *VAR_2, char *VAR_3, struct symbol **VAR_4)
{
  int VAR_5 = 0;
  int VAR_6;
  char *VAR_7 = FUNC_12 (VAR_2);




  if (VAR_7
      && (FUNC_8 (VAR_7, (struct block *) ((void*)0),
    VAR_1, (int *) ((void*)0),
    (struct symtab **) ((void*)0))))
    {
      int VAR_8;
      int VAR_9 = FUNC_10 (VAR_3);

      FUNC_0 (VAR_2);





      for (VAR_8 = FUNC_3 (VAR_2) - 1;
    VAR_8 >= 0;
    --VAR_8)
 {
   char *VAR_10 = FUNC_2 (VAR_2, VAR_8);
   char VAR_11[64];

   if (FUNC_11 (VAR_10, "__", 2) == 0 ||
       FUNC_11 (VAR_10, "op", 2) == 0 ||
       FUNC_11 (VAR_10, "type", 4) == 0)
     {
       if (FUNC_7 (VAR_10, VAR_11, VAR_0))
  VAR_10 = VAR_11;
       else if (FUNC_7 (VAR_10, VAR_11, 0))
  VAR_10 = VAR_11;
     }

   if (FUNC_9 (VAR_3, VAR_10) == 0)

     VAR_5 += FUNC_6 (VAR_8, VAR_2,
     VAR_4 + VAR_5);
   else if (FUNC_11 (VAR_7, VAR_3, VAR_9) == 0
     && (VAR_7[VAR_9] == '\0'
         || VAR_7[VAR_9] == '<'))
     VAR_5 += FUNC_5 (VAR_8, VAR_2,
        VAR_4 + VAR_5);
 }
    }
  if (VAR_5 == 0)
    for (VAR_6 = 0; VAR_6 < FUNC_4 (VAR_2); VAR_6++)
      VAR_5 += FUNC_13 (FUNC_1 (VAR_2, VAR_6), VAR_3, VAR_4 + VAR_5);

  return VAR_5;
}
