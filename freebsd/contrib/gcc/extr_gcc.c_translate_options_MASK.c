
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {char const* const name; char* arg_info; char* equivalent; } ;
struct TYPE_4__ {char const* option_found; char* replacements; } ;


 size_t FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (char const*) ;
 char* FUNC_3 (char*,char const*,int *) ;
 int FUNC_4 (char*,char const* const) ;
 TYPE_2__* VAR_0 ;
 scalar_t__ FUNC_5 (char const*,char) ;
 scalar_t__ FUNC_6 (char const*,char const* const) ;
 size_t FUNC_7 (char const* const) ;
 int FUNC_8 (char const* const,char const* const,size_t) ;
 TYPE_1__* VAR_1 ;
 char** FUNC_9 (int) ;
 char** FUNC_10 (char const**,int) ;
 char* FUNC_11 (char const*) ;

__attribute__((used)) static void
FUNC_12 (int *VAR_2, const char *const **VAR_3)
{
  int VAR_4;
  int VAR_5 = *VAR_2;
  const char *const *VAR_6 = *VAR_3;
  int VAR_7 = (VAR_5 + 2) * 2 * sizeof (const char *);
  const char **VAR_8 = FUNC_9 (VAR_7);
  int VAR_9 = 0;

  VAR_4 = 0;
  VAR_8[VAR_9++] = VAR_6[VAR_4++];

  while (VAR_4 < VAR_5)
    {
      if (VAR_6[VAR_4][0] == '-' && VAR_6[VAR_4][1] == '-')
 {
   size_t VAR_10;

   for (VAR_10 = 0; VAR_10 < FUNC_0 (VAR_0); VAR_10++)
     {
       size_t VAR_11 = FUNC_7 (VAR_0[VAR_10].name);
       size_t VAR_12 = FUNC_7 (VAR_6[VAR_4]);
       size_t VAR_13 = VAR_12 > VAR_11 ? VAR_11 : VAR_12;
       const char *VAR_14 = VAR_0[VAR_10].arg_info;

       if (VAR_14 == 0)
  VAR_14 = "";

       if (!FUNC_8 (VAR_6[VAR_4], VAR_0[VAR_10].name, VAR_13))
  {
    const char *VAR_15 = 0;

    if (VAR_12 < VAR_11)
      {
        size_t VAR_16;
        for (VAR_16 = VAR_10 + 1; VAR_16 < FUNC_0 (VAR_0); VAR_16++)
   if (FUNC_7 (VAR_0[VAR_16].name) >= VAR_12
       && !FUNC_8 (VAR_6[VAR_4], VAR_0[VAR_16].name, VAR_12))
     {
       FUNC_4 ("ambiguous abbreviation %s", VAR_6[VAR_4]);
       break;
     }

        if (VAR_16 != FUNC_0 (VAR_0))
   break;
      }

    if (VAR_12 > VAR_11)
      {

        if (VAR_6[VAR_4][VAR_11] == '=')
   VAR_15 = VAR_6[VAR_4] + VAR_11 + 1;



        else if (FUNC_5 (VAR_14, '*') != 0)
   VAR_15 = VAR_6[VAR_4] + VAR_11;



        else
   continue;
      }

    else if (FUNC_5 (VAR_14, '*') != 0)
      {
        FUNC_4 ("incomplete '%s' option", VAR_0[VAR_10].name);
        break;
      }


    if (FUNC_5 (VAR_14, 'a') != 0)
      {
        if (VAR_15 == 0)
   {
     if (VAR_4 + 1 == VAR_5)
       {
         FUNC_4 ("missing argument to '%s' option",
         VAR_0[VAR_10].name);
         break;
       }

     VAR_15 = VAR_6[++VAR_4];
   }
      }
    else if (FUNC_5 (VAR_14, '*') != 0)
      ;
    else if (FUNC_5 (VAR_14, 'o') == 0)
      {
        if (VAR_15 != 0)
   FUNC_4 ("extraneous argument to '%s' option",
          VAR_0[VAR_10].name);
        VAR_15 = 0;
      }


    if (VAR_15 != 0 && FUNC_5 (VAR_14, 'j') != 0)
      VAR_8[VAR_9++] = FUNC_3 (VAR_0[VAR_10].equivalent, VAR_15,
            ((void*)0));
    else if (VAR_15 != 0)
      {
        VAR_8[VAR_9++] = VAR_0[VAR_10].equivalent;
        VAR_8[VAR_9++] = VAR_15;
      }
    else
      VAR_8[VAR_9++] = VAR_0[VAR_10].equivalent;

    break;
  }
     }
   VAR_4++;
 }



      else if (VAR_6[VAR_4][0] == '-')
 {
   const char *VAR_17 = VAR_6[VAR_4] + 1;
   int VAR_18 = *VAR_17;
   int VAR_19 = 1;

   if (FUNC_1 (VAR_18) > (VAR_17[1] != 0))
     VAR_19 += FUNC_1 (VAR_18) - (VAR_17[1] != 0);
   else if (FUNC_2 (VAR_17))
     VAR_19 += FUNC_2 (VAR_17);
   else if ((VAR_18 == 'B' || VAR_18 == 'b' || VAR_18 == 'x')
     && VAR_17[1] == 0)
     VAR_19 += 1;
   else if (! FUNC_6 (VAR_17, "Xlinker"))
     VAR_19 += 1;
   else if (! FUNC_6 (VAR_17, "Xpreprocessor"))
     VAR_19 += 1;
   else if (! FUNC_6 (VAR_17, "Xassembler"))
     VAR_19 += 1;




   if (VAR_19 + VAR_4 > VAR_5)
     VAR_19 = VAR_5 - VAR_4;

   while (VAR_19 > 0)
     {
       VAR_8[VAR_9++] = VAR_6[VAR_4++];
       VAR_19--;
     }
 }
      else

 VAR_8[VAR_9++] = VAR_6[VAR_4++];
    }

  VAR_8[VAR_9] = 0;

  *VAR_3 = VAR_8;
  *VAR_2 = VAR_9;
}
