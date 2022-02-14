
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct filedesc0 {int dummy; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 int FUNC_0 (int *,char*,int *,int ) ;
 int VAR_5 ;
 void* FUNC_1 (char*,int,int *,int *,int *,int *,int ,int ) ;

__attribute__((used)) static void
FUNC_2(void *VAR_6)
{

 VAR_3 = FUNC_1("Files", sizeof(struct file), ((void*)0), ((void*)0),
     ((void*)0), ((void*)0), VAR_1, VAR_2);
 VAR_4 = FUNC_1("filedesc0", sizeof(struct filedesc0),
     ((void*)0), ((void*)0), ((void*)0), ((void*)0), VAR_1, 0);
 FUNC_0(&VAR_5, "sigio lock", ((void*)0), VAR_0);
}
