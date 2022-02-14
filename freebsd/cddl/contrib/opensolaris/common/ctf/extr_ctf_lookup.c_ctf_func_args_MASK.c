
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int ushort_t ;
typedef size_t ulong_t ;
typedef scalar_t__ uint_t ;
typedef int ctf_id_t ;
struct TYPE_6__ {int ctc_argc; } ;
typedef TYPE_1__ ctf_funcinfo_t ;
struct TYPE_7__ {scalar_t__* ctf_sxlate; scalar_t__ ctf_buf; } ;
typedef TYPE_2__ ctf_file_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__,int ) ;
 scalar_t__ FUNC_1 (TYPE_2__*,size_t,TYPE_1__*) ;

int
FUNC_2(ctf_file_t *VAR_1, ulong_t VAR_2, uint_t VAR_3, ctf_id_t *VAR_4)
{
 const ushort_t *VAR_5;
 ctf_funcinfo_t VAR_6;

 if (FUNC_1(VAR_1, VAR_2, &VAR_6) == VAR_0)
  return (VAR_0);





 VAR_5 = (ushort_t *)((uintptr_t)VAR_1->ctf_buf + VAR_1->ctf_sxlate[VAR_2]) + 2;

 for (VAR_3 = FUNC_0(VAR_3, VAR_6.ctc_argc); VAR_3 != 0; VAR_3--)
  *VAR_4++ = *VAR_5++;

 return (0);
}
