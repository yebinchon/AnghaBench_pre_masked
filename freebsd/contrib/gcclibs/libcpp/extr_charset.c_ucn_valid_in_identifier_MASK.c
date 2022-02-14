
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct normalize_state {scalar_t__ prev_class; int previous; void* level; } ;
typedef int cppchar_t ;
typedef int cpp_reader ;
struct TYPE_3__ {int end; int flags; scalar_t__ combine; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int *,int ) ;
 scalar_t__ FUNC_2 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* FUNC_3 (void*,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_4 (int *,int ,char*,int) ;
 int VAR_10 ;
 int VAR_11 ;
 void* VAR_12 ;
 TYPE_1__* VAR_13 ;

__attribute__((used)) static int
FUNC_5 (cpp_reader *VAR_14, cppchar_t VAR_15,
    struct normalize_state *VAR_16)
{
  int VAR_17, VAR_18, VAR_19;

  if (VAR_15 > 0xFFFF)
    return 0;

  VAR_17 = 0;
  VAR_18 = FUNC_0 (VAR_13) - 1;
  while (VAR_18 != VAR_17)
    {
      VAR_19 = (VAR_17 + VAR_18) / 2;
      if (VAR_15 <= VAR_13[VAR_19].end)
 VAR_18 = VAR_19;
      else
 VAR_17 = VAR_19 + 1;
    }




  if (! (VAR_13[VAR_17].flags & (VAR_0 | VAR_4)))
      return 0;

  if (FUNC_2 (VAR_14)
      && ((FUNC_1 (VAR_14, VAR_8) && !(VAR_13[VAR_17].flags & VAR_0))
   || (FUNC_1 (VAR_14, VAR_9)
       && !(VAR_13[VAR_17].flags & VAR_4))))
    return 0;


  if (VAR_13[VAR_17].combine != 0 && VAR_13[VAR_17].combine < VAR_16->prev_class)
    VAR_16->level = VAR_12;
  else if (VAR_13[VAR_17].flags & VAR_3)
    {
      bool VAR_20;
      cppchar_t VAR_21 = VAR_16->previous;


      if (VAR_15 == 0x09BE)
 VAR_20 = VAR_21 != 0x09C7;
      else if (VAR_15 == 0x0B3E)
 VAR_20 = VAR_21 != 0x0B47;
      else if (VAR_15 == 0x0BBE)
 VAR_20 = VAR_21 != 0x0BC6 && VAR_21 != 0x0BC7;
      else if (VAR_15 == 0x0CC2)
 VAR_20 = VAR_21 != 0x0CC6;
      else if (VAR_15 == 0x0D3E)
 VAR_20 = VAR_21 != 0x0D46 && VAR_21 != 0x0D47;







      else if (VAR_15 >= 0x1161 && VAR_15 <= 0x1175)
 VAR_20 = VAR_21 < 0x1100 || VAR_21 > 0x1112;
      else if (VAR_15 >= 0x11A8 && VAR_15 <= 0x11C2)
 VAR_20 = (VAR_21 < 0xAC00 || VAR_21 > 0xD7A3 || (VAR_21 - 0xAC00) % 28 != 0);
      else
 {

   FUNC_4 (VAR_14, VAR_2, "Character %x might not be NFKC", VAR_15);
   VAR_20 = 1;
 }
      if (!VAR_20 && VAR_15 < 0x1161)
 VAR_16->level = VAR_12;
      else if (!VAR_20)
 VAR_16->level = FUNC_3 (VAR_16->level, VAR_11);
    }
  else if (VAR_13[VAR_17].flags & VAR_7)
    ;
  else if (VAR_13[VAR_17].flags & VAR_6)
    VAR_16->level = FUNC_3 (VAR_16->level, VAR_10);
  else if (VAR_13[VAR_17].flags & VAR_1)
    VAR_16->level = FUNC_3 (VAR_16->level, VAR_11);
  else
    VAR_16->level = VAR_12;
  VAR_16->previous = VAR_15;
  VAR_16->prev_class = VAR_13[VAR_17].combine;


  if (FUNC_1 (VAR_14, VAR_8) && (VAR_13[VAR_17].flags & VAR_5))
    return 2;

  return 1;
}
