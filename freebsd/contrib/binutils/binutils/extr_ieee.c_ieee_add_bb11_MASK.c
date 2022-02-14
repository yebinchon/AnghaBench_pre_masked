
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct ieee_handle {int vars; int abfd; } ;
typedef int bfd_vma ;
typedef int bfd_boolean ;
struct TYPE_3__ {int flags; int index; } ;
typedef TYPE_1__ asection ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 char* FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct ieee_handle*,int *) ;
 int FUNC_4 (struct ieee_handle*,int) ;
 int FUNC_5 (struct ieee_handle*,char*) ;
 int FUNC_6 (struct ieee_handle*,int) ;
 void* FUNC_7 (char const*,char) ;
 char* FUNC_8 (char const*) ;

__attribute__((used)) static bfd_boolean
FUNC_9 (struct ieee_handle *VAR_7, asection *VAR_8, bfd_vma VAR_9,
        bfd_vma VAR_10)
{
  int VAR_11;

  if (! FUNC_2 (&VAR_7->vars))
    {
      if (! FUNC_3 (VAR_7, &VAR_7->vars))
 return VAR_0;
    }
  else
    {
      const char *VAR_12, *VAR_13;



      char *VAR_14, *VAR_15;


      VAR_12 = FUNC_0 (VAR_7->abfd);
      VAR_13 = FUNC_7 (VAR_12, '/');






      if (VAR_13 != ((void*)0))
 ++VAR_13;




      else
 VAR_13 = VAR_12;

      VAR_14 = FUNC_8 (VAR_13);
      VAR_15 = FUNC_7 (VAR_14, '.');
      if (VAR_15 != ((void*)0))
 *VAR_15 = '\0';

      if (! FUNC_3 (VAR_7, &VAR_7->vars)
   || ! FUNC_4 (VAR_7, (int) VAR_5)
   || ! FUNC_4 (VAR_7, 10)
   || ! FUNC_6 (VAR_7, 0)
   || ! FUNC_5 (VAR_7, VAR_14)
   || ! FUNC_5 (VAR_7, "")
   || ! FUNC_6 (VAR_7, 0)
   || ! FUNC_5 (VAR_7, "GNU objcopy"))
 return VAR_0;

      FUNC_1 (VAR_14);
    }

  if ((VAR_8->flags & VAR_2) != 0)
    VAR_11 = 1;
  else if ((VAR_8->flags & VAR_3) != 0)
    VAR_11 = 3;
  else
    VAR_11 = 2;

  if (! FUNC_4 (VAR_7, (int) VAR_5)
      || ! FUNC_4 (VAR_7, 11)
      || ! FUNC_6 (VAR_7, 0)
      || ! FUNC_5 (VAR_7, "")
      || ! FUNC_6 (VAR_7, VAR_11)
      || ! FUNC_6 (VAR_7, VAR_8->index + VAR_1)
      || ! FUNC_6 (VAR_7, VAR_9)
      || ! FUNC_4 (VAR_7, (int) VAR_6)
      || ! FUNC_6 (VAR_7, VAR_10 - VAR_9))
    return VAR_0;

  return VAR_4;
}
