
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cdev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct cdev*,char*) ;
 struct cdev* FUNC_1 (int ,int *,int,int *,int ,int ,int,char*) ;

__attribute__((used)) static void
FUNC_2(void *VAR_4)
{
 struct cdev *VAR_5;

 VAR_5 = FUNC_1(VAR_1, &VAR_3, 0, ((void*)0),
     VAR_2, VAR_0, 0666, "fd/0");
 FUNC_0(VAR_5, "stdin");
 VAR_5 = FUNC_1(VAR_1, &VAR_3, 1, ((void*)0),
     VAR_2, VAR_0, 0666, "fd/1");
 FUNC_0(VAR_5, "stdout");
 VAR_5 = FUNC_1(VAR_1, &VAR_3, 2, ((void*)0),
     VAR_2, VAR_0, 0666, "fd/2");
 FUNC_0(VAR_5, "stderr");
}
