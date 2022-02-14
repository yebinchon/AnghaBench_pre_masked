
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_1__ ;


typedef int valueT ;
struct TYPE_10__ {int * sy_frag; int * bsym; } ;
typedef TYPE_1__ symbolS ;
typedef int segT ;
typedef int fragS ;


 int FUNC_0 (TYPE_1__*,char*) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 () ;
 int * FUNC_6 (int ) ;
 int FUNC_7 (TYPE_1__*,int ,int) ;
 int VAR_0 ;
 int FUNC_8 (TYPE_1__*) ;
 scalar_t__ FUNC_9 (int *,int) ;
 char* FUNC_10 (char const*) ;
 int VAR_1 ;
 int FUNC_11 (TYPE_1__*) ;
 int FUNC_12 (TYPE_1__*) ;

symbolS *
FUNC_13 (const char *VAR_2,
        segT VAR_3,
        valueT VAR_4,
        fragS *VAR_5 )
{
  char *VAR_6;
  symbolS *VAR_7;

  VAR_6 = FUNC_10 (VAR_2);

  VAR_7 = (symbolS *) FUNC_9 (&VAR_0, sizeof (symbolS));


  FUNC_7 (VAR_7, 0, sizeof (symbolS));

  VAR_7->bsym = FUNC_6 (VAR_1);
  if (VAR_7->bsym == ((void*)0))
    FUNC_3 ("bfd_make_empty_symbol: %s", FUNC_4 (FUNC_5 ()));
  FUNC_0 (VAR_7, VAR_6);

  FUNC_1 (VAR_7, VAR_3);
  FUNC_2 (VAR_7, VAR_4);
  FUNC_11 (VAR_7);

  VAR_7->sy_frag = VAR_5;

  FUNC_8 (VAR_7);





  return VAR_7;
}
