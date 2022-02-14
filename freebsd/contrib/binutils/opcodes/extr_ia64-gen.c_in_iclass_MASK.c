
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iclass {char const* comment; int nsubs; scalar_t__ nxsubs; char const* name; int terminal_resolved; size_t* subs; size_t* xsubs; int note; } ;
struct ia64_opcode {char const* name; scalar_t__* operands; int flags; } ;


 int FUNC_0 (char const*,char*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_1 (char*) ;
 int VAR_13 ;
 struct iclass** VAR_14 ;
 int FUNC_2 (struct ia64_opcode*,struct iclass*,char const*,char const*) ;
 int FUNC_3 (char*,char const*,char const*) ;
 scalar_t__ FUNC_4 (char const*,char*) ;
 int FUNC_5 (char const*) ;
 scalar_t__ FUNC_6 (char const*,char const*,int) ;
 char* FUNC_7 (char const*,char*) ;
 int FUNC_8 (int ,...) ;

__attribute__((used)) static int
FUNC_9 (struct ia64_opcode *VAR_15, struct iclass *VAR_16,
    const char *VAR_17, const char *VAR_18, int *VAR_19)
{
  int VAR_20;
  int VAR_21 = 0;

  if (VAR_16->comment)
    {
      if (FUNC_0 (VAR_16->comment, "Format"))
        {


          if (VAR_17)
            {
              if (FUNC_5 (VAR_16->comment) < FUNC_5 (VAR_17))
                {
                  FUNC_8 (FUNC_1("most recent format '%s'\nappears more restrictive than '%s'\n"),
   VAR_16->comment, VAR_17);
                  VAR_17 = VAR_16->comment;
                }
            }
          else
            VAR_17 = VAR_16->comment;
        }
      else if (FUNC_0 (VAR_16->comment, "Field"))
        {
          if (VAR_18)
            FUNC_8 (FUNC_1("overlapping field %s->%s\n"),
    VAR_16->comment, VAR_18);
          VAR_18 = VAR_16->comment;
        }
    }




  if (VAR_16->nsubs == 0 && VAR_16->nxsubs == 0)
    {
      int VAR_22 = FUNC_0 (VAR_15->name, "mov");
      int VAR_23 = FUNC_4 (VAR_15->name, "mov") == 0;
      int VAR_24 = FUNC_5(VAR_16->name);

      VAR_21 = ((FUNC_6 (VAR_16->name, VAR_15->name, VAR_24) == 0)
                  && (VAR_15->name[VAR_24] == '\0'
                      || VAR_15->name[VAR_24] == '.'));


      if (VAR_21 &&
          (FUNC_4 (VAR_16->name, "break") == 0
           || FUNC_4 (VAR_16->name, "nop") == 0
    || FUNC_4 (VAR_16->name, "hint") == 0))
        VAR_21 = FUNC_4 (VAR_16->name, VAR_15->name) == 0;



      if (VAR_21 && VAR_18)
        {

          if (FUNC_7(VAR_18, "(sf)==") != ((void*)0))
            {
              char *VAR_25;

              if ((VAR_25 = FUNC_7 (VAR_15->name, ".s")) != 0)
  VAR_21 = FUNC_4 (VAR_25 + 1, FUNC_7 (VAR_18, "==") + 2) == 0;
            }

          else if (FUNC_7 (VAR_18, "(lftype)") != ((void*)0))
            {
              if (FUNC_7 (VAR_15->name, "fault") != ((void*)0))
                VAR_21 = FUNC_7 (VAR_18, "fault") != ((void*)0);
              else
                VAR_21 = FUNC_7 (VAR_18, "fault") == ((void*)0);
            }

          else if (FUNC_7 (VAR_18, "(ctype)") != ((void*)0))
            {
              if (FUNC_7 (VAR_15->name, "or.andcm"))
                VAR_21 = FUNC_7 (VAR_18, "or.andcm") != ((void*)0);
              else if (FUNC_7 (VAR_15->name, "and.orcm"))
                VAR_21 = FUNC_7 (VAR_18, "and.orcm") != ((void*)0);
              else if (FUNC_7 (VAR_15->name, "orcm"))
                VAR_21 = FUNC_7 (VAR_18, "or orcm") != ((void*)0);
              else if (FUNC_7 (VAR_15->name, "or"))
                VAR_21 = FUNC_7 (VAR_18, "or orcm") != ((void*)0);
              else if (FUNC_7 (VAR_15->name, "andcm"))
                VAR_21 = FUNC_7 (VAR_18, "and andcm") != ((void*)0);
              else if (FUNC_7 (VAR_15->name, "and"))
                VAR_21 = FUNC_7 (VAR_18, "and andcm") != ((void*)0);
              else if (FUNC_7 (VAR_15->name, "unc"))
                VAR_21 = FUNC_7 (VAR_18, "unc") != ((void*)0);
              else
                VAR_21 = FUNC_4 (VAR_18, "Field(ctype)==") == 0;
            }
        }

      if (VAR_21 && VAR_17)
        {
          if (FUNC_0 (VAR_15->name, "dep")
                   && FUNC_7 (VAR_17, "I13") != ((void*)0))
            VAR_21 = VAR_15->operands[1] == VAR_7;
          else if (FUNC_0 (VAR_15->name, "chk")
                   && FUNC_7 (VAR_17, "M21") != ((void*)0))
            VAR_21 = VAR_15->operands[0] == VAR_3;
          else if (FUNC_0 (VAR_15->name, "lfetch"))
            VAR_21 = (FUNC_7 (VAR_17, "M14 M15") != ((void*)0)
                        && (VAR_15->operands[1] == VAR_10
                            || VAR_15->operands[1] == VAR_8));
          else if (FUNC_0 (VAR_15->name, "br.call")
                   && FUNC_7 (VAR_17, "B5") != ((void*)0))
            VAR_21 = VAR_15->operands[1] == VAR_1;
          else if (FUNC_0 (VAR_15->name, "br.call")
                   && FUNC_7 (VAR_17, "B3") != ((void*)0))
            VAR_21 = VAR_15->operands[1] == VAR_12;
          else if (FUNC_0 (VAR_15->name, "brp")
                   && FUNC_7 (VAR_17, "B7") != ((void*)0))
            VAR_21 = VAR_15->operands[0] == VAR_1;
          else if (FUNC_4 (VAR_16->name, "invala") == 0)
            VAR_21 = FUNC_4 (VAR_15->name, VAR_16->name) == 0;
   else if (FUNC_0 (VAR_15->name, "st")
     && (FUNC_7 (VAR_17, "M5") != ((void*)0)
         || FUNC_7 (VAR_17, "M10") != ((void*)0)))
     VAR_21 = VAR_15->flags & VAR_0;
   else if (FUNC_0 (VAR_15->name, "ld")
     && (FUNC_7 (VAR_17, "M2 M3") != ((void*)0)
         || FUNC_7 (VAR_17, "M12") != ((void*)0)
         || FUNC_7 (VAR_17, "M7 M8") != ((void*)0)))
     VAR_21 = VAR_15->flags & VAR_0;
          else
            VAR_21 = 0;
        }



      if (!VAR_21
          && (FUNC_4 (VAR_15->name, "brl") == 0
              || FUNC_0 (VAR_15->name, "brl."))
          && FUNC_4 (VAR_16->name, "brl.cond") == 0)
        {
          VAR_21 = 1;
        }


      if (!VAR_21
          && (FUNC_4 (VAR_15->name, "br") == 0
              || FUNC_0 (VAR_15->name, "br."))
          && FUNC_4 (VAR_16->name, "br.cond") == 0)
        {
          if (VAR_17)
            VAR_21 = (FUNC_7 (VAR_17, "B4") != ((void*)0)
                        && VAR_15->operands[0] == VAR_1)
              || (FUNC_7 (VAR_17, "B1") != ((void*)0)
                  && VAR_15->operands[0] == VAR_12);
          else
            VAR_21 = 1;
        }


      if (!VAR_21 && FUNC_0 (VAR_15->name, "probe"))
        {
          VAR_21 = FUNC_4 (VAR_16->name, "probe") == 0
            && !((FUNC_7 (VAR_15->name, "fault") != ((void*)0))
                 ^ (VAR_17 && FUNC_7 (VAR_17, "M40") != ((void*)0)));
        }


      if (!VAR_21 && VAR_22)
        {
          if (VAR_23)
            {

              if (FUNC_4 (VAR_16->name, "fmerge") == 0)
                {
                  VAR_21 = VAR_15->operands[0] == VAR_2
                    && VAR_15->operands[1] == VAR_4;
                }

              else if (FUNC_4 (VAR_16->name, "adds") == 0)
                {
                  VAR_21 = (VAR_15->operands[0] == VAR_9
                              && (VAR_15->operands[1] == VAR_11
                                  || (VAR_15->operands[1] == VAR_5)));
                }

              else if (FUNC_4 (VAR_16->name, "addl") == 0)
                {
                  VAR_21 = VAR_15->operands[0] == VAR_9
                    && VAR_15->operands[1] == VAR_6;
                }
            }


          if (!VAR_21 && FUNC_0 (VAR_16->name, "mov_"))
     VAR_21 = FUNC_2 (VAR_15, VAR_16, VAR_17, VAR_18);
        }



      if (VAR_21)
 VAR_16->terminal_resolved = 1;
    }
  else for (VAR_20 = 0; VAR_20 < VAR_16->nsubs; VAR_20++)
    {
      if (FUNC_9 (VAR_15, VAR_14[VAR_16->subs[VAR_20]], VAR_17, VAR_18, VAR_19))
        {
          int VAR_26;

          for (VAR_26 = 0; VAR_26 < VAR_16->nxsubs; VAR_26++)
     if (FUNC_9 (VAR_15, VAR_14[VAR_16->xsubs[VAR_26]], ((void*)0), ((void*)0), ((void*)0)))
       return 0;

          if (VAR_13 > 1)
            FUNC_3 ("%s is in IC %s\n", VAR_15->name, VAR_16->name);

          VAR_21 = 1;
          break;
        }
    }


  if (VAR_21)
    {
      if (VAR_16->note && VAR_19)
        {
          if (*VAR_19 && *VAR_19 != VAR_16->note)
     FUNC_8 (FUNC_1("overwriting note %d with note %d (IC:%s)\n"),
    *VAR_19, VAR_16->note, VAR_16->name);

          *VAR_19 = VAR_16->note;
        }
    }

  return VAR_21;
}
