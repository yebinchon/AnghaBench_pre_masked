
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint_t ;
typedef void const uchar_t ;
typedef int dtrace_hdl_t ;
struct TYPE_3__ {scalar_t__ dbu_ptr; int dbu_buf; scalar_t__ dbu_err; int dbu_len; int dbu_resizes; } ;
typedef TYPE_1__ dt_buf_t ;


 int FUNC_0 (void const*,void const*,size_t) ;
 int FUNC_1 (int *,void const*) ;
 int FUNC_2 (int *,scalar_t__) ;
 void const* FUNC_3 (int *,size_t) ;
 scalar_t__ FUNC_4 (int *) ;
 size_t FUNC_5 (size_t,size_t) ;

void
FUNC_6(dtrace_hdl_t *VAR_0, dt_buf_t *VAR_1,
    const void *VAR_2, size_t VAR_3, size_t VAR_4)
{
 size_t VAR_5 = (size_t)(VAR_1->dbu_ptr - VAR_1->dbu_buf);
 size_t VAR_6 = FUNC_5(VAR_5, VAR_4) - VAR_5;

 if (VAR_1->dbu_err != 0) {
  (void) FUNC_2(VAR_0, VAR_1->dbu_err);
  return;
 }

 if (VAR_1->dbu_ptr + VAR_6 + VAR_3 > VAR_1->dbu_buf + VAR_1->dbu_len) {
  size_t VAR_7 = VAR_1->dbu_len * 2;
  uchar_t *VAR_8;
  uint_t VAR_9 = 1;

  while (VAR_1->dbu_ptr + VAR_6 + VAR_3 > VAR_1->dbu_buf + VAR_7) {
   VAR_7 *= 2;
   VAR_9++;
  }

  if ((VAR_8 = FUNC_3(VAR_0, VAR_7)) == ((void*)0)) {
   VAR_1->dbu_err = FUNC_4(VAR_0);
   return;
  }

  FUNC_0(VAR_1->dbu_buf, VAR_8, VAR_5);
  FUNC_1(VAR_0, VAR_1->dbu_buf);

  VAR_1->dbu_buf = VAR_8;
  VAR_1->dbu_ptr = VAR_8 + VAR_5;
  VAR_1->dbu_len = VAR_7;
  VAR_1->dbu_resizes += VAR_9;
 }

 VAR_1->dbu_ptr += VAR_6;
 FUNC_0(VAR_2, VAR_1->dbu_ptr, VAR_3);
 VAR_1->dbu_ptr += VAR_3;
}
