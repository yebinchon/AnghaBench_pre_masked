
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct servent {char* s_name; char* s_proto; scalar_t__ s_port; char** s_aliases; } ;


 int FUNC_0 (struct servent*) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (char*,char*) ;

__attribute__((used)) static int
FUNC_3(struct servent *VAR_0, struct servent *VAR_1, void *VAR_2)
{
 char **VAR_3, **VAR_4;

 if (VAR_0 == VAR_1)
  return 0;

 if ((VAR_0 == ((void*)0)) || (VAR_1 == ((void*)0)))
  goto errfin;

 if ((FUNC_2(VAR_0->s_name, VAR_1->s_name) != 0) ||
  (FUNC_2(VAR_0->s_proto, VAR_1->s_proto) != 0) ||
  (VAR_0->s_port != VAR_1->s_port))
   goto errfin;

 VAR_3 = VAR_0->s_aliases;
 VAR_4 = VAR_1->s_aliases;

 if ((VAR_0->s_aliases == ((void*)0)) || (VAR_1->s_aliases == ((void*)0)))
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
