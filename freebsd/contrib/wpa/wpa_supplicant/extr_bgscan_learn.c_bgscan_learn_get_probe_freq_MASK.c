
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bgscan_learn_data {int* supp_freqs; int probe_idx; } ;


 int VAR_0 ;
 int FUNC_0 (int*,int) ;
 int* FUNC_1 (int*,size_t,int) ;
 int FUNC_2 (int ,char*,int) ;

__attribute__((used)) static int * FUNC_3(struct bgscan_learn_data *VAR_1,
      int *VAR_2, size_t VAR_3)
{
 int VAR_4, *VAR_5;

 if (VAR_1->supp_freqs == ((void*)0))
  return VAR_2;

 VAR_4 = VAR_1->probe_idx;
 do {
  if (!FUNC_0(VAR_2, VAR_1->supp_freqs[VAR_4])) {
   FUNC_2(VAR_0, "bgscan learn: Probe new freq "
       "%u", VAR_1->supp_freqs[VAR_4]);
   VAR_1->probe_idx = VAR_4 + 1;
   if (VAR_1->supp_freqs[VAR_1->probe_idx] == 0)
    VAR_1->probe_idx = 0;
   VAR_5 = FUNC_1(VAR_2, VAR_3 + 2, sizeof(int));
   if (VAR_5 == ((void*)0))
    return VAR_2;
   VAR_2 = VAR_5;
   VAR_2[VAR_3] = VAR_1->supp_freqs[VAR_4];
   VAR_3++;
   VAR_2[VAR_3] = 0;
   break;
  }

  VAR_4++;
  if (VAR_1->supp_freqs[VAR_4] == 0)
   VAR_4 = 0;
 } while (VAR_4 != VAR_1->probe_idx);

 return VAR_2;
}
