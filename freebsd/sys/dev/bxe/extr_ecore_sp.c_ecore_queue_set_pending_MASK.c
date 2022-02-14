
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ecore_queue_state_params {int cmd; } ;
struct ecore_queue_sp_obj {int pending; } ;
typedef enum ecore_queue_cmd { ____Placeholder_ecore_queue_cmd } ecore_queue_cmd ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int *) ;

__attribute__((used)) static int FUNC_1(struct ecore_queue_sp_obj *VAR_3,
       struct ecore_queue_state_params *VAR_4)
{
 enum ecore_queue_cmd VAR_5 = VAR_4->cmd, VAR_6;




 if ((VAR_5 == VAR_0) ||
     (VAR_5 == VAR_1))
  VAR_6 = VAR_2;
 else
  VAR_6 = VAR_5;

 FUNC_0(VAR_6, &VAR_3->pending);
 return VAR_6;
}
