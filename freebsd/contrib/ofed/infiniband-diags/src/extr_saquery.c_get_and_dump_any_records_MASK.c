
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int uint16_t ;
struct sa_query_result {int dummy; } ;
struct sa_handle {int dummy; } ;
struct query_params {int dummy; } ;
typedef int ib_net64_t ;


 int FUNC_0 (struct sa_query_result*,void (*) (void*,struct query_params*),struct query_params*) ;
 int FUNC_1 (struct sa_handle*,int ,int ,int ,void*,size_t,struct sa_query_result*) ;
 int FUNC_2 (struct sa_query_result*) ;

__attribute__((used)) static int FUNC_3(struct sa_handle * VAR_0, uint16_t VAR_1,
        uint32_t VAR_2, ib_net64_t VAR_3,
        void *VAR_4,
        size_t VAR_5,
        void (*VAR_6) (void *,
                 struct query_params *),
        struct query_params *VAR_7)
{
 struct sa_query_result VAR_8;
 int VAR_9 = FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4,
      VAR_5, &VAR_8);
 if (VAR_9)
  return VAR_9;

 FUNC_0(&VAR_8, VAR_6, VAR_7);
 FUNC_2(&VAR_8);
 return 0;
}
