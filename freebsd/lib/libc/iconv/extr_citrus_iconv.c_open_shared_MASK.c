
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct _citrus_iconv_shared {TYPE_1__* ci_ops; int * ci_module; void* ci_convname; int * ci_closure; } ;
typedef int (* _citrus_iconv_getops_t ) (TYPE_1__*) ;
struct TYPE_3__ {int (* io_init_shared ) (struct _citrus_iconv_shared*,char const*,char const*) ;int * io_convert; int * io_uninit_context; int * io_init_context; int * io_uninit_shared; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *,char const*,char*) ;
 int FUNC_1 (int **,char const*) ;
 int FUNC_2 (struct _citrus_iconv_shared*) ;
 int VAR_2 ;
 void* FUNC_3 (int) ;
 int FUNC_4 (void*,char const*,size_t) ;
 scalar_t__ FUNC_5 (char const*,char const*) ;
 size_t FUNC_6 (char const*) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (struct _citrus_iconv_shared*,char const*,char const*) ;

__attribute__((used)) static __inline int
FUNC_9(struct _citrus_iconv_shared * __restrict * __restrict VAR_3,
    const char * __restrict VAR_4, const char * __restrict VAR_5,
    const char * __restrict VAR_6)
{
 struct _citrus_iconv_shared *VAR_7;
 _citrus_iconv_getops_t VAR_8;
 const char *VAR_9;
 size_t VAR_10;
 int VAR_11;
 VAR_9 = "iconv_std";



 VAR_10 = FUNC_6(VAR_4);
 VAR_7 = FUNC_3(sizeof(*VAR_7) + VAR_10 + 1);
 if (!VAR_7) {
  VAR_11 = VAR_2;
  goto err;
 }
 VAR_7->ci_module = ((void*)0);
 VAR_7->ci_ops = ((void*)0);
 VAR_7->ci_closure = ((void*)0);
 VAR_7->ci_convname = (void *)&VAR_7[1];
 FUNC_4(VAR_7->ci_convname, VAR_4, VAR_10 + 1);


 VAR_11 = FUNC_1(&VAR_7->ci_module, VAR_9);
 if (VAR_11)
  goto err;


 VAR_8 = (_citrus_iconv_getops_t)FUNC_0(VAR_7->ci_module,
     VAR_9, "iconv");
 if (!VAR_8) {
  VAR_11 = VAR_1;
  goto err;
 }
 VAR_7->ci_ops = FUNC_3(sizeof(*VAR_7->ci_ops));
 if (!VAR_7->ci_ops) {
  VAR_11 = VAR_2;
  goto err;
 }
 VAR_11 = (*VAR_8)(VAR_7->ci_ops);
 if (VAR_11)
  goto err;

 if (VAR_7->ci_ops->io_init_shared == ((void*)0) ||
     VAR_7->ci_ops->io_uninit_shared == ((void*)0) ||
     VAR_7->ci_ops->io_init_context == ((void*)0) ||
     VAR_7->ci_ops->io_uninit_context == ((void*)0) ||
     VAR_7->ci_ops->io_convert == ((void*)0)) {
  VAR_11 = VAR_0;
  goto err;
 }


 VAR_11 = (*VAR_7->ci_ops->io_init_shared)(VAR_7, VAR_5, VAR_6);
 if (VAR_11)
  goto err;

 *VAR_3 = VAR_7;

 return (0);
err:
 FUNC_2(VAR_7);
 return (VAR_11);
}
