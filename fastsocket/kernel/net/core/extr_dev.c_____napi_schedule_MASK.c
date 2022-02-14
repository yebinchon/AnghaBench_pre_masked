
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct softnet_data {int poll_list; } ;
struct napi_struct {int poll_list; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int *) ;

__attribute__((used)) static inline void FUNC_2(struct softnet_data *VAR_1,
     struct napi_struct *VAR_2)
{
 FUNC_1(&VAR_2->poll_list, &VAR_1->poll_list);
 FUNC_0(VAR_0);
}
