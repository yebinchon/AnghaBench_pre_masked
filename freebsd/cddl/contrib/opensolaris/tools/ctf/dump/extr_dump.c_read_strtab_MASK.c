
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int ulong_t ;
struct TYPE_6__ {size_t cth_strlen; int cth_stroff; } ;
typedef TYPE_1__ ctf_header_t ;
struct TYPE_7__ {char* cd_ctfdata; scalar_t__ cd_ctflen; } ;
typedef TYPE_2__ ctf_data_t ;
struct TYPE_8__ {size_t s_strlen; int s_strmax; int s_nstr; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,size_t) ;
 int FUNC_1 (char*) ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,int ,char*) ;
 TYPE_3__ VAR_3 ;
 int FUNC_4 (char const*) ;

__attribute__((used)) static int
FUNC_5(const ctf_header_t *VAR_4, const ctf_data_t *VAR_5)
{
 size_t VAR_6, VAR_7, VAR_8 = VAR_4->cth_strlen;
 const char *VAR_9 = VAR_5->cd_ctfdata + VAR_4->cth_stroff;

 if (VAR_2 != VAR_1)
  FUNC_2("- String Table ");

 if (VAR_4->cth_stroff >= VAR_5->cd_ctflen)
  FUNC_1("file is truncated or cth_stroff is corrupt\n");
 if (VAR_4->cth_stroff + VAR_4->cth_strlen > VAR_5->cd_ctflen)
  FUNC_1("file is truncated or cth_strlen is corrupt\n");

 for (VAR_7 = 0; VAR_8 != 0; VAR_7 += VAR_6) {
  if (VAR_2 != VAR_1) {
   (void) FUNC_3("  [%lu] %s\n", (ulong_t)VAR_7,
       VAR_9[0] == '\0' ? "\\0" : VAR_9);
  }
  VAR_6 = FUNC_4(VAR_9) + 1;
  VAR_8 -= VAR_6;
  VAR_9 += VAR_6;

  VAR_3.s_nstr++;
  VAR_3.s_strlen += VAR_6;
  VAR_3.s_strmax = FUNC_0(VAR_3.s_strmax, VAR_6);
 }

 return (VAR_0);
}
