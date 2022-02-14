
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ieee_handle {unsigned int name_indx; int cxx; int abfd; int vars; TYPE_2__* type_stack; } ;
typedef enum debug_var_kind { ____Placeholder_debug_var_kind } debug_var_kind ;
typedef int bfd_vma ;
typedef scalar_t__ bfd_boolean ;
struct TYPE_3__ {unsigned int size; scalar_t__ referencep; } ;
struct TYPE_4__ {TYPE_1__ type; } ;







 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct ieee_handle*,scalar_t__,int,int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct ieee_handle*,int *) ;
 int FUNC_5 (int ,int) ;
 scalar_t__ VAR_3 ;
 unsigned int FUNC_6 (struct ieee_handle*) ;
 int FUNC_7 (struct ieee_handle*,int) ;
 int FUNC_8 (struct ieee_handle*,unsigned int,int) ;
 int FUNC_9 (struct ieee_handle*,unsigned int,char const*) ;
 int FUNC_10 (struct ieee_handle*,int) ;
 int FUNC_11 (struct ieee_handle*,char const*) ;
 int FUNC_12 (struct ieee_handle*,int) ;

__attribute__((used)) static bfd_boolean
FUNC_13 (void *VAR_4, const char *VAR_5, enum debug_var_kind VAR_6,
        bfd_vma VAR_7)
{
  struct ieee_handle *VAR_8 = (struct ieee_handle *) VAR_4;
  unsigned int VAR_9;
  unsigned int VAR_10;
  bfd_boolean VAR_11;
  unsigned int VAR_12;
  bfd_boolean VAR_13;
  int VAR_14;

  VAR_10 = VAR_8->type_stack->type.size;
  VAR_11 = VAR_8->type_stack->type.referencep;
  VAR_12 = FUNC_6 (VAR_8);

  FUNC_1 (! FUNC_3 (&VAR_8->vars));
  if (! FUNC_4 (VAR_8, &VAR_8->vars))
    return VAR_0;

  VAR_9 = VAR_8->name_indx;
  ++VAR_8->name_indx;


  if (! FUNC_10 (VAR_8, (int) VAR_3)
      || ! FUNC_12 (VAR_8, VAR_9)
      || ! FUNC_11 (VAR_8, VAR_5)
      || ! FUNC_7 (VAR_8, (int) VAR_2)
      || ! FUNC_12 (VAR_8, VAR_9)
      || ! FUNC_12 (VAR_8, VAR_12))
    return VAR_0;
  switch (VAR_6)
    {
    default:
      FUNC_0 ();
      return VAR_0;
    case 132:
      if (! FUNC_12 (VAR_8, 8)
   || ! FUNC_2 (VAR_8, VAR_0, VAR_7, VAR_7 + VAR_10))
 return VAR_0;
      VAR_14 = 0;
      VAR_13 = VAR_1;
      break;
    case 128:
      if (! FUNC_12 (VAR_8, 3)
   || ! FUNC_2 (VAR_8, VAR_0, VAR_7, VAR_7 + VAR_10))
 return VAR_0;
      VAR_14 = 1;
      VAR_13 = VAR_1;
      break;
    case 130:
      if (! FUNC_12 (VAR_8, 3)
   || ! FUNC_2 (VAR_8, VAR_0, VAR_7, VAR_7 + VAR_10))
 return VAR_0;
      VAR_14 = 2;
      VAR_13 = VAR_1;
      break;
    case 131:
      if (! FUNC_12 (VAR_8, 1)
   || ! FUNC_12 (VAR_8, VAR_7))
 return VAR_0;
      VAR_14 = 2;
      VAR_13 = VAR_0;
      break;
    case 129:
      if (! FUNC_12 (VAR_8, 2)
   || ! FUNC_12 (VAR_8,
      FUNC_5 (VAR_8->abfd, VAR_7)))
 return VAR_0;
      VAR_14 = 2;
      VAR_13 = VAR_0;
      break;
    }

  if (VAR_13)
    {
      if (! FUNC_8 (VAR_8, VAR_9, VAR_7))
 return VAR_0;
    }




  if (VAR_11)
    {
      unsigned int VAR_15;

      VAR_15 = VAR_8->name_indx;
      ++VAR_8->name_indx;





      if (VAR_14 != 2)
 {
   if (! FUNC_4 (VAR_8, &VAR_8->cxx))
     return VAR_0;
 }

      if (! FUNC_10 (VAR_8, (int) VAR_3)
   || ! FUNC_12 (VAR_8, VAR_15)
   || ! FUNC_11 (VAR_8, "")
   || ! FUNC_7 (VAR_8, (int) VAR_2)
   || ! FUNC_12 (VAR_8, VAR_15)
   || ! FUNC_12 (VAR_8, 0)
   || ! FUNC_12 (VAR_8, 62)
   || ! FUNC_12 (VAR_8, 80)
   || ! FUNC_12 (VAR_8, 3)
   || ! FUNC_8 (VAR_8, VAR_15, 'R')
   || ! FUNC_8 (VAR_8, VAR_15, VAR_14)
   || ! FUNC_9 (VAR_8, VAR_15, VAR_5))
 return VAR_0;
    }

  return VAR_1;
}
