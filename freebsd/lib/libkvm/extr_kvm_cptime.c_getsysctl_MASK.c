
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int program; } ;
typedef TYPE_1__ kvm_t ;


 int FUNC_0 (TYPE_1__*,int ,char*,char const*,...) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (char const*,void*,size_t*,int *,int ) ;

__attribute__((used)) static int
FUNC_3(kvm_t *VAR_1, const char *VAR_2, void *VAR_3, size_t VAR_4)
{
 size_t VAR_5;

 VAR_5 = VAR_4;
 if (FUNC_2(VAR_2, VAR_3, &VAR_5, ((void*)0), 0) < 0) {
  FUNC_0(VAR_1, VAR_1->program, "cannot read sysctl %s:%s", VAR_2,
      FUNC_1(VAR_0));
  return (-1);
 }
 if (VAR_5 != VAR_4) {
  FUNC_0(VAR_1, VAR_1->program, "sysctl %s has unexpected size",
      VAR_2);
  return (-1);
 }
 return (0);
}
