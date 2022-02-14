
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {char* fastmap; int* translate; int newline_anchor; int no_sub; scalar_t__ used; scalar_t__ allocated; scalar_t__ buffer; } ;
typedef TYPE_1__ regex_t ;
typedef int reg_syntax_t ;
typedef scalar_t__ reg_errcode_t ;
typedef int* RE_TRANSLATE_TYPE ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (char const*,int ,int ,TYPE_1__*) ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (char const*) ;
 scalar_t__ FUNC_7 (char const*,int ,int ,TYPE_1__*) ;

int
FUNC_8 (regex_t *VAR_15, const char *VAR_16, int VAR_17)
{
  reg_errcode_t VAR_18;
  reg_syntax_t VAR_19
    = (VAR_17 & VAR_6) ?
      VAR_14 : VAR_13;


  VAR_15->buffer = 0;
  VAR_15->allocated = 0;
  VAR_15->used = 0;


  VAR_15->fastmap = (char *) FUNC_4 (1 << VAR_0);

  if (VAR_17 & VAR_7)
    {
      int VAR_20;

      VAR_15->translate
 = (RE_TRANSLATE_TYPE) FUNC_4 (VAR_1
          * sizeof (*(RE_TRANSLATE_TYPE)0));
      if (VAR_15->translate == ((void*)0))
        return (int) VAR_5;


      for (VAR_20 = 0; VAR_20 < VAR_1; VAR_20++)
        VAR_15->translate[VAR_20] = FUNC_0 (VAR_20) ? FUNC_1 (VAR_20) : VAR_20;
    }
  else
    VAR_15->translate = ((void*)0);


  if (VAR_17 & VAR_8)
    {
      VAR_19 &= ~VAR_11;
      VAR_19 |= VAR_12;

      VAR_15->newline_anchor = 1;
    }
  else
    VAR_15->newline_anchor = 0;

  VAR_15->no_sub = !!(VAR_17 & VAR_10);
    VAR_18 = FUNC_2 (VAR_16, FUNC_6 (VAR_16), VAR_19, VAR_15);



  if (VAR_18 == VAR_4) VAR_18 = VAR_3;

  if (VAR_18 == VAR_9 && VAR_15->fastmap)
    {


      if (FUNC_5 (VAR_15) == -2)
 {


   FUNC_3 (VAR_15->fastmap);
   VAR_15->fastmap = ((void*)0);
 }
    }

  return (int) VAR_18;
}
