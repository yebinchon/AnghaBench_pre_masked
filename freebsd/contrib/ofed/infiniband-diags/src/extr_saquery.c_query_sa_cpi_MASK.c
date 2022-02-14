
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sa_query_result {scalar_t__ status; int p_result_madw; } ;
struct sa_handle {int dummy; } ;
struct query_params {int cpi; } ;
typedef int ib_class_port_info_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,char*,char*) ;
 int VAR_4 ;
 int FUNC_1 (int *,int *,int) ;
 int FUNC_2 (struct sa_query_result*) ;
 int * FUNC_3 (int ,int ) ;
 int FUNC_4 (struct sa_handle*,int ,int ,int ,int ,int ,int *,int ,struct sa_query_result*) ;
 int FUNC_5 (scalar_t__) ;
 int VAR_5 ;
 char* FUNC_6 (int) ;

__attribute__((used)) static int FUNC_7(struct sa_handle *VAR_6, struct query_params *VAR_7)
{
 ib_class_port_info_t *VAR_8;
 struct sa_query_result VAR_9;
 int VAR_10 = FUNC_4(VAR_6, VAR_2, VAR_0, 0, 0,
         VAR_4, ((void*)0), 0, &VAR_9);
 if (VAR_10) {
  FUNC_0(VAR_5, "Query SA failed: %s\n", FUNC_6(VAR_10));
  return VAR_10;
 }

 if (VAR_9.status != VAR_3) {
  FUNC_5(VAR_9.status);
  VAR_10 = VAR_1;
  goto Exit;
 }
 VAR_8 = FUNC_3(VAR_9.p_result_madw, 0);
 FUNC_1(&VAR_7->cpi, VAR_8, sizeof(VAR_7->cpi));
Exit:
 FUNC_2(&VAR_9);
 return (0);
}
