
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ng_mesg {int data; } ;
typedef int hook_p ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ng_mesg*,int ,int,int,int ) ;
 int FUNC_1 (int,int ,struct ng_mesg*,int ,int ) ;
 int FUNC_2 (void*,int ,int) ;
 int VAR_3 ;

__attribute__((used)) static int
FUNC_3(hook_p VAR_4, int VAR_5, void *VAR_6, int VAR_7)
{
 struct ng_mesg *VAR_8 = ((void*)0);
 int VAR_9 = 0;

 FUNC_0(VAR_8, VAR_2, VAR_5, VAR_7, VAR_1);
 if (VAR_8 == ((void*)0))
  return (VAR_0);

 if (VAR_6 != ((void*)0) && VAR_7 > 0)
  FUNC_2(VAR_6, VAR_8->data, VAR_7);

 FUNC_1(VAR_9, VAR_3, VAR_8, VAR_4, 0);

 return (VAR_9);
}
