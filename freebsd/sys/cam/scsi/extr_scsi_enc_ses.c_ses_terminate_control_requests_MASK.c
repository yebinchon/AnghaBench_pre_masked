
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int result; } ;
typedef TYPE_1__ ses_control_request_t ;
typedef int ses_control_reqlist_t ;


 TYPE_1__* FUNC_0 (int *) ;
 int FUNC_1 (int *,TYPE_1__*,int ) ;
 int VAR_0 ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_3(ses_control_reqlist_t *VAR_1, int VAR_2)
{
 ses_control_request_t *VAR_3;

 while ((VAR_3 = FUNC_0(VAR_1)) != ((void*)0)) {
  FUNC_1(VAR_1, VAR_3, VAR_0);
  VAR_3->result = VAR_2;
  FUNC_2(VAR_3);
 }
}
