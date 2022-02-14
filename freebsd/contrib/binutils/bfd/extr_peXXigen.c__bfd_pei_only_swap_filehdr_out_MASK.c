
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int e_magic; int e_cblp; int e_cp; int e_crlc; int e_cparhdr; int e_minalloc; int e_maxalloc; int e_ss; int e_sp; int e_csum; int e_ip; int e_cs; int e_lfarlc; int e_ovno; int* e_res; int e_oemid; int e_oeminfo; int* e_res2; int e_lfanew; int* dos_message; int nt_signature; } ;
struct internal_filehdr {int f_flags; int f_magic; int f_nscns; int f_nsyms; int f_opthdr; TYPE_1__ pe; int f_symptr; } ;
struct external_PEI_filehdr {int nt_signature; int * dos_message; int e_lfanew; int * e_res2; int e_oeminfo; int e_oemid; int * e_res; int e_ovno; int e_lfarlc; int e_cs; int e_ip; int e_csum; int e_sp; int e_ss; int e_maxalloc; int e_minalloc; int e_cparhdr; int e_crlc; int e_cp; int e_cblp; int e_magic; int f_flags; int f_opthdr; int f_nsyms; int f_symptr; int f_timdat; int f_nscns; int f_magic; } ;
typedef int bfd ;
struct TYPE_4__ {scalar_t__ dll; scalar_t__ has_reloc_section; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int,int ) ;
 int FUNC_1 (int *,int,int ) ;
 int VAR_4 ;
 int FUNC_2 (int *,int ,int ) ;
 TYPE_2__* FUNC_3 (int *) ;
 int FUNC_4 (int ) ;

