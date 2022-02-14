
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t ssize_t ;
struct TYPE_5__ {scalar_t__ avail_out; size_t avail_in; int * next_out; void* next_in; } ;
struct TYPE_4__ {scalar_t__ rb_ptr; scalar_t__ rb_size; scalar_t__ rb_base; TYPE_3__ rb_zstr; } ;
typedef TYPE_1__ resbuf_t ;
typedef scalar_t__ caddr_t ;
typedef int Bytef ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_3__*,int ) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int) ;

__attribute__((used)) static ssize_t
FUNC_4(void *VAR_2, size_t VAR_3, void *VAR_4)
{
 resbuf_t *VAR_5 = (resbuf_t *)VAR_4;
 int VAR_6;

 VAR_5->rb_zstr.next_out = (Bytef *)VAR_5->rb_ptr;
 VAR_5->rb_zstr.avail_out = VAR_5->rb_size - (VAR_5->rb_ptr - VAR_5->rb_base);
 VAR_5->rb_zstr.next_in = VAR_2;
 VAR_5->rb_zstr.avail_in = VAR_3;

 while (VAR_5->rb_zstr.avail_in) {
  if (VAR_5->rb_zstr.avail_out == 0)
   FUNC_2(VAR_5);

  if ((VAR_6 = FUNC_0(&VAR_5->rb_zstr, VAR_0)) != VAR_1)
   FUNC_1("zlib deflate failed: %s", FUNC_3(VAR_6));
 }
 VAR_5->rb_ptr = (caddr_t)VAR_5->rb_zstr.next_out;

 return (VAR_3);
}
