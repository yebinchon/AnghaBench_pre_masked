
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_9__ ;
typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


struct TYPE_19__ {int num_exports; TYPE_9__* exports; scalar_t__ name; } ;
typedef TYPE_2__ def_file ;
struct TYPE_20__ {int has_armap; struct TYPE_20__* archive_next; } ;
typedef TYPE_3__ bfd ;
struct TYPE_22__ {char* internal_name; char* name; int flag_data; } ;
struct TYPE_21__ {TYPE_1__* exports; } ;
struct TYPE_18__ {scalar_t__ flag_private; } ;


 int FUNC_0 (char) ;
 char* FUNC_1 (char*) ;
 int VAR_0 ;
 int FUNC_2 (TYPE_3__*) ;
 TYPE_3__* FUNC_3 (char const*,int ) ;
 int FUNC_4 (TYPE_3__*,TYPE_3__*) ;
 int FUNC_5 (TYPE_3__*,int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 char* VAR_3 ;
 int FUNC_6 (char*,...) ;
 int FUNC_7 (char*,char const*) ;
 TYPE_3__* FUNC_8 (TYPE_3__*) ;
 TYPE_3__* FUNC_9 (TYPE_9__*,TYPE_3__*,int) ;
 TYPE_3__* FUNC_10 (TYPE_3__*) ;
 TYPE_5__* VAR_4 ;
 int FUNC_11 (char const*) ;
 char* FUNC_12 (scalar_t__) ;

void
FUNC_13 (def_file *VAR_5, const char *VAR_6)
{
  int VAR_7;
  bfd *VAR_8;
  bfd *VAR_9;
  bfd *VAR_10;
  bfd *VAR_11 = 0;

  VAR_1 = (VAR_5->name) ? VAR_5->name : VAR_2;
  VAR_3 = FUNC_12 (VAR_1);
  for (VAR_7 = 0; VAR_3[VAR_7]; VAR_7++)
    if (!FUNC_0 (VAR_3[VAR_7]))
      VAR_3[VAR_7] = '_';

  FUNC_11 (VAR_6);

  VAR_10 = FUNC_3 (VAR_6, 0);

  if (!VAR_10)
    {

      FUNC_6 (FUNC_1("%XCan't open .lib file: %s\n"), VAR_6);
      return;
    }


  FUNC_7 (FUNC_1("Creating library file: %s\n"), VAR_6);

  FUNC_5 (VAR_10, VAR_0);
  VAR_10->has_armap = 1;


  VAR_8 = FUNC_8 (VAR_10);

  for (VAR_7 = 0; VAR_7 < VAR_5->num_exports; VAR_7++)
    {

      char *VAR_12 = VAR_5->exports[VAR_7].internal_name;
      bfd *VAR_13;


      if (VAR_4->exports[VAR_7].flag_private)
 continue;
      VAR_5->exports[VAR_7].internal_name = VAR_5->exports[VAR_7].name;
      VAR_13 = FUNC_9 (VAR_5->exports + VAR_7, VAR_10,
      ! (VAR_5->exports + VAR_7)->flag_data);
      VAR_13->archive_next = VAR_11;
      VAR_11 = VAR_13;
      VAR_5->exports[VAR_7].internal_name = VAR_12;
    }

  VAR_9 = FUNC_10 (VAR_10);

  if (VAR_8 == ((void*)0) || VAR_9 == ((void*)0))
    return;


  VAR_8->archive_next = VAR_11;
  VAR_9->archive_next = VAR_8;
  VAR_11 = VAR_9;

  if (! FUNC_4 (VAR_10, VAR_11))
    FUNC_6 ("%Xbfd_set_archive_head: %E\n");

  if (! FUNC_2 (VAR_10))
    FUNC_6 ("%Xbfd_close %s: %E\n", VAR_6);

  while (VAR_11 != ((void*)0))
    {
      bfd *VAR_14 = VAR_11->archive_next;
      FUNC_2 (VAR_11);
      VAR_11 = VAR_14;
    }
}
