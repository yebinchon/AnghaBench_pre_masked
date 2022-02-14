
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xsd_sockmsg {int len; } ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (char const**,char const*,char const**) ;

__attribute__((used)) static int
FUNC_2(const struct xsd_sockmsg *VAR_0, const char **VAR_1,
    const char **VAR_2)
{
 const char *VAR_3, *VAR_4;
 int VAR_5;

 VAR_3 = (const char *)VAR_0 + sizeof(*VAR_0);
 VAR_4 = VAR_3 + VAR_0->len;
 FUNC_0(VAR_3 <= VAR_4, ("payload overflow"));

 VAR_5 = FUNC_1(&VAR_3, VAR_4, VAR_1);
 if (VAR_5)
  return (VAR_5);
 VAR_5 = FUNC_1(&VAR_3, VAR_4, VAR_2);
 if (VAR_5)
  return (VAR_5);

 return (0);
}
