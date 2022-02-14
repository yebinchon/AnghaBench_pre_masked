
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct fopencookie_thunk {int foc_io; void* foc_cookie; } ;
typedef int cookie_io_functions_t ;
struct TYPE_4__ {int _flags; } ;
typedef TYPE_1__ FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char const*,int*) ;
 int VAR_4 ;
 int FUNC_1 (void*,char*,int) ;
 int VAR_5 ;
 int FUNC_2 (void*,char const*,int) ;
 int FUNC_3 (struct fopencookie_thunk*) ;
 TYPE_1__* FUNC_4 (struct fopencookie_thunk*,int (*) (void*,char*,int),int (*) (void*,char const*,int),int ,int ) ;
 struct fopencookie_thunk* FUNC_5 (int) ;

FILE *
FUNC_6(void *VAR_6, const char *VAR_7, cookie_io_functions_t VAR_8)
{
 int (*VAR_9)(void *, char *, int);
 int (*VAR_10)(void *, const char *, int);
 struct fopencookie_thunk *VAR_11;
 FILE *VAR_12;
 int VAR_13, VAR_14;

 if ((VAR_13 = FUNC_0(VAR_7, &VAR_14)) == 0)
  return (((void*)0));

 VAR_11 = FUNC_5(sizeof(*VAR_11));
 if (VAR_11 == ((void*)0))
  return (((void*)0));

 VAR_11->foc_cookie = VAR_6;
 VAR_11->foc_io = VAR_8;

 VAR_9 = FUNC_1;
 VAR_10 = FUNC_2;
 if (VAR_13 == VAR_3)
  VAR_9 = ((void*)0);
 else if (VAR_13 == VAR_2)
  VAR_10 = ((void*)0);

 VAR_12 = FUNC_4(VAR_11, VAR_9, VAR_10, VAR_5,
     VAR_4);
 if (VAR_12 == ((void*)0)) {
  FUNC_3(VAR_11);
  return (((void*)0));
 }

 if ((VAR_14 & VAR_0) != 0)
  VAR_12->_flags |= VAR_1;

 return (VAR_12);
}
