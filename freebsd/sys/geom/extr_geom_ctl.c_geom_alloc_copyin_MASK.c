
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gctl_req {int nerror; } ;


 int VAR_0 ;
 int FUNC_0 (void*,void*,size_t) ;
 int FUNC_1 (void*) ;
 void* FUNC_2 (size_t,int ) ;

__attribute__((used)) static void *
FUNC_3(struct gctl_req *VAR_1, void *VAR_2, size_t VAR_3)
{
 void *VAR_4;

 VAR_4 = FUNC_2(VAR_3, VAR_0);
 VAR_1->nerror = FUNC_0(VAR_2, VAR_4, VAR_3);
 if (!VAR_1->nerror)
  return (VAR_4);
 FUNC_1(VAR_4);
 return (((void*)0));
}
