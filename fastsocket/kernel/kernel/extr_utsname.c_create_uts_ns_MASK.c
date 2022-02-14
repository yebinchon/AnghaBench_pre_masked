
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uts_namespace {int kref; } ;


 int VAR_0 ;
 struct uts_namespace* FUNC_0 (int,int ) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static struct uts_namespace *FUNC_2(void)
{
 struct uts_namespace *VAR_1;

 VAR_1 = FUNC_0(sizeof(struct uts_namespace), VAR_0);
 if (VAR_1)
  FUNC_1(&VAR_1->kref);
 return VAR_1;
}
