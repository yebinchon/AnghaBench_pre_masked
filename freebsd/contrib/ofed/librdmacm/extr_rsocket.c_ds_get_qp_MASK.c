
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union socket_addr {int dummy; } socket_addr ;
struct rsocket {struct ds_qp* qp_list; } ;
struct ds_qp {int cm_id; } ;
typedef int socklen_t ;


 int FUNC_0 (int ,union socket_addr*) ;
 int FUNC_1 (struct rsocket*,union socket_addr*,int ,struct ds_qp**) ;
 struct ds_qp* FUNC_2 (struct ds_qp*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct rsocket *VAR_0, union socket_addr *VAR_1,
       socklen_t VAR_2, struct ds_qp **VAR_3)
{
 if (VAR_0->qp_list) {
  *VAR_3 = VAR_0->qp_list;
  do {
   if (!FUNC_0(FUNC_3((*VAR_3)->cm_id),
          VAR_1))
    return 0;

   *VAR_3 = FUNC_2(*VAR_3);
  } while (*VAR_3 != VAR_0->qp_list);
 }

 return FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3);
}
