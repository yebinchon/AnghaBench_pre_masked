
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ieee_handle {char const* fnname; unsigned int name_indx; int block_depth; int vars; int cxx; scalar_t__ fnargcount; int fnargs; int fntype; TYPE_2__* type_stack; } ;
typedef int bfd_boolean ;
struct TYPE_3__ {int referencep; } ;
struct TYPE_4__ {TYPE_1__ type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct ieee_handle*,int *) ;
 int FUNC_4 (struct ieee_handle*,char const*,unsigned int,int ,int,int ,int *) ;
 int FUNC_5 (struct ieee_handle*,int *) ;
 scalar_t__ VAR_4 ;
 unsigned int FUNC_6 (struct ieee_handle*) ;
 int FUNC_7 (struct ieee_handle*,int) ;
 int FUNC_8 (struct ieee_handle*,unsigned int,int) ;
 int FUNC_9 (struct ieee_handle*,unsigned int,char const*) ;
 scalar_t__ FUNC_10 (struct ieee_handle*,int) ;
 scalar_t__ FUNC_11 (struct ieee_handle*,char const*) ;
 scalar_t__ FUNC_12 (struct ieee_handle*,unsigned int) ;

__attribute__((used)) static bfd_boolean
FUNC_13 (void *VAR_5, const char *VAR_6, bfd_boolean VAR_7)
{
  struct ieee_handle *VAR_8 = (struct ieee_handle *) VAR_5;
  bfd_boolean VAR_9;
  unsigned int VAR_10, VAR_11;

  VAR_9 = VAR_8->type_stack->type.referencep;
  VAR_10 = FUNC_6 (VAR_8);





  if (! FUNC_2 (&VAR_8->fntype))
    {


      FUNC_0 ();
    }

  VAR_8->fnname = VAR_6;


  if (! FUNC_4 (VAR_8, VAR_6, (unsigned int) -1, 0, VAR_0, VAR_1,
    &VAR_8->fntype)
      || ! FUNC_12 (VAR_8, 'x')
      || ! FUNC_12 (VAR_8, 0x40)
      || ! FUNC_12 (VAR_8, 0)
      || ! FUNC_12 (VAR_8, 0)
      || ! FUNC_12 (VAR_8, VAR_10))
    return VAR_0;

  VAR_11 = FUNC_6 (VAR_8);

  if (! FUNC_5 (VAR_8, &VAR_8->fnargs))
    return VAR_0;
  VAR_8->fnargcount = 0;



  if (VAR_9)
    {
      unsigned int VAR_12;

      VAR_12 = VAR_8->name_indx;
      ++VAR_8->name_indx;
      if (! FUNC_3 (VAR_8, &VAR_8->cxx)
   || ! FUNC_10 (VAR_8, (int) VAR_4)
   || ! FUNC_12 (VAR_8, VAR_12)
   || ! FUNC_11 (VAR_8, "")
   || ! FUNC_7 (VAR_8, (int) VAR_2)
   || ! FUNC_12 (VAR_8, VAR_12)
   || ! FUNC_12 (VAR_8, 0)
   || ! FUNC_12 (VAR_8, 62)
   || ! FUNC_12 (VAR_8, 80)
   || ! FUNC_12 (VAR_8, 3)
   || ! FUNC_8 (VAR_8, VAR_12, 'R')
   || ! FUNC_8 (VAR_8, VAR_12, VAR_7 ? 0 : 1)
   || ! FUNC_9 (VAR_8, VAR_12, VAR_6))
 return VAR_0;
    }

  FUNC_1 (! FUNC_2 (&VAR_8->vars));
  if (! FUNC_3 (VAR_8, &VAR_8->vars))
    return VAR_0;



  ++VAR_8->block_depth;

  return (FUNC_10 (VAR_8, (int) VAR_3)
   && FUNC_10 (VAR_8, VAR_7 ? 4 : 6)
   && FUNC_12 (VAR_8, 0)
   && FUNC_11 (VAR_8, VAR_6)
   && FUNC_12 (VAR_8, 0)
   && FUNC_12 (VAR_8, VAR_11));
}
