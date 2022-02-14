
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int tree ;
typedef int cp_token ;
typedef int cp_parser ;
struct TYPE_2__ {int have_tls; } ;


 int FUNC_0 (int *,int ,int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*) ;
 TYPE_1__ VAR_0 ;

__attribute__((used)) static void
FUNC_4 (cp_parser *VAR_1, cp_token *VAR_2)
{
  tree VAR_3;

  VAR_3 = FUNC_0 (VAR_1, 0, ((void*)0));
  FUNC_1 (VAR_1, VAR_2);

  if (!VAR_0.have_tls)
    FUNC_3 ("threadprivate variables not supported in this target");

  FUNC_2 (VAR_3);
}
