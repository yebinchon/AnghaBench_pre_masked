
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* name; } ;
typedef int FILE ;


 char* FUNC_0 (char*) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (char,int *) ;
 TYPE_1__* VAR_0 ;
 int FUNC_3 (int *,char*,int*,int*) ;

void
FUNC_4 (FILE *VAR_1)
{
  int VAR_2, VAR_3;
  size_t VAR_4;

  FUNC_1 (VAR_1, FUNC_0("MIPS options:\n-EB			generate big endian output\n-EL			generate little endian output\n-g, -g2			do not remove unneeded NOPs or swap branches\n-G NUM			allow referencing objects up to NUM bytes\n			implicitly with the gp register [default 8]\n"));






  FUNC_1 (VAR_1, FUNC_0("-mips1			generate MIPS ISA I instructions\n-mips2			generate MIPS ISA II instructions\n-mips3			generate MIPS ISA III instructions\n-mips4			generate MIPS ISA IV instructions\n-mips5                  generate MIPS ISA V instructions\n-mips32                 generate MIPS32 ISA instructions\n-mips32r2               generate MIPS32 release 2 ISA instructions\n-mips64                 generate MIPS64 ISA instructions\n-mips64r2               generate MIPS64 release 2 ISA instructions\n-march=CPU/-mtune=CPU	generate code/schedule for CPU, where CPU is one of:\n"));
  VAR_3 = 1;

  for (VAR_4 = 0; VAR_0[VAR_4].name != ((void*)0); VAR_4++)
    FUNC_3 (VAR_1, VAR_0[VAR_4].name, &VAR_2, &VAR_3);
  FUNC_3 (VAR_1, "from-abi", &VAR_2, &VAR_3);
  FUNC_2 ('\n', VAR_1);

  FUNC_1 (VAR_1, FUNC_0("-mCPU			equivalent to -march=CPU -mtune=CPU. Deprecated.\n-no-mCPU		don't generate code specific to CPU.\n			For -mCPU and -no-mCPU, CPU must be one of:\n"));




  VAR_3 = 1;

  FUNC_3 (VAR_1, "3900", &VAR_2, &VAR_3);
  FUNC_3 (VAR_1, "4010", &VAR_2, &VAR_3);
  FUNC_3 (VAR_1, "4100", &VAR_2, &VAR_3);
  FUNC_3 (VAR_1, "4650", &VAR_2, &VAR_3);
  FUNC_2 ('\n', VAR_1);

  FUNC_1 (VAR_1, FUNC_0("-mips16			generate mips16 instructions\n-no-mips16		do not generate mips16 instructions\n"));


  FUNC_1 (VAR_1, FUNC_0("-msmartmips		generate smartmips instructions\n-mno-smartmips		do not generate smartmips instructions\n"));


  FUNC_1 (VAR_1, FUNC_0("-mdsp			generate DSP instructions\n-mno-dsp		do not generate DSP instructions\n"));


  FUNC_1 (VAR_1, FUNC_0("-mdspr2			generate DSP R2 instructions\n-mno-dspr2		do not generate DSP R2 instructions\n"));


  FUNC_1 (VAR_1, FUNC_0("-mmt			generate MT instructions\n-mno-mt			do not generate MT instructions\n"));


  FUNC_1 (VAR_1, FUNC_0("-mfix-vr4120		work around certain VR4120 errata\n-mfix-vr4130		work around VR4130 mflo/mfhi errata\n-mgp32			use 32-bit GPRs, regardless of the chosen ISA\n-mfp32			use 32-bit FPRs, regardless of the chosen ISA\n-msym32			assume all symbols have 32-bit values\n-O0			remove unneeded NOPs, do not swap branches\n-O			remove unneeded NOPs and swap branches\n--[no-]construct-floats [dis]allow floating point values to be constructed\n--trap, --no-break	trap exception on div by 0 and mult overflow\n--break, --no-trap	break exception on div by 0 and mult overflow\n"));
  FUNC_1 (VAR_1, FUNC_0("-mocteon-unsupported    error on unsupported Octeon instructions\n-mno-octeon-unsupported do not error on unsupported Octeon instructions\n"));


  FUNC_1 (VAR_1, FUNC_0("-mocteon-useun    generate Octeon unaligned load/store instructions\n-mno-octeon-useun generate MIPS unaligned load/store instructions\n"));


}
