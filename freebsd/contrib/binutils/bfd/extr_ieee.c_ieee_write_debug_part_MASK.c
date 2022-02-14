
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


struct TYPE_16__ {void* debug_information_part; } ;
struct TYPE_17__ {TYPE_1__ r; } ;
struct TYPE_18__ {TYPE_2__ w; TYPE_4__* chain_root; } ;
typedef TYPE_3__ ieee_data_type ;
typedef void* file_ptr ;
struct TYPE_19__ {struct TYPE_19__* next; TYPE_5__* this; } ;
typedef TYPE_4__ bfd_chain_type ;
typedef scalar_t__ bfd_boolean ;
struct TYPE_20__ {TYPE_6__* sections; } ;
typedef TYPE_5__ bfd ;
struct TYPE_21__ {int flags; scalar_t__ size; int contents; struct TYPE_21__* next; } ;
typedef TYPE_6__ asection ;


 scalar_t__ VAR_0 ;
 TYPE_3__* FUNC_0 (TYPE_5__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_1 (int ,scalar_t__,TYPE_5__*) ;
 scalar_t__ FUNC_2 (TYPE_5__*,void*,int ) ;
 void* FUNC_3 (TYPE_5__*) ;
 int FUNC_4 () ;
 TYPE_5__* VAR_5 ;
 unsigned char* VAR_6 ;
 unsigned char* VAR_7 ;
 unsigned char* VAR_8 ;
 int FUNC_5 (TYPE_5__*,TYPE_5__*) ;

__attribute__((used)) static bfd_boolean
FUNC_6 (bfd *VAR_9)
{
  ieee_data_type *VAR_10 = FUNC_0 (VAR_9);
  bfd_chain_type *VAR_11 = VAR_10->chain_root;
  unsigned char VAR_12[VAR_1];
  bfd_boolean VAR_13 = VAR_0;
  file_ptr VAR_14 = FUNC_3 (VAR_9);

  VAR_8 = VAR_6 = VAR_12;
  VAR_7 = VAR_12 + VAR_1;
  VAR_6 = VAR_12;
  VAR_5 = VAR_9;

  if (VAR_11 == (bfd_chain_type *) ((void*)0))
    {
      asection *VAR_15;

      for (VAR_15 = VAR_9->sections; VAR_15 != ((void*)0); VAR_15 = VAR_15->next)
 if ((VAR_15->flags & VAR_2) != 0)
   break;
      if (VAR_15 == ((void*)0))
 {
   VAR_10->w.r.debug_information_part = 0;
   return VAR_4;
 }

      VAR_10->w.r.debug_information_part = VAR_14;
      if (FUNC_1 (VAR_15->contents, VAR_15->size, VAR_9) != VAR_15->size)
 return VAR_0;
    }
  else
    {
      while (VAR_11 != (bfd_chain_type *) ((void*)0))
 {
   bfd *VAR_16 = VAR_11->this;
   ieee_data_type *VAR_17 = FUNC_0 (VAR_16);

   if (VAR_17->w.r.debug_information_part)
     {
       if (FUNC_2 (VAR_16, VAR_17->w.r.debug_information_part,
       VAR_3) != 0)
  return VAR_0;
       FUNC_5 (VAR_9, VAR_16);
     }

   VAR_11 = VAR_11->next;
 }

      if (VAR_13)
 VAR_10->w.r.debug_information_part = VAR_14;
      else
 VAR_10->w.r.debug_information_part = 0;

      FUNC_4 ();
    }

  return VAR_4;
}
