
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee_handle {char const* filename; char* modname; unsigned int name_indx; int vars; int types; int * ranges; int linenos; int cxx; } ;
typedef int bfd_boolean ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct ieee_handle*,int *) ;
 int FUNC_1 (struct ieee_handle*) ;
 int FUNC_2 (struct ieee_handle*,int *) ;
 int FUNC_3 (struct ieee_handle*,int) ;
 int FUNC_4 (struct ieee_handle*,char*) ;
 int FUNC_5 (struct ieee_handle*,int ) ;
 void* FUNC_6 (char const*,char) ;
 char* FUNC_7 (char const*) ;

__attribute__((used)) static bfd_boolean
FUNC_8 (void *VAR_3, const char *VAR_4)
{
  struct ieee_handle *VAR_5 = (struct ieee_handle *) VAR_3;
  const char *VAR_6;



  char *VAR_7, *VAR_8;
  unsigned int VAR_9;

  if (VAR_5->filename != ((void*)0))
    {
      if (! FUNC_1 (VAR_5))
 return VAR_0;
    }

  VAR_5->filename = VAR_4;
  VAR_6 = FUNC_6 (VAR_4, '/');







  if (VAR_6 != ((void*)0))
    ++VAR_6;




  else
    VAR_6 = VAR_4;

  VAR_7 = FUNC_7 (VAR_6);
  VAR_8 = FUNC_6 (VAR_7, '.');
  if (VAR_8 != ((void*)0))
    *VAR_8 = '\0';
  VAR_5->modname = VAR_7;

  if (! FUNC_2 (VAR_5, &VAR_5->types)
      || ! FUNC_2 (VAR_5, &VAR_5->vars)
      || ! FUNC_2 (VAR_5, &VAR_5->cxx)
      || ! FUNC_2 (VAR_5, &VAR_5->linenos))
    return VAR_0;
  VAR_5->ranges = ((void*)0);



  if (! FUNC_0 (VAR_5, &VAR_5->types)
      || ! FUNC_3 (VAR_5, (int) VAR_2)
      || ! FUNC_3 (VAR_5, 1)
      || ! FUNC_5 (VAR_5, 0)
      || ! FUNC_4 (VAR_5, VAR_5->modname))
    return VAR_0;

  VAR_9 = VAR_5->name_indx;
  ++VAR_5->name_indx;
  if (! FUNC_0 (VAR_5, &VAR_5->vars)
      || ! FUNC_3 (VAR_5, (int) VAR_2)
      || ! FUNC_3 (VAR_5, 3)
      || ! FUNC_5 (VAR_5, 0)
      || ! FUNC_4 (VAR_5, VAR_5->modname))
    return VAR_0;

  return VAR_1;
}
