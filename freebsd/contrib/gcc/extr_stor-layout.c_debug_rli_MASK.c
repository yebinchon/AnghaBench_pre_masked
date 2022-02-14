
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* record_layout_info ;
struct TYPE_5__ {scalar_t__ (* ms_bitfield_layout_p ) (int ) ;} ;
struct TYPE_4__ {int record_align; int unpacked_align; int offset_align; int remaining_in_alignment; scalar_t__ pending_statics; scalar_t__ packed_maybe_necessary; int t; int bitpos; int offset; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (int ,char*,int ,int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_3 (int ) ;
 TYPE_2__ VAR_1 ;

void
FUNC_4 (record_layout_info VAR_2)
{
  FUNC_2 (VAR_0, "type", VAR_2->t, 0);
  FUNC_2 (VAR_0, "\noffset", VAR_2->offset, 0);
  FUNC_2 (VAR_0, " bitpos", VAR_2->bitpos, 0);

  FUNC_1 (VAR_0, "\naligns: rec = %u, unpack = %u, off = %u\n",
    VAR_2->record_align, VAR_2->unpacked_align,
    VAR_2->offset_align);


  if (VAR_1.ms_bitfield_layout_p (VAR_2->t))
    FUNC_1 (VAR_0, "remaining in alignment = %u\n", VAR_2->remaining_in_alignment);

  if (VAR_2->packed_maybe_necessary)
    FUNC_1 (VAR_0, "packed may be necessary\n");

  if (VAR_2->pending_statics)
    {
      FUNC_1 (VAR_0, "pending statics:\n");
      FUNC_0 (VAR_2->pending_statics);
    }
}
