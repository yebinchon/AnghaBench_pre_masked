
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct cpu_topo {size_t core_sib; char** core_siblings; size_t thread_sib; char** thread_siblings; } ;
typedef int FILE ;


 char* VAR_0 ;
 int VAR_1 ;
 char* VAR_2 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (char*,char*) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (char**,size_t*,int *) ;
 int FUNC_4 (char*,char*,int) ;
 char* FUNC_5 (char*,char) ;
 int FUNC_6 (char*,char*) ;

__attribute__((used)) static int FUNC_7(struct cpu_topo *VAR_3, int VAR_4)
{
 FILE *VAR_5;
 char VAR_6[VAR_1];
 char *VAR_7 = ((void*)0), *VAR_8;
 size_t VAR_9 = 0;
 u32 VAR_10 = 0;
 int VAR_11 = -1;

 FUNC_4(VAR_6, VAR_0, VAR_4);
 VAR_5 = FUNC_1(VAR_6, "r");
 if (!VAR_5)
  return -1;

 if (FUNC_3(&VAR_7, &VAR_9, VAR_5) <= 0)
  goto done;

 FUNC_0(VAR_5);

 VAR_8 = FUNC_5(VAR_7, '\n');
 if (VAR_8)
  *VAR_8 = '\0';

 for (VAR_10 = 0; VAR_10 < VAR_3->core_sib; VAR_10++) {
  if (!FUNC_6(VAR_7, VAR_3->core_siblings[VAR_10]))
   break;
 }
 if (VAR_10 == VAR_3->core_sib) {
  VAR_3->core_siblings[VAR_10] = VAR_7;
  VAR_3->core_sib++;
  VAR_7 = ((void*)0);
  VAR_9 = 0;
 }

 FUNC_4(VAR_6, VAR_2, VAR_4);
 VAR_5 = FUNC_1(VAR_6, "r");
 if (!VAR_5)
  goto done;

 if (FUNC_3(&VAR_7, &VAR_9, VAR_5) <= 0)
  goto done;

 VAR_8 = FUNC_5(VAR_7, '\n');
 if (VAR_8)
  *VAR_8 = '\0';

 for (VAR_10 = 0; VAR_10 < VAR_3->thread_sib; VAR_10++) {
  if (!FUNC_6(VAR_7, VAR_3->thread_siblings[VAR_10]))
   break;
 }
 if (VAR_10 == VAR_3->thread_sib) {
  VAR_3->thread_siblings[VAR_10] = VAR_7;
  VAR_3->thread_sib++;
  VAR_7 = ((void*)0);
 }
 VAR_11 = 0;
done:
 if(VAR_5)
  FUNC_0(VAR_5);
 FUNC_2(VAR_7);
 return VAR_11;
}
