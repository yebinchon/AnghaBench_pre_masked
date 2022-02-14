
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {struct TYPE_6__* next; } ;
typedef TYPE_1__ xlate_handle_node_t ;
typedef int svn_error_t ;


 int * VAR_0 ;
 int FUNC_0 (int ) ;
 TYPE_1__** FUNC_1 (int ,int) ;
 char* FUNC_2 (int ,char const*) ;
 TYPE_1__** FUNC_3 (int ,char const*) ;
 int FUNC_4 (int ,char const*,TYPE_1__**) ;
 int VAR_1 ;

__attribute__((used)) static svn_error_t *
FUNC_5(xlate_handle_node_t *VAR_2,
                               const char *VAR_3)
{
  xlate_handle_node_t **VAR_4 = FUNC_3(VAR_1, VAR_3);
  if (VAR_4 == ((void*)0))
    {
      VAR_3 = FUNC_2(FUNC_0(VAR_1),
                                  VAR_3);
      VAR_4 = FUNC_1(FUNC_0(VAR_1),
                          sizeof(*VAR_4));
      *VAR_4 = ((void*)0);
      FUNC_4(VAR_1, VAR_3, VAR_4);
    }
  VAR_2->next = *VAR_4;
  *VAR_4 = VAR_2;

  return VAR_0;
}
