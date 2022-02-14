
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct saved_output_info {int dummy; } ;
struct TYPE_15__ {TYPE_4__* section; } ;
struct TYPE_16__ {TYPE_1__ indirect; } ;
struct bfd_link_order {int size; int hash; TYPE_2__ u; scalar_t__ offset; int type; int * next; struct bfd_link_callbacks* callbacks; int * input_bfds_tail; TYPE_3__* input_bfds; } ;
struct bfd_link_info {int size; int hash; TYPE_2__ u; scalar_t__ offset; int type; int * next; struct bfd_link_callbacks* callbacks; int * input_bfds_tail; TYPE_3__* input_bfds; } ;
struct bfd_link_callbacks {int einfo; int multiple_definition; int unattached_reloc; int reloc_dangerous; int reloc_overflow; int undefined_symbol; int warning; } ;
typedef int link_order ;
typedef int link_info ;
typedef int bfd_size_type ;
typedef void bfd_byte ;
struct TYPE_17__ {int section_count; int link_next; } ;
typedef TYPE_3__ bfd ;
typedef int asymbol ;
struct TYPE_18__ {int flags; scalar_t__ rawsize; scalar_t__ size; } ;
typedef TYPE_4__ asection ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*,struct bfd_link_order*) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_3__*,int **) ;
 void* FUNC_4 (TYPE_3__*,struct bfd_link_order*,struct bfd_link_order*,void*,int ,int **) ;
 int FUNC_5 (TYPE_3__*,TYPE_4__*,void*,int ,int) ;
 int FUNC_6 (TYPE_3__*) ;
 int VAR_1 ;
 void* FUNC_7 (int) ;
 int FUNC_8 (TYPE_3__*,int ,void*) ;
 int FUNC_9 (void*) ;
 void* FUNC_10 (int) ;
 int FUNC_11 (struct bfd_link_order*,int ,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;

bfd_byte *
FUNC_12 (bfd *VAR_11,
        asection *VAR_12,
        bfd_byte *VAR_13,
        asymbol **VAR_14)
{
  struct bfd_link_info VAR_15;
  struct bfd_link_order VAR_16;
  struct bfd_link_callbacks VAR_17;
  bfd_byte *VAR_18, *VAR_19;
  int VAR_20;
  void *VAR_21;

  if (! (VAR_12->flags & VAR_0))
    {
      bfd_size_type VAR_22 = VAR_12->rawsize > VAR_12->size ? VAR_12->rawsize : VAR_12->size;
      bfd_size_type VAR_23 = VAR_12->rawsize ? VAR_12->rawsize : VAR_12->size;

      if (VAR_13 == ((void*)0))
 VAR_18 = FUNC_7 (VAR_22);
      else
 VAR_18 = VAR_13;

      if (VAR_18)
 FUNC_5 (VAR_11, VAR_12, VAR_18, 0, VAR_23);

      return VAR_18;
    }





  FUNC_11 (&VAR_15, 0, sizeof (VAR_15));
  VAR_15.input_bfds = VAR_11;
  VAR_15.input_bfds_tail = &VAR_11->link_next;

  VAR_15.hash = FUNC_1 (VAR_11);
  VAR_15.callbacks = &VAR_17;
  VAR_17.warning = VAR_8;
  VAR_17.undefined_symbol = VAR_7;
  VAR_17.reloc_overflow = VAR_5;
  VAR_17.reloc_dangerous = VAR_4;
  VAR_17.unattached_reloc = VAR_6;
  VAR_17.multiple_definition = VAR_3;
  VAR_17.einfo = VAR_2;

  FUNC_11 (&VAR_16, 0, sizeof (VAR_16));
  VAR_16.next = ((void*)0);
  VAR_16.type = VAR_1;
  VAR_16.offset = 0;
  VAR_16.size = VAR_12->size;
  VAR_16.u.indirect.section = VAR_12;

  VAR_19 = ((void*)0);
  if (VAR_13 == ((void*)0))
    {
      VAR_19 = FUNC_7 (VAR_12->size);
      if (VAR_19 == ((void*)0))
 return ((void*)0);
      VAR_13 = VAR_19;
    }
  VAR_21 = FUNC_10 (sizeof (struct saved_output_info)
     * VAR_11->section_count);
  if (VAR_21 == ((void*)0))
    {
      if (VAR_19)
 FUNC_9 (VAR_19);
      return ((void*)0);
    }
  FUNC_8 (VAR_11, VAR_10, VAR_21);

  if (VAR_14 == ((void*)0))
    {
      FUNC_0 (VAR_11, &VAR_15);

      VAR_20 = FUNC_6 (VAR_11);
      VAR_14 = FUNC_7 (VAR_20);
      FUNC_3 (VAR_11, VAR_14);
    }
  else
    VAR_20 = 0;

  VAR_18 = FUNC_4 (VAR_11,
       &VAR_15,
       &VAR_16,
       VAR_13,
       0,
       VAR_14);
  if (VAR_18 == ((void*)0) && VAR_19 != ((void*)0))
    FUNC_9 (VAR_19);

  FUNC_8 (VAR_11, VAR_9, VAR_21);
  FUNC_9 (VAR_21);

  FUNC_2 (VAR_15.hash);
  return VAR_18;
}
