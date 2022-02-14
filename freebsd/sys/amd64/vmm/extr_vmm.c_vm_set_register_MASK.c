
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct vm {int maxcpus; struct vcpu* vcpu; int cookie; } ;
struct vcpu {int nextrip; } ;


 int VAR_0 ;
 int FUNC_0 (struct vm*,int,char*,int ) ;
 int FUNC_1 (int ,int,int,int ) ;
 int VAR_1 ;
 int VAR_2 ;

int
FUNC_2(struct vm *VAR_3, int VAR_4, int VAR_5, uint64_t VAR_6)
{
 struct vcpu *VAR_7;
 int VAR_8;

 if (VAR_4 < 0 || VAR_4 >= VAR_3->maxcpus)
  return (VAR_0);

 if (VAR_5 >= VAR_2)
  return (VAR_0);

 VAR_8 = FUNC_1(VAR_3->cookie, VAR_4, VAR_5, VAR_6);
 if (VAR_8 || VAR_5 != VAR_1)
  return (VAR_8);


 FUNC_0(VAR_3, VAR_4, "Setting nextrip to %#lx", VAR_6);
 VAR_7 = &VAR_3->vcpu[VAR_4];
 VAR_7->nextrip = VAR_6;
 return (0);
}
