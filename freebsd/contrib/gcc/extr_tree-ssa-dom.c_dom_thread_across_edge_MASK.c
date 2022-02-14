
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;
struct dom_walk_data {int global_data; } ;
typedef int edge ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (int ,int ,int ,int *,int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int ,int ,int,int *,int ) ;
 int VAR_6 ;

__attribute__((used)) static void
FUNC_3 (struct dom_walk_data *VAR_7, edge VAR_8)
{

  if (! VAR_7->global_data)
    {
      tree VAR_9 = FUNC_0 (VAR_1, VAR_2,
           VAR_4, VAR_4);
      VAR_9 = FUNC_1 (VAR_0, VAR_6, VAR_9, ((void*)0), ((void*)0));
      VAR_7->global_data = VAR_9;
    }

  FUNC_2 (VAR_7->global_data, VAR_8, 0,
        &VAR_3,
        VAR_5);
}
