
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource_list_entry {int flags; int * res; } ;
struct resource_list {int dummy; } ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct resource_list_entry* FUNC_1 (struct resource_list*,int,int) ;
 int FUNC_2 (int *) ;

int
FUNC_3(struct resource_list *VAR_3, int VAR_4, int VAR_5)
{
 struct resource_list_entry *VAR_6;

 VAR_6 = FUNC_1(VAR_3, VAR_4, VAR_5);
 if (VAR_6 == ((void*)0) || VAR_6->res == ((void*)0))
  return (0);
 if ((VAR_6->flags & (VAR_2 | VAR_1)) == VAR_2) {
  FUNC_0(!(FUNC_2(VAR_6->res) & VAR_0),
      ("reserved resource is active"));
  return (0);
 }
 return (1);
}
