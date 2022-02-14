
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct pt_query_decoder {int ip; } ;
struct pt_event {int ip_suppressed; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,int *) ;
 int VAR_0 ;



__attribute__((used)) static int FUNC_2(uint64_t *VAR_1, struct pt_event *VAR_2,
      const struct pt_query_decoder *VAR_3)
{
 int VAR_4;

 if (!VAR_3)
  return -VAR_0;

 VAR_4 = FUNC_1(VAR_1, &VAR_3->ip);
 if (VAR_4 < 0) {
  switch (FUNC_0(VAR_4)) {
  case 128:
  case 129:
   VAR_2->ip_suppressed = 1;
   break;

  default:
   return VAR_4;
  }
 }

 return 0;
}
