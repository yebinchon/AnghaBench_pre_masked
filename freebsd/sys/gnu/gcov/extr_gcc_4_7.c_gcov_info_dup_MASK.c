
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gcov_info {int n_functions; TYPE_1__** functions; int * filename; int * next; } ;
struct gcov_fn_info {int dummy; } ;
struct gcov_ctr_info {int num; struct gcov_info* values; } ;
typedef int gcov_type ;
struct TYPE_2__ {struct gcov_ctr_info* ctrs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct gcov_info*) ;
 void* FUNC_1 (size_t,int ,int) ;
 int FUNC_2 (struct gcov_info*,struct gcov_info*,size_t) ;
 unsigned int FUNC_3 (struct gcov_info*) ;
 int * FUNC_4 (int *,int ,int) ;

struct gcov_info *
FUNC_5(struct gcov_info *VAR_3)
{
 struct gcov_info *VAR_4;
 struct gcov_ctr_info *VAR_5;
 struct gcov_ctr_info *VAR_6;
 unsigned int VAR_7;
 unsigned int VAR_8;
 unsigned int VAR_9;
 size_t VAR_10;
 size_t VAR_11;

 if ((VAR_4 = FUNC_1(sizeof(*VAR_4), VAR_0, VAR_1|VAR_2)) == ((void*)0))
  return (((void*)0));
 FUNC_2(VAR_4, VAR_3, sizeof(*VAR_4));

 VAR_4->next = ((void*)0);
 VAR_4->filename = ((void*)0);
 VAR_4->functions = ((void*)0);

 VAR_4->filename = FUNC_4(VAR_3->filename, VAR_0, VAR_1);
 if (VAR_4->filename == ((void*)0))
  goto err_free;

 VAR_4->functions = FUNC_1(VAR_3->n_functions * sizeof(struct gcov_fn_info *), VAR_0, VAR_1|VAR_2);
 if (VAR_4->functions == ((void*)0))
  goto err_free;
 VAR_7 = FUNC_3(VAR_3);
 VAR_10 = sizeof(struct gcov_fn_info);
 VAR_10 += sizeof(struct gcov_ctr_info) * VAR_7;

 for (VAR_8 = 0; VAR_8 < VAR_3->n_functions; VAR_8++) {
  VAR_4->functions[VAR_8] = FUNC_1(VAR_10, VAR_0, VAR_1|VAR_2);
  if (!VAR_4->functions[VAR_8])
   goto err_free;

  *(VAR_4->functions[VAR_8]) = *(VAR_3->functions[VAR_8]);

  VAR_6 = VAR_3->functions[VAR_8]->ctrs;
  VAR_5 = VAR_4->functions[VAR_8]->ctrs;

  for (VAR_9 = 0; VAR_9 < VAR_7; VAR_9++) {

   VAR_11 = sizeof(gcov_type) * VAR_6->num;

   VAR_5->values = FUNC_1(VAR_11, VAR_0, VAR_1);

   if (!VAR_5->values)
    goto err_free;

   VAR_5->num = VAR_6->num;
   FUNC_2(VAR_5->values, VAR_6->values, VAR_11);

   VAR_6++;
   VAR_5++;
  }
 }

 return (VAR_4);
err_free:
 FUNC_0(VAR_4);
 return (((void*)0));
}
