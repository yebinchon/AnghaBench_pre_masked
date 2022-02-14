
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {TYPE_2__* arg; } ;
typedef TYPE_1__ ins ;
struct TYPE_6__ {int type; int r; int rp; int i_r; } ;
typedef TYPE_2__ argument ;


 int FUNC_0 (char) ;
 int FUNC_1 (char*) ;






 int VAR_0 ;

 int FUNC_2 (int ,...) ;
 size_t VAR_1 ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_8 (char*,TYPE_1__*) ;
 char* FUNC_9 (char*,char) ;

__attribute__((used)) static void
FUNC_10 (char *VAR_4, ins * VAR_5)
{
  char *VAR_6;
  char *VAR_7;

  argument *VAR_8 = &VAR_5->arg[VAR_1];


  VAR_6 = VAR_7 = VAR_4;

  switch (VAR_8->type)
    {
    case 131:
      VAR_6++;
    case 134:

      FUNC_8 (VAR_6, VAR_5);

      if (VAR_8->type != 131)
        VAR_8->type = 134;
      break;

    case 130:
      VAR_6++;
    case 133:

      while (*VAR_7 != '(')
        VAR_7++;
      *VAR_7 = '\0';
      FUNC_8 (VAR_6, VAR_5);
      VAR_6 = VAR_7;
    case 128:
      VAR_6++;

      while (*VAR_7 != ')')
        VAR_7++;
      *VAR_7 = '\0';
      if ((VAR_8->r = FUNC_5 (VAR_6)) == VAR_3)
         FUNC_2 (FUNC_1("Illegal register `%s' in Instruction `%s'"),
              VAR_6, VAR_2);


      if ((VAR_8->type != 128)
   && ((FUNC_7 (VAR_8->r) == 12)
       || (FUNC_7 (VAR_8->r) == 13)
       || (FUNC_7 (VAR_8->r) == 14)
       || (FUNC_7 (VAR_8->r) == 15)))
         {
           VAR_8->type = 132;
           VAR_8->rp = VAR_8->r;
         }
      break;

    case 132:

      while (*VAR_7 != '(')
        VAR_7++;
      *VAR_7 = '\0';
      FUNC_8 (VAR_6, VAR_5);
      VAR_6 = VAR_7;
      VAR_6++;

      while (*VAR_7 != ')')
        VAR_7++;
      *VAR_7 = '\0';
      if ((VAR_8->rp = FUNC_6 (VAR_6)) == VAR_3)
         FUNC_2 (FUNC_1("Illegal register pair `%s' in Instruction `%s'"),
              VAR_6, VAR_2);
      break;

    case 129:

      if ((FUNC_9 (VAR_6,'(') != ((void*)0)))
        {
         while ((*VAR_7 != '(') && (! FUNC_0 (*VAR_7)))
           VAR_7++;
         if ((VAR_8->rp = FUNC_4 (VAR_7)) == VAR_3)
              FUNC_2 (FUNC_1("Illegal register pair `%s' in Instruction `%s'"),
                            VAR_6, VAR_2);
         *VAR_7++ = '\0';
         VAR_8->type = VAR_0;
        }
      else
 VAR_8->rp = -1;

       VAR_7 = VAR_6;

      while (*VAR_7 != ']')
        VAR_7++;
      FUNC_8 (++VAR_7, VAR_5);
      *VAR_7++ = '\0';
      VAR_7 = VAR_6;


      VAR_6 = FUNC_9 (VAR_7,'[');
      if (VAR_6 != ((void*)0))
        {
          *VAR_6++ = '\0';

          VAR_7 = FUNC_9 (VAR_6, ']');

          if (VAR_7 == ((void*)0))
            FUNC_2 (FUNC_1("unmatched '['"));
          else
            {

              *VAR_7 = '\0';
              if (*(VAR_7 + 1) != '\0')
                FUNC_2 (FUNC_1("garbage after index spec ignored"));
            }
        }

      if ((VAR_8->i_r = FUNC_3 (VAR_6)) == VAR_3)
        FUNC_2 (FUNC_1("Illegal register `%s' in Instruction `%s'"),
                VAR_6, VAR_2);
      *VAR_7 = '\0';
      *VAR_6 = '\0';
      break;

    default:
      break;
    }
}
