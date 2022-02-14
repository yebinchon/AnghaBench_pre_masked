
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint_t ;
struct TYPE_10__ {int dn_args; TYPE_2__* dn_ident; } ;
typedef TYPE_1__ dt_node_t ;
struct TYPE_11__ {int di_flags; int di_name; } ;
typedef TYPE_2__ dt_ident_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_1__*,int ,char*,char*,int ) ;
 int FUNC_1 (TYPE_1__*,TYPE_2__*,int *) ;
 scalar_t__ FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_1__*,int ) ;

__attribute__((used)) static dt_node_t *
FUNC_4(dt_node_t *VAR_4, uint_t VAR_5)
{
 dt_ident_t *VAR_6 = VAR_4->dn_ident;

 if ((VAR_5 & VAR_1) && FUNC_2(VAR_6)) {
  FUNC_0(VAR_4, VAR_3,
      "%s%s has not yet been declared or assigned\n",
      (VAR_6->di_flags & VAR_0) ? "this->" :
      (VAR_6->di_flags & VAR_2) ? "self->" : "",
      VAR_6->di_name);
 }

 FUNC_3(VAR_4, FUNC_1(VAR_4, VAR_6, &VAR_4->dn_args));
 return (VAR_4);
}
