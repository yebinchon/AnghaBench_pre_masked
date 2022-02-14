
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ ctftab; } ;
typedef TYPE_1__ linker_ctf_t ;
struct TYPE_5__ {int cth_strlen; scalar_t__ cth_stroff; } ;
typedef TYPE_2__ ctf_header_t ;



__attribute__((used)) static const char *
FUNC_0(linker_ctf_t *VAR_0, int VAR_1)
{
 const ctf_header_t *VAR_2 = (const ctf_header_t *) VAR_0->ctftab;;
 const char *VAR_3 = "";

 if (VAR_1 < 0 || VAR_1 >= VAR_2->cth_strlen)
  return(VAR_3);

 VAR_3 = (const char *)(VAR_0->ctftab + VAR_2->cth_stroff + VAR_1 + sizeof(ctf_header_t));

 return (VAR_3);
}
