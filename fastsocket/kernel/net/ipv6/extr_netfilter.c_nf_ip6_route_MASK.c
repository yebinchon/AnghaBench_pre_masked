
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct flowi {int dummy; } ;
struct dst_entry {int error; } ;


 int VAR_0 ;
 struct dst_entry* FUNC_0 (int *,int *,struct flowi*) ;

__attribute__((used)) static int FUNC_1(struct dst_entry **VAR_1, struct flowi *VAR_2)
{
 *VAR_1 = FUNC_0(&VAR_0, ((void*)0), VAR_2);
 return (*VAR_1)->error;
}
