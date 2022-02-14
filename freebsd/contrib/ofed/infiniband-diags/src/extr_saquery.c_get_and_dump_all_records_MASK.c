
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct sa_query_result {int dummy; } ;
struct sa_handle {int dummy; } ;
struct query_params {int dummy; } ;


 int FUNC_0 (struct sa_query_result*,void (*) (void*,struct query_params*),struct query_params*) ;
 int FUNC_1 (struct sa_handle*,int ,struct sa_query_result*) ;
 int FUNC_2 (struct sa_query_result*) ;

__attribute__((used)) static int FUNC_3(struct sa_handle * VAR_0, uint16_t VAR_1,
        void (*VAR_2) (void *,
             struct query_params *VAR_3),
        struct query_params *VAR_4)
{
 struct sa_query_result VAR_5;
 int VAR_6 = FUNC_1(VAR_0, VAR_1, &VAR_5);
 if (VAR_6)
  return VAR_6;

 FUNC_0(&VAR_5, VAR_2, VAR_4);
 FUNC_2(&VAR_5);
 return VAR_6;
}
