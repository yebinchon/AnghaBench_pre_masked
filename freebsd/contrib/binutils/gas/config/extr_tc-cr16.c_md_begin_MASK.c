
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* mnemonic; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 char const* FUNC_0 (char*) ;
 int FUNC_1 (char const*,...) ;
 int * VAR_4 ;
 TYPE_1__* VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 char* FUNC_2 (int *,char const*,char*) ;
 int * FUNC_3 () ;
 int FUNC_4 (int *,int ,int ) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ FUNC_5 (char*,char const*) ;

void
FUNC_6 (void)
{
  int VAR_15 = 0;


  if ((VAR_4 = FUNC_3 ()) == ((void*)0))
    FUNC_1 (FUNC_0("Virtual memory exhausted"));

  while (VAR_5[VAR_15].mnemonic != ((void*)0))
    {
      const char *VAR_16;
      const char *VAR_17 = VAR_5[VAR_15].mnemonic;

      VAR_16 = FUNC_2 (VAR_4, VAR_17,
        (char *)(VAR_5 + VAR_15));

      if (VAR_16 != ((void*)0) && *VAR_16 != '\0')
        FUNC_1 (FUNC_0("Can't hash `%s': %s\n"), VAR_5[VAR_15].mnemonic,
                  *VAR_16 == 0 ? FUNC_0("(unknown reason)") : VAR_16);





      do
        {
          ++VAR_15;
        }
      while (VAR_5[VAR_15].mnemonic != ((void*)0)
             && FUNC_5 (VAR_5[VAR_15].mnemonic, VAR_17));
    }


  FUNC_4 (& VAR_13, VAR_9, VAR_3);

  FUNC_4 (& VAR_14, VAR_8, VAR_2);

  FUNC_4 (& VAR_11, VAR_7, VAR_1);

  FUNC_4 (& VAR_12, VAR_6, VAR_0);


  VAR_10 = 1;
}
