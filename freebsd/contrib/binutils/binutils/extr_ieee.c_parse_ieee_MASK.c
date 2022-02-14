
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ bsp; scalar_t__ stack; } ;
struct TYPE_5__ {int * builtins; int * types; scalar_t__ alloc; } ;
struct TYPE_4__ {int * vars; scalar_t__ alloc; } ;
struct ieee_info {TYPE_3__ blockstack; int const* pend; TYPE_2__ types; int * tags; int * global_types; int * global_vars; TYPE_1__ vars; int saw_filename; int const* bytes; int * abfd; void* dhandle; } ;
typedef int ieee_record_enum_type ;
typedef int bfd_size_type ;
typedef int const bfd_byte ;
typedef int bfd_boolean ;
typedef int bfd ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;
 int VAR_4 ;



 int FUNC_1 (struct ieee_info*,int const*,int ) ;

 int VAR_5 ;

 int FUNC_2 (struct ieee_info*,int const**) ;
 int FUNC_3 (struct ieee_info*,int const**) ;
 int FUNC_4 (struct ieee_info*,int const**) ;
 int FUNC_5 (struct ieee_info*,int const**) ;
 int FUNC_6 (struct ieee_info*,int const**) ;

bfd_boolean
FUNC_7 (void *VAR_6, bfd *VAR_7, const bfd_byte *VAR_8, bfd_size_type VAR_9)
{
  struct ieee_info VAR_10;
  unsigned int VAR_11;
  const bfd_byte *VAR_12, *VAR_13;

  VAR_10.dhandle = VAR_6;
  VAR_10.abfd = VAR_7;
  VAR_10.bytes = VAR_8;
  VAR_10.pend = VAR_8 + VAR_9;
  VAR_10.blockstack.bsp = VAR_10.blockstack.stack;
  VAR_10.saw_filename = VAR_2;
  VAR_10.vars.alloc = 0;
  VAR_10.vars.vars = ((void*)0);
  VAR_10.global_vars = ((void*)0);
  VAR_10.types.alloc = 0;
  VAR_10.types.types = ((void*)0);
  VAR_10.global_types = ((void*)0);
  VAR_10.tags = ((void*)0);
  for (VAR_11 = 0; VAR_11 < VAR_0; VAR_11++)
    VAR_10.types.builtins[VAR_11] = VAR_1;

  VAR_12 = VAR_8;
  VAR_13 = VAR_10.pend;
  while (VAR_12 < VAR_13)
    {
      const bfd_byte *VAR_14;
      ieee_record_enum_type VAR_15;

      VAR_14 = VAR_12;

      VAR_15 = (ieee_record_enum_type) *VAR_12++;

      if (VAR_15 == VAR_4)
 VAR_15 = (ieee_record_enum_type) (((unsigned int) VAR_15 << 8) | *VAR_12++);

      if (VAR_15 <= VAR_5)
 {
   FUNC_1 (&VAR_10, VAR_14, FUNC_0("unexpected number"));
   return VAR_2;
 }

      switch (VAR_15)
 {
 default:
   FUNC_1 (&VAR_10, VAR_14, FUNC_0("unexpected record type"));
   return VAR_2;

 case 131:
   if (! FUNC_3 (&VAR_10, &VAR_12))
     return VAR_2;
   break;

 case 130:
   if (! FUNC_4 (&VAR_10, &VAR_12))
     return VAR_2;
   break;

 case 129:
   if (! FUNC_5 (&VAR_10, &VAR_12))
     return VAR_2;
   break;

 case 128:
   if (! FUNC_6 (&VAR_10, &VAR_12))
     return VAR_2;
   break;

 case 132:
   if (! FUNC_2 (&VAR_10, &VAR_12))
     return VAR_2;
   break;
 }
    }

  if (VAR_10.blockstack.bsp != VAR_10.blockstack.stack)
    {
      FUNC_1 (&VAR_10, (const bfd_byte *) ((void*)0),
    FUNC_0("blocks left on stack at end"));
      return VAR_2;
    }

  return VAR_3;
}
