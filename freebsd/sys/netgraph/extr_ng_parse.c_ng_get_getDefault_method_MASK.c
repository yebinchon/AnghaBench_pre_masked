
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ng_parse_type {int * getDefault; struct ng_parse_type* supertype; } ;
typedef int ng_getDefault_t ;



__attribute__((used)) static ng_getDefault_t *
FUNC_0(const struct ng_parse_type *VAR_0)
{
 while (VAR_0 != ((void*)0) && VAR_0->getDefault == ((void*)0))
  VAR_0 = VAR_0->supertype;
 return (VAR_0 ? VAR_0->getDefault : ((void*)0));
}
