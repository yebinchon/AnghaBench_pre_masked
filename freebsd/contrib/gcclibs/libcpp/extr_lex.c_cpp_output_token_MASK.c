
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {unsigned char* text; int len; } ;
struct TYPE_8__ {TYPE_1__ str; int node; } ;
struct TYPE_9__ {int flags; TYPE_2__ val; scalar_t__ type; } ;
typedef TYPE_3__ cpp_token ;
typedef int FILE ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t FUNC_0 (int ) ;
 unsigned char* FUNC_1 (int ) ;




 unsigned char* FUNC_2 (TYPE_3__ const*) ;
 int FUNC_3 (TYPE_3__ const*) ;
 unsigned char** VAR_3 ;
 int FUNC_4 (unsigned char,int *) ;
 int FUNC_5 (unsigned char*,int,int,int *) ;
 int FUNC_6 (int,int *) ;
 int FUNC_7 (unsigned char*,unsigned char const*) ;

void
FUNC_8 (const cpp_token *VAR_4, FILE *VAR_5)
{
  switch (FUNC_3 (VAR_4))
    {
    case 128:
      {
 const unsigned char *VAR_6;
 int VAR_7;

 if (VAR_4->flags & VAR_1)
   VAR_6
     = VAR_3[(int) VAR_4->type - (int) VAR_0];
 else if (VAR_4->flags & VAR_2)
   goto spell_ident;
 else
   VAR_6 = FUNC_2 (VAR_4);

 VAR_7 = *VAR_6;
 do
   FUNC_6 (VAR_7, VAR_5);
 while ((VAR_7 = *++VAR_6) != '\0');
      }
      break;

    spell_ident:
    case 131:
      {
 size_t VAR_8;
 const unsigned char * VAR_9 = FUNC_1 (VAR_4->val.node);

 for (VAR_8 = 0; VAR_8 < FUNC_0 (VAR_4->val.node); VAR_8++)
   if (VAR_9[VAR_8] & ~0x7F)
     {
       unsigned char VAR_10[10];
       VAR_8 += FUNC_7 (VAR_10, VAR_9 + VAR_8) - 1;
       FUNC_5 (VAR_10, 1, 10, VAR_5);
     }
   else
     FUNC_4 (FUNC_1 (VAR_4->val.node)[VAR_8], VAR_5);
      }
      break;

    case 130:
      FUNC_5 (VAR_4->val.str.text, 1, VAR_4->val.str.len, VAR_5);
      break;

    case 129:

      break;
    }
}
