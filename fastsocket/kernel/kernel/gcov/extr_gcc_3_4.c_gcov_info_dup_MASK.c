
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gcov_info {int n_functions; struct gcov_ctr_info* counts; int functions; int filename; int ctr_mask; int stamp; int version; } ;
struct gcov_ctr_info {int num; int values; int merge; } ;
typedef int gcov_type ;


 int VAR_0 ;
 int FUNC_0 (struct gcov_info*) ;
 int FUNC_1 (struct gcov_info*) ;
 int FUNC_2 (int ,int,int ) ;
 int FUNC_3 (int ,int ) ;
 struct gcov_info* FUNC_4 (int,int ) ;
 int FUNC_5 (int ,int ,size_t) ;
 unsigned int FUNC_6 (struct gcov_info*) ;
 int FUNC_7 (size_t) ;

struct gcov_info *FUNC_8(struct gcov_info *VAR_1)
{
 struct gcov_info *VAR_2;
 unsigned int VAR_3;
 unsigned int VAR_4;


 VAR_4 = FUNC_6(VAR_1);
 VAR_2 = FUNC_4(sizeof(struct gcov_info) +
        sizeof(struct gcov_ctr_info) * VAR_4, VAR_0);
 if (!VAR_2)
  return ((void*)0);
 VAR_2->version = VAR_1->version;
 VAR_2->stamp = VAR_1->stamp;
 VAR_2->n_functions = VAR_1->n_functions;
 VAR_2->ctr_mask = VAR_1->ctr_mask;

 VAR_2->filename = FUNC_3(VAR_1->filename, VAR_0);
 if (!VAR_2->filename)
  goto err_free;

 VAR_2->functions = FUNC_2(VAR_1->functions, VAR_1->n_functions *
     FUNC_1(VAR_1), VAR_0);
 if (!VAR_2->functions)
  goto err_free;

 for (VAR_3 = 0; VAR_3 < VAR_4 ; VAR_3++) {
  struct gcov_ctr_info *VAR_5 = &VAR_1->counts[VAR_3];
  size_t VAR_6 = VAR_5->num * sizeof(gcov_type);

  VAR_2->counts[VAR_3].num = VAR_5->num;
  VAR_2->counts[VAR_3].merge = VAR_5->merge;
  VAR_2->counts[VAR_3].values = FUNC_7(VAR_6);
  if (!VAR_2->counts[VAR_3].values)
   goto err_free;
  FUNC_5(VAR_2->counts[VAR_3].values, VAR_5->values, VAR_6);
 }
 return VAR_2;

err_free:
 FUNC_0(VAR_2);
 return ((void*)0);
}
