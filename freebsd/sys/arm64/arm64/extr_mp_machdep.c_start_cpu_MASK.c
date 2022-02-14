
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_paddr_t ;
typedef int vm_offset_t ;
typedef int uint64_t ;
typedef size_t u_int ;
struct pcpu {int dummy; } ;


 int FUNC_0 (size_t,int *) ;
 int VAR_0 ;
 int FUNC_1 (int,char*) ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct pcpu* VAR_7 ;
 int VAR_8 ;
 size_t VAR_9 ;
 int ** VAR_10 ;
 int FUNC_2 (int *,size_t) ;
 int VAR_11 ;
 int FUNC_3 (int ,int ) ;
 scalar_t__ FUNC_4 (int ,int) ;
 size_t VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 int FUNC_5 (struct pcpu*) ;
 int FUNC_6 (struct pcpu*,size_t,int) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (char*,size_t,int ) ;
 int FUNC_9 (int ,int ,size_t) ;

__attribute__((used)) static bool
FUNC_10(u_int VAR_16, uint64_t VAR_17)
{
 struct pcpu *VAR_18;
 vm_paddr_t VAR_19;
 u_int VAR_20;
 int VAR_21;


 if (VAR_16 > VAR_12)
  return (0);

 FUNC_1(VAR_16 < VAR_1, ("Too many CPUs"));


 if (VAR_16 == VAR_9)
  return (1);







 VAR_20 = VAR_16;
 if (VAR_20 < VAR_9)
  VAR_20 += VAR_12 + 1;
 VAR_20 -= VAR_9;

 VAR_18 = &VAR_7[VAR_20];
 FUNC_6(VAR_18, VAR_20, sizeof(struct pcpu));

 VAR_10[VAR_20 - 1] = (void *)FUNC_4(VAR_0, VAR_3 | VAR_4);
 FUNC_2(VAR_10[VAR_20 - 1], VAR_20);

 FUNC_8("Starting CPU %u (%lx)\n", VAR_20, VAR_17);
 VAR_19 = FUNC_7(VAR_11, (vm_offset_t)VAR_15);

 VAR_21 = FUNC_9(VAR_17, VAR_19, VAR_20);
 if (VAR_21 != VAR_6) {





  FUNC_1(VAR_21 == VAR_5 ||
      (VAR_14 & VAR_2) == VAR_2,
      ("Failed to start CPU %u (%lx)\n", VAR_16, VAR_17));

  FUNC_5(VAR_18);
  FUNC_3((vm_offset_t)VAR_10[VAR_20 - 1], VAR_0);
  VAR_10[VAR_20 - 1] = ((void*)0);
  VAR_13--;


  FUNC_8("Failed to start CPU %u (%lx)\n", VAR_16, VAR_17);
 } else
  FUNC_0(VAR_20, &VAR_8);

 return (1);
}
