
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rxrpc_local {int usage; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*,char const*) ;

__attribute__((used)) static inline void FUNC_3(struct rxrpc_local *VAR_0, const char *VAR_1)
{
 FUNC_0(&VAR_0->usage);
 if (FUNC_1(&VAR_0->usage) == 1)
  FUNC_2("resurrected (%s)\n", VAR_1);
}
