
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ voidpf ;
struct TYPE_5__ {scalar_t__ opaque; scalar_t__ zfree; scalar_t__ zalloc; } ;
struct TYPE_4__ {TYPE_2__ rb_zstr; } ;
typedef TYPE_1__ resbuf_t ;
typedef scalar_t__ free_func ;
typedef scalar_t__ alloc_func ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*,int ) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (int) ;

__attribute__((used)) static void
FUNC_3(resbuf_t *VAR_2)
{
 int VAR_3;

 VAR_2->rb_zstr.zalloc = (alloc_func)0;
 VAR_2->rb_zstr.zfree = (free_func)0;
 VAR_2->rb_zstr.opaque = (voidpf)0;

 if ((VAR_3 = FUNC_0(&VAR_2->rb_zstr, VAR_0)) != VAR_1)
  FUNC_1("zlib start failed: %s", FUNC_2(VAR_3));
}
