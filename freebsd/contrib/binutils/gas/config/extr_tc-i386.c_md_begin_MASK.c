
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {TYPE_2__ const* start; TYPE_2__ const* end; } ;
typedef TYPE_1__ templates ;
struct TYPE_7__ {int * name; } ;
typedef TYPE_2__ template ;
struct TYPE_8__ {int * reg_name; } ;
typedef TYPE_3__ reg_entry ;
typedef int PTR ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int) ;
 scalar_t__ VAR_1 ;
 char FUNC_4 (int) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int ,int *,char const*) ;
 int VAR_2 ;
 int VAR_3 ;
 char* VAR_4 ;
 scalar_t__ VAR_5 ;
 char* FUNC_7 (int ,int *,int ) ;
 int FUNC_8 () ;
 TYPE_2__* VAR_6 ;
 TYPE_3__* VAR_7 ;
 unsigned int VAR_8 ;
 char* VAR_9 ;
 char* VAR_10 ;
 int VAR_11 ;
 char* VAR_12 ;
 char* VAR_13 ;
 int FUNC_9 (int ,int) ;
 int VAR_14 ;
 char* VAR_15 ;
 scalar_t__ FUNC_10 (int *,int *) ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 scalar_t__ FUNC_11 (int) ;

void
FUNC_12 ()
{
  const char *VAR_19;


  VAR_11 = FUNC_8 ();

  {
    const template *VAR_20;
    templates *VAR_21;


    VAR_20 = VAR_6;
    VAR_21 = (templates *) FUNC_11 (sizeof (templates));
    VAR_21->start = VAR_20;

    while (1)
      {
 ++VAR_20;
 if (VAR_20->name == ((void*)0)
     || FUNC_10 (VAR_20->name, (VAR_20 - 1)->name) != 0)
   {


     VAR_21->end = VAR_20;
     VAR_19 = FUNC_7 (VAR_11,
        (VAR_20 - 1)->name,
        (PTR) VAR_21);
     if (VAR_19)
       {
  FUNC_6 (FUNC_5("Internal Error:  Can't hash %s: %s"),
     (VAR_20 - 1)->name,
     VAR_19);
       }
     if (VAR_20->name == ((void*)0))
       break;
     VAR_21 = (templates *) FUNC_11 (sizeof (templates));
     VAR_21->start = VAR_20;
   }
      }
  }


  VAR_14 = FUNC_8 ();
  {
    const reg_entry *VAR_22;
    unsigned int VAR_23 = VAR_8;

    for (VAR_22 = VAR_7; VAR_23--; VAR_22++)
      {
 VAR_19 = FUNC_7 (VAR_14, VAR_22->reg_name, (PTR) VAR_22);
 if (VAR_19)
   FUNC_6 (FUNC_5("Internal Error:  Can't hash %s: %s"),
      VAR_22->reg_name,
      VAR_19);
      }
  }


  {
    int VAR_24;
    char *VAR_25;

    for (VAR_24 = 0; VAR_24 < 256; VAR_24++)
      {
 if (FUNC_1 (VAR_24))
   {
     VAR_4[VAR_24] = VAR_24;
     VAR_10[VAR_24] = VAR_24;
     VAR_15[VAR_24] = VAR_24;
     VAR_12[VAR_24] = VAR_24;
   }
 else if (FUNC_2 (VAR_24))
   {
     VAR_10[VAR_24] = VAR_24;
     VAR_15[VAR_24] = VAR_24;
     VAR_12[VAR_24] = VAR_24;
   }
 else if (FUNC_3 (VAR_24))
   {
     VAR_10[VAR_24] = FUNC_4 (VAR_24);
     VAR_15[VAR_24] = VAR_10[VAR_24];
     VAR_12[VAR_24] = VAR_24;
   }

 if (FUNC_0 (VAR_24) || FUNC_1 (VAR_24))
   VAR_9[VAR_24] = VAR_24;
 else if (VAR_24 >= 128)
   {
     VAR_9[VAR_24] = VAR_24;
     VAR_12[VAR_24] = VAR_24;
   }
      }
    VAR_4['-'] = '-';
    VAR_10['-'] = '-';
    VAR_10['.'] = '.';
    VAR_9['_'] = '_';
    VAR_9['.'] = '.';

    for (VAR_25 = VAR_13; *VAR_25 != '\0'; VAR_25++)
      VAR_12[(unsigned char) *VAR_25] = *VAR_25;
  }
  if (VAR_5 == VAR_0)
    {
      VAR_18 = 16;
      VAR_17 = -8;
    }
  else
    {
      VAR_18 = 8;
      VAR_17 = -4;
    }
}
