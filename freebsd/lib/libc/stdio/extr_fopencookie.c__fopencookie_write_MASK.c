
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ (* write ) (int ,char const*,size_t) ;} ;
struct fopencookie_thunk {int foc_cookie; TYPE_1__ foc_io; } ;


 scalar_t__ FUNC_0 (int ,char const*,size_t) ;

__attribute__((used)) static int
FUNC_1(void *VAR_0, const char *VAR_1, int VAR_2)
{
 struct fopencookie_thunk *VAR_3;

 VAR_3 = VAR_0;


 if (VAR_3->foc_io.write == ((void*)0))
  return (VAR_2);

 return ((int)VAR_3->foc_io.write(VAR_3->foc_cookie, VAR_1,
  (size_t)VAR_2));
}
