
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct ar_hdr {char* ar_fmag; } ;
typedef int off_t ;
struct TYPE_5__ {int e_next; } ;
struct TYPE_6__ {TYPE_1__ e_ar; } ;
struct TYPE_7__ {scalar_t__ e_kind; size_t e_rawsize; TYPE_2__ e_u; scalar_t__ e_rawfile; } ;
typedef TYPE_3__ Elf ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int VAR_3 ;

off_t
FUNC_1(Elf *VAR_4, off_t VAR_5)
{
 struct ar_hdr *VAR_6;

 if (VAR_4 == ((void*)0) || VAR_4->e_kind != VAR_2 ||
     (VAR_5 & 1) || VAR_5 < VAR_3 ||
     (size_t) VAR_5 + sizeof(struct ar_hdr) >= VAR_4->e_rawsize) {
  FUNC_0(VAR_1, 0);
  return 0;
 }

 VAR_6 = (struct ar_hdr *) (VAR_4->e_rawfile + VAR_5);


 if (VAR_6->ar_fmag[0] != '`' || VAR_6->ar_fmag[1] != '\n') {
  FUNC_0(VAR_0, 0);
  return 0;
 }

 VAR_4->e_u.e_ar.e_next = VAR_5;

 return (VAR_5);
}
