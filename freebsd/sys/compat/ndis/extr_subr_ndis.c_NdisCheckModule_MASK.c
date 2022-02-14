
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ndis_checkmodule {TYPE_1__* fh; int afilename; } ;
typedef int linker_file_t ;
typedef int caddr_t ;
struct TYPE_2__ {int nf_maplen; int nf_type; int * nf_map; int nf_vp; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ,char*,int*) ;

__attribute__((used)) static int
FUNC_1(linker_file_t VAR_1, void *VAR_2)
{
 struct ndis_checkmodule *VAR_3;
 caddr_t VAR_4, VAR_5;

 VAR_3 = (struct ndis_checkmodule *)VAR_2;
 if (FUNC_0(VAR_1, VAR_3->afilename, "_start", &VAR_4))
  return (0);
 if (FUNC_0(VAR_1, VAR_3->afilename, "_end", &VAR_5))
  return (0);
 VAR_3->fh->nf_vp = VAR_1;
 VAR_3->fh->nf_map = ((void*)0);
 VAR_3->fh->nf_type = VAR_0;
 VAR_3->fh->nf_maplen = (VAR_5 - VAR_4) & 0xFFFFFFFF;
 return (1);
}
