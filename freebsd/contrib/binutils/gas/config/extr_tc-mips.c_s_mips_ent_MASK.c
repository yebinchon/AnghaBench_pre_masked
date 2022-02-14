
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int symbolS ;
typedef int procS ;
struct TYPE_6__ {int * func_sym; } ;
struct TYPE_5__ {int flags; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (char) ;
 int VAR_2 ;
 int FUNC_1 () ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ) ;
 TYPE_2__ VAR_3 ;
 TYPE_2__* VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int * FUNC_8 () ;
 char* VAR_6 ;
 int FUNC_9 (TYPE_2__*,char,int) ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_10 (int ,int ) ;
 int VAR_11 ;
 TYPE_1__* FUNC_11 (int *) ;

__attribute__((used)) static void
FUNC_12 (int VAR_12)
{
  symbolS *VAR_13;

  VAR_13 = FUNC_8 ();
  if (*VAR_6 == ',')
    ++VAR_6;
  FUNC_1 ();
  if (FUNC_0 (*VAR_6)
      || *VAR_6 == '-')
    FUNC_7 ();

  if ((FUNC_5 (VAR_11, VAR_9) & VAR_2) == 0)
    FUNC_4 (FUNC_3(".ent or .aent not in text section."));

  if (!VAR_12 && VAR_4)
    FUNC_4 (FUNC_3("missing .end"));

  if (!VAR_12)
    {

      VAR_8 = 0;
      VAR_7 = 0;

      VAR_4 = &VAR_3;
      FUNC_9 (VAR_4, '\0', sizeof (procS));

      VAR_4->func_sym = VAR_13;

      FUNC_11 (VAR_13)->flags |= VAR_0;

      ++VAR_10;

      if (VAR_5 == VAR_1)
        FUNC_10 (FUNC_2 (VAR_13),
     FUNC_2 (VAR_13));
    }

  FUNC_6 ();
}
