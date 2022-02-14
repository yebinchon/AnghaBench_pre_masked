
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int type_p ;
typedef TYPE_1__* pair_p ;
struct TYPE_7__ {void* opt; } ;


 TYPE_1__* FUNC_0 (TYPE_1__*,int ,char const*) ;
 void* FUNC_1 (void*,char*,char const*) ;
 int VAR_0 ;
 int FUNC_2 (int ,int,int *,TYPE_1__*,int *) ;
 int FUNC_3 (char*,char*,int ) ;

__attribute__((used)) static pair_p
FUNC_4 (pair_p VAR_1, type_p VAR_2, const char *VAR_3,
         const char *VAR_4)
{
  static int VAR_5 = 1;
  pair_p VAR_6, VAR_7;
  type_p VAR_8;




  VAR_6 = FUNC_0 (((void*)0), VAR_2, "");
  VAR_6->opt = FUNC_1 (VAR_6->opt, "dot", "");
  VAR_6->opt = FUNC_1 (VAR_6->opt, "tag", "1");
  VAR_8 = FUNC_2 (FUNC_3 ("%s_%d", "fake_union", VAR_5++), 1,
         &VAR_0, VAR_6, ((void*)0));



  VAR_7 = FUNC_0 (VAR_1, VAR_8, VAR_3);
  VAR_7->opt = FUNC_1 (VAR_7->opt, "desc", VAR_4);
  return VAR_7;
}
