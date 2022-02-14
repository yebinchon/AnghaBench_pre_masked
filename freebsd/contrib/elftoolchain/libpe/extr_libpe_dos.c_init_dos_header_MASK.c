
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* dh_magic; int dh_lastsize; int dh_nblock; int dh_hdrsize; int dh_maxalloc; int dh_sp; int dh_relocpos; int dh_lfanew; } ;
typedef TYPE_1__ PE_DosHdr ;



__attribute__((used)) static void
FUNC_0(PE_DosHdr *VAR_0)
{

 VAR_0->dh_magic[0] = 'M';
 VAR_0->dh_magic[1] = 'Z';
 VAR_0->dh_lastsize = 144;
 VAR_0->dh_nblock = 3;
 VAR_0->dh_hdrsize = 4;
 VAR_0->dh_maxalloc = 65535;
 VAR_0->dh_sp = 184;
 VAR_0->dh_relocpos = 0x40;
 VAR_0->dh_lfanew = 0x80;
}
