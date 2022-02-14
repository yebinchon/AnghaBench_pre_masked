
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ibv_context {int dummy; } ;
struct c4iw_context {scalar_t__ status_page_size; int status_page; } ;


 int FUNC_0 (struct c4iw_context*) ;
 int FUNC_1 (int ,scalar_t__) ;
 struct c4iw_context* FUNC_2 (struct ibv_context*) ;

__attribute__((used)) static void FUNC_3(struct ibv_context *VAR_0)
{
 struct c4iw_context *VAR_1 = FUNC_2(VAR_0);

 if (VAR_1->status_page_size)
  FUNC_1(VAR_1->status_page, VAR_1->status_page_size);
 FUNC_0(VAR_1);
}
