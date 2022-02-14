
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {TYPE_3__* bsp; TYPE_3__* stack; } ;
struct TYPE_6__ {TYPE_1__* types; } ;
struct ieee_info {TYPE_4__ blockstack; TYPE_2__ types; void* dhandle; } ;
typedef scalar_t__ debug_type ;
typedef int bfd_vma ;
typedef int bfd_byte ;
typedef int bfd_boolean ;
struct TYPE_7__ {unsigned int fnindx; } ;
struct TYPE_5__ {scalar_t__* arg_slots; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (void*,scalar_t__) ;
 scalar_t__ FUNC_2 (void*,scalar_t__) ;
 scalar_t__ FUNC_3 (void*,scalar_t__) ;
 int FUNC_4 (struct ieee_info*,int const*,int ) ;
 int FUNC_5 (struct ieee_info*,int const**,int*) ;
 int FUNC_6 (struct ieee_info*,int const**,char const**,unsigned long*) ;

__attribute__((used)) static bfd_boolean
FUNC_7 (struct ieee_info *VAR_4, const bfd_byte **VAR_5,
   unsigned long VAR_6)
{
  const bfd_byte *VAR_7;
  const char *VAR_8;
  unsigned long VAR_9;
  bfd_vma VAR_10;

  VAR_7 = *VAR_5;





  if (VAR_4->blockstack.bsp <= VAR_4->blockstack.stack
      || VAR_4->blockstack.bsp[-1].fnindx == (unsigned int) -1)
    {
      FUNC_4 (VAR_4, VAR_7, FUNC_0("C++ default values not in a function"));
      return VAR_2;
    }

  if (! FUNC_6 (VAR_4, VAR_5, &VAR_8, &VAR_9)
      || ! FUNC_5 (VAR_4, VAR_5, &VAR_10))
    return VAR_2;
  VAR_6 -= 2;

  while (VAR_10-- > 0)
    {
      bfd_vma VAR_11, VAR_12;
      const char *VAR_13;
      unsigned long VAR_14;

      if (! FUNC_5 (VAR_4, VAR_5, &VAR_11))
 return VAR_2;
      --VAR_6;

      switch (VAR_11)
 {
 case 0:
 case 4:
   break;

 case 1:
 case 2:
   if (! FUNC_5 (VAR_4, VAR_5, &VAR_12))
     return VAR_2;
   --VAR_6;
   break;

 case 3:
 case 7:
   if (! FUNC_6 (VAR_4, VAR_5, &VAR_13, &VAR_14))
     return VAR_2;
   --VAR_6;
   break;

 default:
   FUNC_4 (VAR_4, VAR_7, FUNC_0("unrecognized C++ default type"));
   return VAR_2;
 }



    }



  if (VAR_6 > 0)
    {
      void *VAR_15;
      debug_type *VAR_16;

      VAR_15 = VAR_4->dhandle;
      VAR_16 = VAR_4->types.types[VAR_4->blockstack.bsp[-1].fnindx].arg_slots;
      while (VAR_6-- > 0)
 {
   bfd_vma VAR_17;
   debug_type VAR_18;

   if (! FUNC_5 (VAR_4, VAR_5, &VAR_17))
     return VAR_2;

   --VAR_17;
   if (VAR_16 == ((void*)0)
       || VAR_16[VAR_17] == VAR_1
       || (FUNC_2 (VAR_15, VAR_16[VAR_17])
    != VAR_0))
     {
       FUNC_4 (VAR_4, VAR_7, FUNC_0("reference parameter is not a pointer"));
       return VAR_2;
     }

   VAR_18 = FUNC_1 (VAR_15, VAR_16[VAR_17]);
   VAR_16[VAR_17] = FUNC_3 (VAR_15, VAR_18);
   if (VAR_16[VAR_17] == VAR_1)
     return VAR_2;
 }
    }

  return VAR_3;
}
