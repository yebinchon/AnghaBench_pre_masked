
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int tree ;
struct TYPE_2__ {int (* builtin_function ) (char*,int ,int ,int ,int *,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int ) ;
 TYPE_1__ VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (char*,int ,int ,int ,int *,int ) ;
 int FUNC_3 (char*,int ,int ,int ,int *,int ) ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static void
FUNC_4 (void)
{
  tree VAR_8;

  VAR_8 = FUNC_0 (VAR_5, VAR_6);
  VAR_4.builtin_function ("__builtin_thread_pointer", VAR_8,
          VAR_3, VAR_0,
          ((void*)0), VAR_1);

  VAR_8 = FUNC_1 (VAR_7, VAR_5, VAR_1);
  VAR_4.builtin_function ("__builtin_set_thread_pointer", VAR_8,
          VAR_2, VAR_0,
          ((void*)0), VAR_1);
}
