
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pid_namespace {struct pid_namespace* parent; } ;


 int FUNC_0 (struct pid_namespace*) ;
 int VAR_0 ;
 struct pid_namespace* FUNC_1 (int ) ;

void FUNC_2(void)
{
 struct pid_namespace *VAR_1;






 for (VAR_1 = FUNC_1(VAR_0); VAR_1 != ((void*)0); VAR_1 = VAR_1->parent)
  FUNC_0(VAR_1);
}
