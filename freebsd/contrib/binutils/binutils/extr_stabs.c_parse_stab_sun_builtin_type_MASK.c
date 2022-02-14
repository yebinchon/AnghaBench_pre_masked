
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int debug_type ;
typedef int bfd_vma ;
typedef int bfd_boolean ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char const*) ;
 int FUNC_1 (void*,int,int ) ;
 int FUNC_2 (void*) ;
 int FUNC_3 (char const**,int *) ;

__attribute__((used)) static debug_type
FUNC_4 (void *VAR_3, const char **VAR_4)
{
  const char *VAR_5;
  bfd_boolean VAR_6;
  bfd_vma VAR_7;

  VAR_5 = *VAR_4;

  switch (**VAR_4)
    {
    case 's':
      VAR_6 = VAR_1;
      break;
    case 'u':
      VAR_6 = VAR_2;
      break;
    default:
      FUNC_0 (VAR_5);
      return VAR_0;
    }
  ++*VAR_4;





  if (**VAR_4 == 'c')
    ++*VAR_4;





  (void) FUNC_3 (VAR_4, (bfd_boolean *) ((void*)0));
  if (**VAR_4 != ';')
    {
      FUNC_0 (VAR_5);
      return VAR_0;
    }
  ++*VAR_4;


  (void) FUNC_3 (VAR_4, (bfd_boolean *) ((void*)0));
  if (**VAR_4 != ';')
    {
      FUNC_0 (VAR_5);
      return VAR_0;
    }
  ++*VAR_4;


  VAR_7 = FUNC_3 (VAR_4, (bfd_boolean *) ((void*)0));







  if (**VAR_4 == ';')
    ++*VAR_4;

  if (VAR_7 == 0)
    return FUNC_2 (VAR_3);

  return FUNC_1 (VAR_3, VAR_7 / 8, VAR_6);
}
