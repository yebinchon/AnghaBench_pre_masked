
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ ushort_t ;
struct TYPE_5__ {scalar_t__ ctt_size; scalar_t__ ctt_info; int ctt_name; int ctt_lsizelo; int ctt_lsizehi; } ;
typedef TYPE_1__ ctf_type_t ;
typedef TYPE_1__ ctf_stype_t ;
typedef int ctf_buf_t ;


 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (size_t) ;
 int FUNC_1 (size_t) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,TYPE_1__*,int) ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static void
FUNC_5(ctf_buf_t *VAR_3, ctf_type_t *VAR_4, size_t VAR_5)
{
 if (VAR_5 > VAR_1) {
  VAR_4->ctt_size = VAR_0;
  VAR_4->ctt_lsizehi = FUNC_0(VAR_5);
  VAR_4->ctt_lsizelo = FUNC_1(VAR_5);
  if (VAR_2) {
   FUNC_3(VAR_4->ctt_name);
   FUNC_2(VAR_4->ctt_info);
   FUNC_2(VAR_4->ctt_size);
   FUNC_3(VAR_4->ctt_lsizehi);
   FUNC_3(VAR_4->ctt_lsizelo);
  }
  FUNC_4(VAR_3, VAR_4, sizeof (*VAR_4));
 } else {
  ctf_stype_t *VAR_6 = (ctf_stype_t *)VAR_4;

  VAR_6->ctt_size = (ushort_t)VAR_5;

  if (VAR_2) {
   FUNC_3(VAR_6->ctt_name);
   FUNC_2(VAR_6->ctt_info);
   FUNC_2(VAR_6->ctt_size);
  }

  FUNC_4(VAR_3, VAR_6, sizeof (*VAR_6));
 }
}
