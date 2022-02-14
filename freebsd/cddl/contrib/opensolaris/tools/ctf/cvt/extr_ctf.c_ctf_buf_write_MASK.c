
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ ctb_ptr; scalar_t__ ctb_end; } ;
typedef TYPE_1__ ctf_buf_t ;


 size_t FUNC_0 (size_t,size_t) ;
 int FUNC_1 (void const*,scalar_t__,size_t) ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_3(ctf_buf_t *VAR_0, void const *VAR_1, size_t VAR_2)
{
 size_t VAR_3;

 while (VAR_2 != 0) {
  if (VAR_0->ctb_ptr == VAR_0->ctb_end)
   FUNC_2(VAR_0);

  VAR_3 = FUNC_0((size_t)(VAR_0->ctb_end - VAR_0->ctb_ptr), VAR_2);
  FUNC_1(VAR_1, VAR_0->ctb_ptr, VAR_3);
  VAR_0->ctb_ptr += VAR_3;

  VAR_1 = (char const *)VAR_1 + VAR_3;
  VAR_2 -= VAR_3;
 }
}
