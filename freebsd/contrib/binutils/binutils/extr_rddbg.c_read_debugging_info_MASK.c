
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ bfd_boolean ;
typedef int bfd ;
typedef int asymbol ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 void* FUNC_3 () ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int *,int **,long,void*) ;
 int FUNC_6 (int *,void*,scalar_t__*) ;
 int FUNC_7 (int *,int **,long,void*,scalar_t__*) ;
 int FUNC_8 (int *,int **,long,void*,scalar_t__*) ;

void *
FUNC_9 (bfd *VAR_4, asymbol **VAR_5, long VAR_6)
{
  void *VAR_7;
  bfd_boolean VAR_8;

  VAR_7 = FUNC_3 ();
  if (VAR_7 == ((void*)0))
    return ((void*)0);

  if (! FUNC_7 (VAR_4, VAR_5, VAR_6, VAR_7,
        &VAR_8))
    return ((void*)0);

  if (FUNC_2 (VAR_4) == VAR_1)
    {
      if (! FUNC_8 (VAR_4, VAR_5, VAR_6, VAR_7,
           &VAR_8))
 return ((void*)0);
    }

  if (FUNC_2 (VAR_4) == VAR_3)
    {
      if (! FUNC_6 (VAR_4, VAR_7, &VAR_8))
 return ((void*)0);
    }



  if (! VAR_8
      && FUNC_2 (VAR_4) == VAR_2
      && VAR_6 > 0)
    {
      if (! FUNC_5 (VAR_4, VAR_5, VAR_6, VAR_7))
 return ((void*)0);
      VAR_8 = VAR_0;
    }

  if (! VAR_8)
    {
      FUNC_4 (FUNC_0("%s: no recognized debugging information"),
   FUNC_1 (VAR_4));
      return ((void*)0);
    }

  return VAR_7;
}
