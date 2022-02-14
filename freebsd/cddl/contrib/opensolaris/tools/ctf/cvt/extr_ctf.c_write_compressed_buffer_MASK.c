
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {size_t rb_base; size_t rb_ptr; int rb_size; } ;
typedef TYPE_1__ resbuf_t ;
typedef int ctf_header_t ;
struct TYPE_11__ {int ctb_strtab; scalar_t__ ctb_base; scalar_t__ ctb_ptr; } ;
typedef TYPE_2__ ctf_buf_t ;
typedef size_t caddr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,size_t,int) ;
 int FUNC_1 (scalar_t__,scalar_t__,TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,int ) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int *,int (*) (scalar_t__,scalar_t__,TYPE_1__*),TYPE_1__*) ;
 size_t FUNC_6 (int ) ;

__attribute__((used)) static caddr_t
FUNC_7(ctf_header_t *VAR_2, ctf_buf_t *VAR_3, size_t *VAR_4)
{
 resbuf_t VAR_5;
 VAR_5.rb_size = VAR_0;
 VAR_5.rb_base = FUNC_6(VAR_5.rb_size);
 FUNC_0(VAR_2, VAR_5.rb_base, sizeof (ctf_header_t));
 VAR_5.rb_ptr = VAR_5.rb_base + sizeof (ctf_header_t);

 FUNC_4(&VAR_5);
 (void) FUNC_1(VAR_3->ctb_base, VAR_3->ctb_ptr - VAR_3->ctb_base,
     &VAR_5);
 FUNC_3(&VAR_5, VAR_1);
 (void) FUNC_5(&VAR_3->ctb_strtab, FUNC_1, &VAR_5);
 FUNC_2(&VAR_5);

 *VAR_4 = (VAR_5.rb_ptr - VAR_5.rb_base);
 return (VAR_5.rb_base);
}