unsigned int
FUNC_5 (bfd * VAR_5, void * VAR_6, void * VAR_7)
{
  int VAR_8;
  struct internal_filehdr *VAR_9 = (struct internal_filehdr *) VAR_6;
  struct external_PEI_filehdr *VAR_10 = (struct external_PEI_filehdr *) VAR_7;

  if (FUNC_3 (VAR_5)->has_reloc_section)
    VAR_9->f_flags &= ~VAR_3;

  if (FUNC_3 (VAR_5)->dll)
    VAR_9->f_flags |= VAR_2;

  VAR_9->pe.e_magic = VAR_0;
  VAR_9->pe.e_cblp = 0x90;
  VAR_9->pe.e_cp = 0x3;
  VAR_9->pe.e_crlc = 0x0;
  VAR_9->pe.e_cparhdr = 0x4;
  VAR_9->pe.e_minalloc = 0x0;
  VAR_9->pe.e_maxalloc = 0xffff;
  VAR_9->pe.e_ss = 0x0;
  VAR_9->pe.e_sp = 0xb8;
  VAR_9->pe.e_csum = 0x0;
  VAR_9->pe.e_ip = 0x0;
  VAR_9->pe.e_cs = 0x0;
  VAR_9->pe.e_lfarlc = 0x40;
  VAR_9->pe.e_ovno = 0x0;

  for (VAR_8 = 0; VAR_8 < 4; VAR_8++)
    VAR_9->pe.e_res[VAR_8] = 0x0;

  VAR_9->pe.e_oemid = 0x0;
  VAR_9->pe.e_oeminfo = 0x0;

  for (VAR_8 = 0; VAR_8 < 10; VAR_8++)
    VAR_9->pe.e_res2[VAR_8] = 0x0;

  VAR_9->pe.e_lfanew = 0x80;



  VAR_9->pe.dos_message[0] = 0x0eba1f0e;
  VAR_9->pe.dos_message[1] = 0xcd09b400;
  VAR_9->pe.dos_message[2] = 0x4c01b821;
  VAR_9->pe.dos_message[3] = 0x685421cd;
  VAR_9->pe.dos_message[4] = 0x70207369;
  VAR_9->pe.dos_message[5] = 0x72676f72;
  VAR_9->pe.dos_message[6] = 0x63206d61;
  VAR_9->pe.dos_message[7] = 0x6f6e6e61;
  VAR_9->pe.dos_message[8] = 0x65622074;
  VAR_9->pe.dos_message[9] = 0x6e757220;
  VAR_9->pe.dos_message[10] = 0x206e6920;
  VAR_9->pe.dos_message[11] = 0x20534f44;
  VAR_9->pe.dos_message[12] = 0x65646f6d;
  VAR_9->pe.dos_message[13] = 0x0a0d0d2e;
  VAR_9->pe.dos_message[14] = 0x24;
  VAR_9->pe.dos_message[15] = 0x0;
  VAR_9->pe.nt_signature = VAR_4;

  FUNC_0 (VAR_5, VAR_9->f_magic, VAR_10->f_magic);
  FUNC_0 (VAR_5, VAR_9->f_nscns, VAR_10->f_nscns);

  FUNC_1 (VAR_5, FUNC_4 (0), VAR_10->f_timdat);
  FUNC_2 (VAR_5, VAR_9->f_symptr,
        VAR_10->f_symptr);
  FUNC_1 (VAR_5, VAR_9->f_nsyms, VAR_10->f_nsyms);
  FUNC_0 (VAR_5, VAR_9->f_opthdr, VAR_10->f_opthdr);
  FUNC_0 (VAR_5, VAR_9->f_flags, VAR_10->f_flags);




  FUNC_0 (VAR_5, VAR_9->pe.e_magic, VAR_10->e_magic);
  FUNC_0 (VAR_5, VAR_9->pe.e_cblp, VAR_10->e_cblp);
  FUNC_0 (VAR_5, VAR_9->pe.e_cp, VAR_10->e_cp);
  FUNC_0 (VAR_5, VAR_9->pe.e_crlc, VAR_10->e_crlc);
  FUNC_0 (VAR_5, VAR_9->pe.e_cparhdr, VAR_10->e_cparhdr);
  FUNC_0 (VAR_5, VAR_9->pe.e_minalloc, VAR_10->e_minalloc);
  FUNC_0 (VAR_5, VAR_9->pe.e_maxalloc, VAR_10->e_maxalloc);
  FUNC_0 (VAR_5, VAR_9->pe.e_ss, VAR_10->e_ss);
  FUNC_0 (VAR_5, VAR_9->pe.e_sp, VAR_10->e_sp);
  FUNC_0 (VAR_5, VAR_9->pe.e_csum, VAR_10->e_csum);
  FUNC_0 (VAR_5, VAR_9->pe.e_ip, VAR_10->e_ip);
  FUNC_0 (VAR_5, VAR_9->pe.e_cs, VAR_10->e_cs);
  FUNC_0 (VAR_5, VAR_9->pe.e_lfarlc, VAR_10->e_lfarlc);
  FUNC_0 (VAR_5, VAR_9->pe.e_ovno, VAR_10->e_ovno);

  for (VAR_8 = 0; VAR_8 < 4; VAR_8++)
    FUNC_0 (VAR_5, VAR_9->pe.e_res[VAR_8], VAR_10->e_res[VAR_8]);

  FUNC_0 (VAR_5, VAR_9->pe.e_oemid, VAR_10->e_oemid);
  FUNC_0 (VAR_5, VAR_9->pe.e_oeminfo, VAR_10->e_oeminfo);

  for (VAR_8 = 0; VAR_8 < 10; VAR_8++)
    FUNC_0 (VAR_5, VAR_9->pe.e_res2[VAR_8], VAR_10->e_res2[VAR_8]);

  FUNC_1 (VAR_5, VAR_9->pe.e_lfanew, VAR_10->e_lfanew);

  for (VAR_8 = 0; VAR_8 < 16; VAR_8++)
    FUNC_1 (VAR_5, VAR_9->pe.dos_message[VAR_8],
       VAR_10->dos_message[VAR_8]);


  FUNC_1 (VAR_5, VAR_9->pe.nt_signature, VAR_10->nt_signature);

  return VAR_1;
}
