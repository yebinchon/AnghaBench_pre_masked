
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {int has_armap; int flags; struct TYPE_11__* archive_next; } ;
typedef TYPE_1__ bfd ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 TYPE_1__* FUNC_4 (char*,int ) ;
 int FUNC_5 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*,int ) ;
 char* FUNC_7 (char*) ;
 TYPE_1__* VAR_3 ;
 char* VAR_4 ;
 scalar_t__ FUNC_8 (char*,char*,int ) ;
 int FUNC_9 (char*,int ) ;
 scalar_t__ FUNC_10 (int ) ;
 scalar_t__ VAR_5 ;
 int FUNC_11 (int) ;
 char* FUNC_12 (scalar_t__) ;

__attribute__((used)) static void
FUNC_13 (bfd *VAR_6)
{
  bfd *VAR_7;
  char *VAR_8, *VAR_9;
  bfd *VAR_10 = VAR_6->archive_next;

  VAR_8 = FUNC_12 (FUNC_10 (FUNC_2 (VAR_6)) + 1);
  FUNC_9 (VAR_8, FUNC_2 (VAR_6));
  VAR_9 = FUNC_7 (VAR_8);

  if (VAR_9 == ((void*)0))
    FUNC_1 ("could not create temporary file whilst writing archive");

  VAR_4 = VAR_9;

  VAR_7 = FUNC_4 (VAR_9, FUNC_3 (VAR_6));

  if (VAR_7 == ((void*)0))
    FUNC_1 (VAR_8);

  VAR_3 = VAR_7;

  FUNC_6 (VAR_7, VAR_2);



  VAR_7->has_armap = VAR_5 >= 0;

  if (VAR_1)
    {


      VAR_7->flags |= VAR_0;
    }

  if (!FUNC_5 (VAR_7, VAR_10))
    FUNC_1 (VAR_8);

  if (!FUNC_0 (VAR_7))
    FUNC_1 (VAR_8);

  VAR_3 = ((void*)0);
  VAR_4 = ((void*)0);


  FUNC_0 (VAR_6);

  if (FUNC_8 (VAR_9, VAR_8, 0) != 0)
    FUNC_11 (1);
}
