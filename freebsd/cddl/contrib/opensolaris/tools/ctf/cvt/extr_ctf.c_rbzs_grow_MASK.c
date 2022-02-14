
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int avail_out; int * next_out; } ;
struct TYPE_5__ {TYPE_1__ rb_zstr; scalar_t__ rb_ptr; scalar_t__ rb_base; int rb_size; } ;
typedef TYPE_2__ resbuf_t ;
typedef scalar_t__ off_t ;
typedef scalar_t__ caddr_t ;
typedef int Bytef ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__,int ) ;

__attribute__((used)) static void
FUNC_1(resbuf_t *VAR_1)
{
 off_t VAR_2 = (caddr_t)VAR_1->rb_zstr.next_out - VAR_1->rb_base;

 VAR_1->rb_size += VAR_0;
 VAR_1->rb_base = FUNC_0(VAR_1->rb_base, VAR_1->rb_size);
 VAR_1->rb_ptr = VAR_1->rb_base + VAR_2;
 VAR_1->rb_zstr.next_out = (Bytef *)(VAR_1->rb_ptr);
 VAR_1->rb_zstr.avail_out += VAR_0;
}
