
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int uint16_t ;
struct sa_query_result {scalar_t__ status; } ;
struct sa_handle {int dummy; } ;
typedef int ib_net64_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,char*) ;
 int VAR_3 ;
 int FUNC_2 (struct sa_handle*,int ,int ,int ,int ,int ,void*,size_t,struct sa_query_result*) ;
 int FUNC_3 (scalar_t__) ;
 int VAR_4 ;
 char* FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(struct sa_handle * VAR_5,
      uint16_t VAR_6, uint32_t VAR_7,
      ib_net64_t VAR_8, void *VAR_9,
      size_t VAR_10,
      struct sa_query_result *VAR_11)
{
 int VAR_12 = FUNC_2(VAR_5, VAR_1, VAR_6, VAR_7,
      FUNC_0(VAR_8), VAR_3, VAR_9, VAR_10, VAR_11);
 if (VAR_12) {
  FUNC_1(VAR_4, "Query SA failed: %s\n", FUNC_4(VAR_12));
  return VAR_12;
 }

 if (VAR_11->status != VAR_2) {
  FUNC_3(VAR_11->status);
  return VAR_0;
 }

 return VAR_12;
}
