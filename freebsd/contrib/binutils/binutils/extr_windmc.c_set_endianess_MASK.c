
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ byteorder; char* name; } ;
typedef TYPE_1__ bfd_target ;
typedef int bfd ;


 scalar_t__ VAR_0 ;
 char** FUNC_0 () ;
 TYPE_1__* FUNC_1 (char const*,int *) ;
 char const* VAR_1 ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (char const*,char) ;
 size_t FUNC_4 (char const*) ;
 char* FUNC_5 (char const*,char const*) ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_6 (bfd *VAR_3, const char *VAR_4)
{
  const bfd_target *VAR_5;

  VAR_1 = ((void*)0);
  VAR_5 = FUNC_1 (VAR_4, VAR_3);
  if (! VAR_5)
    FUNC_2 ("Can't detect target endianess and architecture.");
  VAR_2 = ((VAR_5->byteorder == VAR_0) ? 1 : 0);
  {
    const char *VAR_6 = VAR_5->name;
    const char **VAR_7 = FUNC_0 ();

    if (VAR_7 && VAR_6)
      {
 if (FUNC_3 (VAR_6, '-') != ((void*)0))
   VAR_6 = FUNC_3 (VAR_6, '-') + 1;
 while (*VAR_7 != ((void*)0))
   {
     const char *VAR_8 = FUNC_5 (*VAR_7, VAR_6);
     char VAR_9 = (VAR_8 ? VAR_8[FUNC_4 (VAR_6)] : 0);
     if (VAR_8 && (VAR_8 == *VAR_7 || VAR_8[-1] == ':')
         && VAR_9 == 0)
       {
  VAR_1 = *VAR_7;
  break;
       }
     VAR_7++;
   }
      }
    if (! VAR_1)
      FUNC_2 ("Can't detect architecture.");
  }
}
