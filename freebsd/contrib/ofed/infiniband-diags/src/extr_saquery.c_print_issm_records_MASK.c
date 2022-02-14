
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sa_query_result {int dummy; } ;
struct sa_handle {int dummy; } ;
struct query_params {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct sa_query_result*,int ,struct query_params*) ;
 int FUNC_1 (struct sa_handle*,int ,struct sa_query_result*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (struct sa_query_result*) ;

__attribute__((used)) static int FUNC_4(struct sa_handle * VAR_3, struct query_params *VAR_4)
{
 struct sa_query_result VAR_5;
 int VAR_6 = 0;


 VAR_6 = FUNC_1(VAR_3, VAR_0, &VAR_5);
 if (VAR_6 != 0)
  return (VAR_6);

 FUNC_2("IsSM ports\n");
 FUNC_0(&VAR_5, VAR_2, VAR_4);
 FUNC_3(&VAR_5);


 VAR_6 = FUNC_1(VAR_3, VAR_1, &VAR_5);
 if (VAR_6 != 0)
  return (VAR_6);

 FUNC_2("\nIsSMdisabled ports\n");
 FUNC_0(&VAR_5, VAR_2, VAR_4);
 FUNC_3(&VAR_5);

 return (VAR_6);
}
