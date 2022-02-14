
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strfilter_node {struct strfilter_node* r; int p; } ;
typedef int root ;


 int * VAR_0 ;
 int * VAR_1 ;
 int * VAR_2 ;
 char* FUNC_0 (char const*,char const**) ;
 int FUNC_1 (struct strfilter_node*,int ,int) ;
 void* FUNC_2 (int *,struct strfilter_node*,int *) ;
 int FUNC_3 (struct strfilter_node*) ;
 int FUNC_4 (char const*,int) ;

__attribute__((used)) static struct strfilter_node *FUNC_5(const char *VAR_3,
        const char **VAR_4)
{
 struct strfilter_node VAR_5, *VAR_6, *VAR_7;
 const char *VAR_8;

 if (!VAR_3)
  return ((void*)0);

 FUNC_1(&VAR_5, 0, sizeof(VAR_5));
 VAR_7 = VAR_6 = &VAR_5;

 VAR_3 = FUNC_0(VAR_3, &VAR_8);
 while (*VAR_3 != '\0' && *VAR_3 != ')') {
  switch (*VAR_3) {
  case '&':
   if (!VAR_6->r || !VAR_7->r)
    goto error;
   VAR_6 = FUNC_2(VAR_0, VAR_7->r, ((void*)0));
   if (!VAR_6)
    goto nomem;
   VAR_7->r = VAR_6;
   VAR_7 = VAR_6;
   break;
  case '|':
   if (!VAR_6->r || !VAR_5.r)
    goto error;
   VAR_6 = FUNC_2(VAR_2, VAR_5.r, ((void*)0));
   if (!VAR_6)
    goto nomem;
   VAR_5.r = VAR_6;
   VAR_7 = VAR_6;
   break;
  case '!':
   if (VAR_6->r)
    goto error;
   VAR_6->r = FUNC_2(VAR_1, ((void*)0), ((void*)0));
   if (!VAR_6->r)
    goto nomem;
   VAR_6 = VAR_6->r;
   break;
  case '(':
   if (VAR_6->r)
    goto error;
   VAR_6->r = FUNC_5(VAR_3 + 1, &VAR_3);
   if (!VAR_3)
    goto nomem;
   if (!VAR_6->r || *VAR_3 != ')')
    goto error;
   VAR_8 = VAR_3 + 1;
   break;
  default:
   if (VAR_6->r)
    goto error;
   VAR_6->r = FUNC_2(((void*)0), ((void*)0), ((void*)0));
   if (!VAR_6->r)
    goto nomem;
   VAR_6->r->p = FUNC_4(VAR_3, VAR_8 - VAR_3);
   if (!VAR_6->r->p)
    goto nomem;
  }
  VAR_3 = FUNC_0(VAR_8, &VAR_8);
 }
 if (!VAR_6->r)
  goto error;
 *VAR_4 = VAR_3;
 return VAR_5.r;
nomem:
 VAR_3 = ((void*)0);
error:
 *VAR_4 = VAR_3;
 FUNC_3(VAR_5.r);
 return ((void*)0);
}
