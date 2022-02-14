
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iser_conn {int state; } ;
typedef enum iser_conn_state { ____Placeholder_iser_conn_state } iser_conn_state ;



__attribute__((used)) static int FUNC_0(struct iser_conn *VAR_0,
         enum iser_conn_state VAR_1,
         enum iser_conn_state VAR_2)
{
 int VAR_3;

 VAR_3 = (VAR_0->state == VAR_1);
 if (VAR_3)
  VAR_0->state = VAR_2;

 return VAR_3;
}
