
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct _citrus_lookup {int cl_ignore_case; scalar_t__ cl_keylen; int * cl_key; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct _citrus_lookup*) ;
 struct _citrus_lookup* FUNC_1 (int) ;
 int FUNC_2 (struct _citrus_lookup*,char const*) ;
 int FUNC_3 (struct _citrus_lookup*,char const*) ;

int
FUNC_4(struct _citrus_lookup **VAR_2, const char *VAR_3,
    int VAR_4)
{
 int VAR_5;
 struct _citrus_lookup *VAR_6;

 VAR_6 = FUNC_1(sizeof(*VAR_6));
 if (VAR_6 == ((void*)0))
  return (VAR_1);

 VAR_6->cl_key = ((void*)0);
 VAR_6->cl_keylen = 0;
 VAR_6->cl_ignore_case = VAR_4;
 VAR_5 = FUNC_2(VAR_6, VAR_3);
 if (VAR_5 == VAR_0)
  VAR_5 = FUNC_3(VAR_6, VAR_3);
 if (!VAR_5)
  *VAR_2 = VAR_6;
 else
  FUNC_0(VAR_6);

 return (VAR_5);
}
