
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char xfi_ftype; scalar_t__ xfi_encoding; scalar_t__ xfi_elen; scalar_t__ xfi_format; scalar_t__ xfi_flen; scalar_t__ xfi_content; scalar_t__ xfi_clen; scalar_t__ xfi_flags; int xfi_fnum; } ;
typedef TYPE_1__ xo_field_info_t ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (char*,unsigned long,int ,unsigned long,char,char,int,char*,int,char*,int,char*) ;

void
FUNC_2 (xo_field_info_t *VAR_0)
{
    xo_field_info_t *VAR_1;

    for (VAR_1 = VAR_0; VAR_1->xfi_ftype; VAR_1++) {
 FUNC_1("%lu(%u): %lx [%c/%u] [%.*s] [%.*s] [%.*s]\n",
        (unsigned long) (VAR_1 - VAR_0), VAR_1->xfi_fnum,
        (unsigned long) VAR_1->xfi_flags,
        FUNC_0((int) VAR_1->xfi_ftype) ? VAR_1->xfi_ftype : ' ',
        VAR_1->xfi_ftype,
        (int) VAR_1->xfi_clen, VAR_1->xfi_content ?: "",
        (int) VAR_1->xfi_flen, VAR_1->xfi_format ?: "",
        (int) VAR_1->xfi_elen, VAR_1->xfi_encoding ?: "");
    }
}
