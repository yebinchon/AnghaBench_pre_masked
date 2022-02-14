
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct vmap {unsigned long tstart; unsigned long dstart; scalar_t__ toffs; scalar_t__ dend; scalar_t__ tend; } ;
struct TYPE_6__ {scalar_t__ ldinfo_datasize; scalar_t__ ldinfo_dataorg; scalar_t__ ldinfo_textsize; scalar_t__ ldinfo_textorg; } ;
struct TYPE_5__ {scalar_t__ ldinfo_datasize; scalar_t__ ldinfo_dataorg; scalar_t__ ldinfo_textsize; scalar_t__ ldinfo_textorg; } ;
struct TYPE_7__ {TYPE_2__ l32; TYPE_1__ l64; } ;
typedef TYPE_3__ LdInfo ;
typedef void* CORE_ADDR ;



__attribute__((used)) static void
FUNC_0 (struct vmap *VAR_0, LdInfo *VAR_1, int VAR_2)
{
  if (VAR_2)
    {
      VAR_0->tstart = (CORE_ADDR) VAR_1->l64.ldinfo_textorg;
      VAR_0->tend = VAR_0->tstart + VAR_1->l64.ldinfo_textsize;
      VAR_0->dstart = (CORE_ADDR) VAR_1->l64.ldinfo_dataorg;
      VAR_0->dend = VAR_0->dstart + VAR_1->l64.ldinfo_datasize;
    }
  else
    {
      VAR_0->tstart = (unsigned long) VAR_1->l32.ldinfo_textorg;
      VAR_0->tend = VAR_0->tstart + VAR_1->l32.ldinfo_textsize;
      VAR_0->dstart = (unsigned long) VAR_1->l32.ldinfo_dataorg;
      VAR_0->dend = VAR_0->dstart + VAR_1->l32.ldinfo_datasize;
    }





  VAR_0->tstart += VAR_0->toffs;
}
