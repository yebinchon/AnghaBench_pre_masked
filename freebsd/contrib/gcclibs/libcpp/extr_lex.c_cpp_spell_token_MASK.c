
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {unsigned char* text; size_t len; } ;
struct TYPE_8__ {TYPE_1__ str; int node; } ;
struct TYPE_9__ {int flags; TYPE_2__ val; scalar_t__ type; } ;
typedef TYPE_3__ cpp_token ;
typedef int cpp_reader ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t FUNC_0 (int ) ;
 unsigned char* FUNC_1 (int ) ;




 unsigned char* FUNC_2 (TYPE_3__ const*) ;
 int FUNC_3 (TYPE_3__ const*) ;
 int FUNC_4 (int *,int ,char*,unsigned char*) ;
 unsigned char** VAR_4 ;
 int FUNC_5 (unsigned char*,unsigned char*,size_t) ;
 int FUNC_6 (unsigned char*,unsigned char const*) ;

unsigned char *
FUNC_7 (cpp_reader *VAR_5, const cpp_token *VAR_6,
   unsigned char *VAR_7, bool VAR_8)
{
  switch (FUNC_3 (VAR_6))
    {
    case 128:
      {
 const unsigned char *VAR_9;
 unsigned char VAR_10;

 if (VAR_6->flags & VAR_2)
   VAR_9
     = VAR_4[(int) VAR_6->type - (int) VAR_1];
 else if (VAR_6->flags & VAR_3)
   goto spell_ident;
 else
   VAR_9 = FUNC_2 (VAR_6);

 while ((VAR_10 = *VAR_9++) != '\0')
   *VAR_7++ = VAR_10;
      }
      break;

    spell_ident:
    case 131:
      if (VAR_8)
 {
   FUNC_5 (VAR_7, FUNC_1 (VAR_6->val.node),
    FUNC_0 (VAR_6->val.node));
   VAR_7 += FUNC_0 (VAR_6->val.node);
 }
      else
 {
   size_t VAR_11;
   const unsigned char * VAR_12 = FUNC_1 (VAR_6->val.node);

   for (VAR_11 = 0; VAR_11 < FUNC_0 (VAR_6->val.node); VAR_11++)
     if (VAR_12[VAR_11] & ~0x7F)
       {
  VAR_11 += FUNC_6 (VAR_7, VAR_12 + VAR_11) - 1;
  VAR_7 += 10;
       }
     else
       *VAR_7++ = FUNC_1 (VAR_6->val.node)[VAR_11];
 }
      break;

    case 130:
      FUNC_5 (VAR_7, VAR_6->val.str.text, VAR_6->val.str.len);
      VAR_7 += VAR_6->val.str.len;
      break;

    case 129:
      FUNC_4 (VAR_5, VAR_0,
   "unspellable token %s", FUNC_2 (VAR_6));
      break;
    }

  return VAR_7;
}
