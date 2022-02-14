
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct stat {int st_size; } ;
struct TYPE_4__ {int direction; int * iostream; void* opened_once; int filename; void* cacheable; } ;
typedef TYPE_1__ bfd ;
typedef void* PTR ;
typedef int FILE ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 int FUNC_0 (TYPE_1__*) ;
 int VAR_5 ;
 int FUNC_1 (int ) ;

 int FUNC_2 () ;

 scalar_t__ VAR_6 ;

 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,struct stat*) ;
 int FUNC_5 (int ) ;


FILE *
FUNC_6 (bfd *VAR_7)
{
  VAR_7->cacheable = VAR_4;

  if (VAR_6 >= VAR_0)
    {
      if (! FUNC_2 ())
 return ((void*)0);
    }

  switch (VAR_7->direction)
    {
    case 129:
    case 130:
      VAR_7->iostream = (PTR) FUNC_3 (VAR_7->filename, VAR_1);
      break;
    case 131:
    case 128:
      if (VAR_7->opened_once)
 {
   VAR_7->iostream = (PTR) FUNC_3 (VAR_7->filename, VAR_2);
   if (VAR_7->iostream == ((void*)0))
     VAR_7->iostream = (PTR) FUNC_3 (VAR_7->filename, VAR_3);
 }
      else
 {
   struct stat VAR_8;

   if (FUNC_4 (VAR_7->filename, &VAR_8) == 0 && VAR_8.st_size != 0)
     FUNC_5 (VAR_7->filename);

   VAR_7->iostream = (PTR) FUNC_3 (VAR_7->filename, VAR_3);
   VAR_7->opened_once = VAR_4;
 }
      break;
    }

  if (VAR_7->iostream == ((void*)0))
    FUNC_1 (VAR_5);
  else
    {
      if (! FUNC_0 (VAR_7))
 return ((void*)0);
    }

  return (FILE *) VAR_7->iostream;
}
