
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ unw_word ;
struct TYPE_2__ {scalar_t__ reg; } ;
struct unw_state_record {int in_body; scalar_t__ when_target; scalar_t__ region_start; scalar_t__ region_len; int done; int epilogue_count; unsigned char gr_save_loc; int spill_offset; scalar_t__ imask; scalar_t__ any_spills; TYPE_1__ curr; int epilogue_start; scalar_t__ first_region; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct unw_state_record*) ;
 int FUNC_1 (struct unw_state_record*) ;
 int FUNC_2 (struct unw_state_record*) ;
 scalar_t__* VAR_2 ;
 int FUNC_3 (scalar_t__,int ,scalar_t__,int ) ;

__attribute__((used)) static void
FUNC_4 (int VAR_3, unw_word VAR_4, unsigned char VAR_5,
        unsigned char VAR_6, struct unw_state_record *VAR_7)
{
  int VAR_8;

  if (!(VAR_7->in_body || VAR_7->first_region))
    FUNC_0 (VAR_7);
  VAR_7->first_region = 0;


  if (VAR_7->when_target < VAR_7->region_start + VAR_7->region_len)
    {
      VAR_7->done = 1;
      return;
    }

  for (VAR_8 = 0; VAR_8 < VAR_7->epilogue_count; ++VAR_8)
    FUNC_1 (VAR_7);

  VAR_7->epilogue_count = 0;
  VAR_7->epilogue_start = VAR_0;

  if (!VAR_3)
    FUNC_2 (VAR_7);

  VAR_7->region_start += VAR_7->region_len;
  VAR_7->region_len = VAR_4;
  VAR_7->in_body = VAR_3;

  if (!VAR_3)
    {
      for (VAR_8 = 0; VAR_8 < 4; ++VAR_8)
 {
   if (VAR_5 & 0x8)
     FUNC_3 (VAR_7->curr.reg + VAR_2[VAR_8], VAR_1,
       VAR_7->region_start + VAR_7->region_len - 1, VAR_6++);
   VAR_5 <<= 1;
 }
      VAR_7->gr_save_loc = VAR_6;
      VAR_7->any_spills = 0;
      VAR_7->imask = 0;
      VAR_7->spill_offset = 0x10;
    }
}
