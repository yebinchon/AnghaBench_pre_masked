
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ppc_data {int ppc_avm; int ppc_flags; int ppc_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct ppc_data*) ;
 int FUNC_1 (struct ppc_data*) ;
 int FUNC_2 (struct ppc_data*,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (char*) ;
 int FUNC_4 (struct ppc_data*,int) ;

__attribute__((used)) static int
FUNC_5(struct ppc_data *VAR_8, int VAR_9) {
 if (!FUNC_1(VAR_8) && VAR_9 == 0)
  return (VAR_0);


 VAR_8->ppc_avm = VAR_1;
  VAR_8->ppc_mode = FUNC_2(VAR_8, VAR_9);
 if ((VAR_8->ppc_avm & VAR_2) && !(VAR_8->ppc_flags & 0x80))
  FUNC_0(VAR_8);

 return (0);
}
