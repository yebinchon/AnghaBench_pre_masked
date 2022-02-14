
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint16_t ;
struct sa_query_result {unsigned int result_cnt; int p_result_madw; } ;
struct sa_handle {int dummy; } ;
struct TYPE_4__ {scalar_t__ description; } ;
struct TYPE_5__ {int lid; TYPE_1__ node_desc; } ;
typedef TYPE_2__ ib_node_record_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct sa_handle*,int ,struct sa_query_result*) ;
 int FUNC_2 (struct sa_query_result*) ;
 TYPE_2__* FUNC_3 (int ,unsigned int) ;
 scalar_t__ FUNC_4 (char const*,char*,int) ;

__attribute__((used)) static int FUNC_5(struct sa_handle * VAR_2, const char *VAR_3, uint16_t * VAR_4)
{
 ib_node_record_t *VAR_5 = ((void*)0);
 unsigned VAR_6;
 int VAR_7;
 struct sa_query_result VAR_8;

 VAR_7 = FUNC_1(VAR_2, VAR_1, &VAR_8);
 if (VAR_7)
  return VAR_7;

 VAR_7 = VAR_0;
 for (VAR_6 = 0; VAR_6 < VAR_8.result_cnt; VAR_6++) {
  VAR_5 = FUNC_3(VAR_8.p_result_madw, VAR_6);
  if (VAR_3
      && FUNC_4(VAR_3, (char *)VAR_5->node_desc.description,
          sizeof(VAR_5->node_desc.description)) ==
      0) {
   *VAR_4 = FUNC_0(VAR_5->lid);
   VAR_7 = 0;
   break;
  }
 }
 FUNC_2(&VAR_8);
 return VAR_7;
}
