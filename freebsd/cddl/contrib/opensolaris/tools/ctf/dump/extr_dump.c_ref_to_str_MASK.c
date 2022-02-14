
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint_t ;
struct TYPE_5__ {int cth_stroff; size_t cth_strlen; } ;
typedef TYPE_1__ ctf_header_t ;
struct TYPE_6__ {char* cd_ctfdata; scalar_t__ cd_ctflen; } ;
typedef TYPE_2__ ctf_data_t ;


 size_t FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static const char *
FUNC_2(uint_t VAR_1, const ctf_header_t *VAR_2, const ctf_data_t *VAR_3)
{
 size_t VAR_4 = FUNC_0(VAR_1);
 const char *VAR_5 = VAR_3->cd_ctfdata + VAR_2->cth_stroff + VAR_4;

 if (FUNC_1(VAR_1) != VAR_0)
  return ("<< ??? - name in external strtab >>");

 if (VAR_4 >= VAR_2->cth_strlen)
  return ("<< ??? - name exceeds strlab len >>");

 if (VAR_2->cth_stroff + VAR_4 >= VAR_3->cd_ctflen)
  return ("<< ??? - file truncated >>");

 if (VAR_5[0] == '\0')
  return ("(anon)");

 return (VAR_5);
}
