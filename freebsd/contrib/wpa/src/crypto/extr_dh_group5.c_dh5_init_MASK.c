
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpabuf {int dummy; } ;


 int FUNC_0 (int) ;
 struct wpabuf* FUNC_1 (int ,struct wpabuf**) ;
 int FUNC_2 (struct wpabuf*) ;

void * FUNC_3(struct wpabuf **VAR_0, struct wpabuf **VAR_1)
{
 FUNC_2(*VAR_1);
 *VAR_1 = FUNC_1(FUNC_0(5), VAR_0);
 if (*VAR_1 == ((void*)0))
  return ((void*)0);
 return (void *) 1;
}
