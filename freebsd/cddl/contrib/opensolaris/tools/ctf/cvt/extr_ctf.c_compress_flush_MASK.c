
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ avail_out; scalar_t__ next_out; } ;
struct TYPE_5__ {TYPE_3__ rb_zstr; scalar_t__ rb_ptr; } ;
typedef TYPE_1__ resbuf_t ;
typedef scalar_t__ caddr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_3__*,int) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int) ;

__attribute__((used)) static void
FUNC_4(resbuf_t *VAR_5, int VAR_6)
{
 int VAR_7;

 for (;;) {
  if (VAR_5->rb_zstr.avail_out == 0)
   FUNC_2(VAR_5);

  VAR_7 = FUNC_0(&VAR_5->rb_zstr, VAR_6);
  if ((VAR_6 == VAR_2 && VAR_7 == VAR_0) ||
      (VAR_6 == VAR_1 && VAR_7 == VAR_4))
   break;
  else if (VAR_7 != VAR_3)
   FUNC_1("zlib finish failed: %s", FUNC_3(VAR_7));
 }
 VAR_5->rb_ptr = (caddr_t)VAR_5->rb_zstr.next_out;
}
