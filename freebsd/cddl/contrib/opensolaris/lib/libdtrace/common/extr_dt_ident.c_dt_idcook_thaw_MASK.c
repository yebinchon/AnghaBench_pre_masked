
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int dt_node_t ;
struct TYPE_3__ {scalar_t__ di_type; int * di_ctfp; } ;
typedef TYPE_1__ dt_ident_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,int *,scalar_t__,int ) ;

__attribute__((used)) static void
FUNC_1(dt_node_t *VAR_2, dt_ident_t *VAR_3, int VAR_4, dt_node_t *VAR_5)
{
 if (VAR_3->di_ctfp != ((void*)0) && VAR_3->di_type != VAR_1)
  FUNC_0(VAR_2, VAR_3->di_ctfp, VAR_3->di_type, VAR_0);
}
