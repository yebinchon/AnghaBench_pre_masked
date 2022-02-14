
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct _citrus_mapper_area {int ma_dir; } ;
struct _citrus_mapper {int * cm_traits; TYPE_1__* cm_ops; int * cm_module; int * cm_key; scalar_t__ cm_refcount; int * cm_closure; } ;
typedef int (* _citrus_mapper_getops_t ) (TYPE_1__*) ;
struct TYPE_3__ {int (* mo_init ) (struct _citrus_mapper_area*,struct _citrus_mapper*,int ,void const*,scalar_t__,int *,int) ;int mo_init_state; int mo_convert; int mo_uninit; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *,char const*,char*) ;
 int FUNC_1 (int **,char const*) ;
 int VAR_2 ;
 void* FUNC_2 (int) ;
 int FUNC_3 (struct _citrus_mapper*) ;
 scalar_t__ FUNC_4 (char const*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (struct _citrus_mapper_area*,struct _citrus_mapper*,int ,void const*,scalar_t__,int *,int) ;

__attribute__((used)) static int
FUNC_7(struct _citrus_mapper_area *__restrict VAR_3,
    struct _citrus_mapper * __restrict * __restrict VAR_4,
    const char * __restrict VAR_5,
    const char * __restrict VAR_6)
{
 struct _citrus_mapper *VAR_7;
 _citrus_mapper_getops_t VAR_8;
 int VAR_9;


 VAR_7 = FUNC_2(sizeof(*VAR_7));
 if (!VAR_7)
  return (VAR_2);

 VAR_7->cm_module = ((void*)0);
 VAR_7->cm_ops = ((void*)0);
 VAR_7->cm_closure = ((void*)0);
 VAR_7->cm_traits = ((void*)0);
 VAR_7->cm_refcount = 0;
 VAR_7->cm_key = ((void*)0);


 VAR_9 = FUNC_1(&VAR_7->cm_module, VAR_5);
 if (VAR_9)
  goto err;


 VAR_8 = (_citrus_mapper_getops_t)
     FUNC_0(VAR_7->cm_module, VAR_5, "mapper");
 if (!VAR_8) {
  VAR_9 = VAR_1;
  goto err;
 }
 VAR_7->cm_ops = FUNC_2(sizeof(*VAR_7->cm_ops));
 if (!VAR_7->cm_ops) {
  VAR_9 = VAR_2;
  goto err;
 }
 VAR_9 = (*VAR_8)(VAR_7->cm_ops);
 if (VAR_9)
  goto err;

 if (!VAR_7->cm_ops->mo_init ||
     !VAR_7->cm_ops->mo_uninit ||
     !VAR_7->cm_ops->mo_convert ||
     !VAR_7->cm_ops->mo_init_state) {
  VAR_9 = VAR_0;
  goto err;
 }


 VAR_7->cm_traits = FUNC_2(sizeof(*VAR_7->cm_traits));
 if (VAR_7->cm_traits == ((void*)0)) {
  VAR_9 = VAR_2;
  goto err;
 }

 VAR_9 = (*VAR_7->cm_ops->mo_init)(VAR_3, VAR_7, VAR_3->ma_dir,
     (const void *)VAR_6, FUNC_4(VAR_6) + 1,
     VAR_7->cm_traits, sizeof(*VAR_7->cm_traits));
 if (VAR_9)
  goto err;

 *VAR_4 = VAR_7;

 return (0);

err:
 FUNC_3(VAR_7);
 return (VAR_9);
}
