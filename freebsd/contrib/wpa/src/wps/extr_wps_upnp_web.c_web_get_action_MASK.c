
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct http_request {int dummy; } ;


 char* FUNC_0 (struct http_request*,char*) ;
 scalar_t__ FUNC_1 (char) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (char*,char const*,int) ;
 char* VAR_0 ;

__attribute__((used)) static const char * FUNC_4(struct http_request *VAR_1,
       size_t *VAR_2)
{
 const char *VAR_3;
 int VAR_4;
 char *VAR_5;
 char *VAR_6;

 *VAR_2 = 0;

 VAR_5 = FUNC_0(VAR_1, "SOAPAction:");
 if (VAR_5 == ((void*)0))
  return ((void*)0);
 if (*VAR_5 == '"')
  VAR_5++;
 else
  return ((void*)0);
 VAR_3 = VAR_0;
 VAR_4 = FUNC_2(VAR_0) - 1;
 if (FUNC_3(VAR_5, VAR_3, VAR_4))
  return ((void*)0);
 VAR_5 += VAR_4;

 while (FUNC_1(*VAR_5) && *VAR_5 != '#')
  VAR_5++;
 if (*VAR_5 != '#')
  return ((void*)0);
 VAR_5++;

 VAR_6 = VAR_5;
 while (FUNC_1(*VAR_5) && *VAR_5 != '"')
  VAR_5++;
 if (*VAR_5 != '"')
  return ((void*)0);
 *VAR_2 = VAR_5 - VAR_6;
 return VAR_6;
}
