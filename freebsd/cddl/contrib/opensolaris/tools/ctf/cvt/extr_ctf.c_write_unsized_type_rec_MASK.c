
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ctf_type_t ;
struct TYPE_3__ {int ctt_size; int ctt_info; int ctt_name; } ;
typedef TYPE_1__ ctf_stype_t ;
typedef int ctf_buf_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,TYPE_1__*,int) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static void
FUNC_3(ctf_buf_t *VAR_1, ctf_type_t *VAR_2)
{
 ctf_stype_t *VAR_3 = (ctf_stype_t *)VAR_2;

 if (VAR_0) {
  FUNC_1(VAR_3->ctt_name);
  FUNC_0(VAR_3->ctt_info);
  FUNC_0(VAR_3->ctt_size);
 }

 FUNC_2(VAR_1, VAR_3, sizeof (*VAR_3));
}
