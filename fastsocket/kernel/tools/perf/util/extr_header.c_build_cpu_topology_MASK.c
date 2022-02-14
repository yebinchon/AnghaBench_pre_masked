
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct cpu_topo {void* thread_siblings; void* core_siblings; } ;


 long VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct cpu_topo*,int) ;
 void* FUNC_1 (int,int) ;
 int FUNC_2 (struct cpu_topo*) ;
 long FUNC_3 (int ) ;

__attribute__((used)) static struct cpu_topo *FUNC_4(void)
{
 struct cpu_topo *VAR_2;
 void *VAR_3;
 u32 VAR_4, VAR_5;
 size_t VAR_6;
 long VAR_7;
 int VAR_8 = -1;

 VAR_7 = FUNC_3(VAR_1);
 if (VAR_7 < 0)
  return ((void*)0);

 VAR_4 = (u32)(VAR_7 & VAR_0);

 VAR_6 = VAR_4 * sizeof(char *);

 VAR_3 = FUNC_1(1, sizeof(*VAR_2) + 2 * VAR_6);
 if (!VAR_3)
  return ((void*)0);

 VAR_2 = VAR_3;

 VAR_3 += sizeof(*VAR_2);
 VAR_2->core_siblings = VAR_3;
 VAR_3 += VAR_6;
 VAR_2->thread_siblings = VAR_3;

 for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++) {
  VAR_8 = FUNC_0(VAR_2, VAR_5);
  if (VAR_8 < 0)
   break;
 }
 if (VAR_8) {
  FUNC_2(VAR_2);
  VAR_2 = ((void*)0);
 }
 return VAR_2;
}
