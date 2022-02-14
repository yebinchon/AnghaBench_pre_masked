
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_query_decoder {int config; int pos; struct pt_decoder_function* next; } ;
struct pt_decoder_function {int dummy; } ;


 int FUNC_0 (struct pt_decoder_function const**,int ,int *) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_1(const struct pt_query_decoder *VAR_2)
{
 const struct pt_decoder_function *VAR_3;
 int VAR_4;

 if (!VAR_2)
  return -VAR_1;

 VAR_3 = VAR_2->next;
 if (VAR_3)
  return 0;
 VAR_4 = FUNC_0(&VAR_3, VAR_2->pos, &VAR_2->config);
 return VAR_4 == -VAR_0;
}
