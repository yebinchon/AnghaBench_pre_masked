
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct disassemble_info {scalar_t__ mach; void* private_data; scalar_t__ disassembler_options; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 scalar_t__ VAR_25 ;
 int * FUNC_0 (scalar_t__,char*) ;

__attribute__((used)) static int
FUNC_1 (struct disassemble_info *VAR_26)
{
  int VAR_27 = VAR_22;

  if (VAR_0 == 64)
    VAR_27 |= VAR_5;

  if (VAR_26->disassembler_options
      && FUNC_0 (VAR_26->disassembler_options, "booke") != ((void*)0))
    VAR_27 |= VAR_8 | VAR_9;
  else if ((VAR_26->mach == VAR_25)
    || (VAR_26->disassembler_options
        && FUNC_0 (VAR_26->disassembler_options, "e500") != ((void*)0)))
    VAR_27 |= (VAR_8
  | VAR_24 | VAR_17
  | VAR_16 | VAR_10
  | VAR_18 | VAR_11
  | VAR_23);
  else if (VAR_26->disassembler_options
    && FUNC_0 (VAR_26->disassembler_options, "efs") != ((void*)0))
    VAR_27 |= VAR_16;
  else if (VAR_26->disassembler_options
    && FUNC_0 (VAR_26->disassembler_options, "e300") != ((void*)0))
    VAR_27 |= VAR_15 | VAR_13 | VAR_14;
  else if (VAR_26->disassembler_options
    && FUNC_0 (VAR_26->disassembler_options, "440") != ((void*)0))
    VAR_27 |= VAR_8 | VAR_1
      | VAR_3 | VAR_17 | VAR_23;
  else
    VAR_27 |= (VAR_2 | VAR_4 | VAR_13
  | VAR_14 | VAR_6);

  if (VAR_26->disassembler_options
      && FUNC_0 (VAR_26->disassembler_options, "power4") != ((void*)0))
    VAR_27 |= VAR_19;

  if (VAR_26->disassembler_options
      && FUNC_0 (VAR_26->disassembler_options, "power5") != ((void*)0))
    VAR_27 |= VAR_19 | VAR_20;

  if (VAR_26->disassembler_options
      && FUNC_0 (VAR_26->disassembler_options, "cell") != ((void*)0))
    VAR_27 |= VAR_19 | VAR_12 | VAR_6;

  if (VAR_26->disassembler_options
      && FUNC_0 (VAR_26->disassembler_options, "power6") != ((void*)0))
    VAR_27 |= VAR_19 | VAR_20 | VAR_21 | VAR_6;

  if (VAR_26->disassembler_options
      && FUNC_0 (VAR_26->disassembler_options, "any") != ((void*)0))
    VAR_27 |= VAR_7;

  if (VAR_26->disassembler_options)
    {
      if (FUNC_0 (VAR_26->disassembler_options, "32") != ((void*)0))
 VAR_27 &= ~VAR_5;
      else if (FUNC_0 (VAR_26->disassembler_options, "64") != ((void*)0))
 VAR_27 |= VAR_5;
    }

  VAR_26->private_data = (void *)(uintptr_t)VAR_27;
  return VAR_27;
}
