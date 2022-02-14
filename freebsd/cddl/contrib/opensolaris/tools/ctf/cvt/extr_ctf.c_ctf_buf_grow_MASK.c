
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ off_t ;
struct TYPE_3__ {scalar_t__ ctb_base; scalar_t__ ctb_ptr; scalar_t__ ctb_size; scalar_t__ ctb_end; } ;
typedef TYPE_1__ ctf_buf_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__,scalar_t__) ;

__attribute__((used)) static void
FUNC_1(ctf_buf_t *VAR_1)
{
 off_t VAR_2 = VAR_1->ctb_ptr - VAR_1->ctb_base;

 VAR_1->ctb_size += VAR_0;
 VAR_1->ctb_base = FUNC_0(VAR_1->ctb_base, VAR_1->ctb_size);
 VAR_1->ctb_end = VAR_1->ctb_base + VAR_1->ctb_size;
 VAR_1->ctb_ptr = VAR_1->ctb_base + VAR_2;
}
