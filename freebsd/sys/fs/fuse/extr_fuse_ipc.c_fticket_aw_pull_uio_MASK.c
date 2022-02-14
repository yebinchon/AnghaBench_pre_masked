
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct uio {int dummy; } ;
struct fuse_ticket {int tk_aw_type; size_t tk_aw_bufsize; int tk_aw_bufdata; } ;
struct TYPE_3__ {int base; } ;




 int FUNC_0 (TYPE_1__*,size_t) ;
 TYPE_1__* FUNC_1 (struct fuse_ticket*) ;
 int FUNC_2 (char*,struct fuse_ticket*) ;
 size_t FUNC_3 (struct uio*) ;
 int FUNC_4 (int ,size_t,struct uio*) ;

__attribute__((used)) static inline
int
FUNC_5(struct fuse_ticket *VAR_0, struct uio *VAR_1)
{
 int VAR_2 = 0;
 size_t VAR_3 = FUNC_3(VAR_1);

 if (VAR_3) {
  switch (VAR_0->tk_aw_type) {
  case 128:
   FUNC_0(FUNC_1(VAR_0), VAR_3);
   VAR_2 = FUNC_4(FUNC_1(VAR_0)->base, VAR_3, VAR_1);
   break;

  case 129:
   VAR_0->tk_aw_bufsize = VAR_3;
   VAR_2 = FUNC_4(VAR_0->tk_aw_bufdata, VAR_3, VAR_1);
   break;

  default:
   FUNC_2("FUSE: unknown answer type for ticket %p", VAR_0);
  }
 }
 return VAR_2;
}
