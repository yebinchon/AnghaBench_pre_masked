
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct procstat {int * kd; int type; } ;
typedef int kvm_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct procstat* FUNC_0 (int,int) ;
 int FUNC_1 (struct procstat*) ;
 int * FUNC_2 (char const*,char const*,int *,int ,char*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,char*) ;

struct procstat *
FUNC_5(const char *VAR_3, const char *VAR_4)
{
 struct procstat *VAR_5;
 kvm_t *VAR_6;
 char VAR_7[VAR_2];

 VAR_5 = FUNC_0(1, sizeof(*VAR_5));
 if (VAR_5 == ((void*)0)) {
  FUNC_3("malloc()");
  return (((void*)0));
 }
 VAR_6 = FUNC_2(VAR_3, VAR_4, ((void*)0), VAR_0, VAR_7);
 if (VAR_6 == ((void*)0)) {
  FUNC_4("kvm_openfiles(): %s", VAR_7);
  FUNC_1(VAR_5);
  return (((void*)0));
 }
 VAR_5->type = VAR_1;
 VAR_5->kd = VAR_6;
 return (VAR_5);
}
