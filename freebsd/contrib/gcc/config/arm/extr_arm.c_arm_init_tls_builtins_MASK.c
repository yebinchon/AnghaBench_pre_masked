
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int * tree ;
struct TYPE_2__ {int (* builtin_function ) (char*,int *,int ,int ,int *,int *) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (int ,int ) ;
 int FUNC_1 (char*) ;
 TYPE_1__ VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (char*,int *,int ,int ,int *,int *) ;
 int * FUNC_3 (int ,int *,int *) ;
 int VAR_4 ;

__attribute__((used)) static void
FUNC_4 (void)
{
  tree VAR_5;
  tree VAR_6 = FUNC_3 (FUNC_1 ("nothrow"), ((void*)0), ((void*)0));
  tree VAR_7 = FUNC_3 (FUNC_1 ("const"), ((void*)0), VAR_6);

  VAR_5 = FUNC_0 (VAR_3, VAR_4);
  VAR_2.builtin_function ("__builtin_thread_pointer", VAR_5,
          VAR_0, VAR_1,
          ((void*)0), VAR_7);
}
