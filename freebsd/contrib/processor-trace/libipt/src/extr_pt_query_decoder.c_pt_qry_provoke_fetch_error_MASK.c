
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_query_decoder {int config; int pos; } ;
struct pt_decoder_function {int dummy; } ;


 int FUNC_0 (struct pt_decoder_function const**,int ,int *) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_1(const struct pt_query_decoder *VAR_1)
{
 const struct pt_decoder_function *VAR_2;
 int VAR_3;

 if (!VAR_1)
  return -VAR_0;


 VAR_3 = FUNC_0(&VAR_2, VAR_1->pos, &VAR_1->config);
 if (VAR_3 < 0)
  return VAR_3;


 return -VAR_0;
}
