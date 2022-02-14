
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* close ) (int ) ;} ;
struct fopencookie_thunk {int foc_cookie; TYPE_1__ foc_io; } ;


 int VAR_0 ;
 int FUNC_0 (struct fopencookie_thunk*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int
FUNC_2(void *VAR_1)
{
 struct fopencookie_thunk *VAR_2;
 int VAR_3, VAR_4;

 VAR_3 = 0;
 VAR_2 = VAR_1;
 if (VAR_2->foc_io.close != ((void*)0))
  VAR_3 = VAR_2->foc_io.close(VAR_2->foc_cookie);

 VAR_4 = VAR_0;
 FUNC_0(VAR_2);
 VAR_0 = VAR_4;
 return (VAR_3);
}
