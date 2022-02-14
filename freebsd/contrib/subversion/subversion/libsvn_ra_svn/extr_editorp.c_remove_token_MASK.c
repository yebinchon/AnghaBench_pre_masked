
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int len; int data; } ;
typedef TYPE_1__ svn_string_t ;
struct TYPE_6__ {int * last_token; int tokens; } ;
typedef TYPE_2__ ra_svn_driver_state_t ;


 int FUNC_0 (int ,int ,int ,int *) ;

__attribute__((used)) static void FUNC_1(ra_svn_driver_state_t *VAR_0,
                         svn_string_t *VAR_1)
{
  FUNC_0(VAR_0->tokens, VAR_1->data, VAR_1->len, ((void*)0));




  VAR_0->last_token = ((void*)0);
}
