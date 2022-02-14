
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* xvec; } ;
typedef TYPE_2__ bfd ;
struct TYPE_4__ {scalar_t__ ar_max_namelen; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*,char const*,int) ;
 scalar_t__ FUNC_1 (char const*) ;
 void* FUNC_2 (char const*,char) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static const char *
FUNC_4 (const char *VAR_2, bfd *VAR_3)
{
  const char *VAR_4;

  if (VAR_1)
    return VAR_2;

  VAR_4 = FUNC_2 (VAR_2, '/');
  if (VAR_4 != (char *) ((void*)0))
    VAR_4++;
  else
    VAR_4 = VAR_2;

  if (VAR_0
      && VAR_3 != ((void*)0)
      && FUNC_1 (VAR_4) > VAR_3->xvec->ar_max_namelen)
    {
      char *VAR_5;


      VAR_5 = (char *) FUNC_3 (VAR_3->xvec->ar_max_namelen + 1);
      FUNC_0 (VAR_5, VAR_4, VAR_3->xvec->ar_max_namelen);
      VAR_5[VAR_3->xvec->ar_max_namelen] = '\0';
      VAR_4 = VAR_5;
    }

  return VAR_4;
}
