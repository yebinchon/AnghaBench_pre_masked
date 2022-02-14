
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpcent {char* r_name; scalar_t__ r_number; char** r_aliases; } ;


 int FUNC_0 (struct rpcent*) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (char*,char*) ;

__attribute__((used)) static int
FUNC_3(struct rpcent *VAR_0, struct rpcent *VAR_1, void *VAR_2)
{
 char **VAR_3, **VAR_4;

 if (VAR_0 == VAR_1)
  return 0;

 if ((VAR_0 == ((void*)0)) || (VAR_1 == ((void*)0)))
  goto errfin;

 if ((FUNC_2(VAR_0->r_name, VAR_1->r_name) != 0) ||
  (VAR_0->r_number != VAR_1->r_number))
   goto errfin;

 VAR_3 = VAR_0->r_aliases;
 VAR_4 = VAR_1->r_aliases;

 if ((VAR_0->r_aliases == ((void*)0)) || (VAR_1->r_aliases == ((void*)0)))
  goto errfin;

 for (;*VAR_3 && *VAR_4; ++VAR_3, ++VAR_4)
  if (FUNC_2(*VAR_3, *VAR_4) != 0)
   goto errfin;

 if ((*VAR_3 != ((void*)0)) || (*VAR_4 != ((void*)0)))
  goto errfin;

 return 0;

errfin:
 if (VAR_2 == ((void*)0)) {
  FUNC_1("following structures are not equal:\n");
  FUNC_0(VAR_0);
  FUNC_0(VAR_1);
 }

 return (-1);
}
