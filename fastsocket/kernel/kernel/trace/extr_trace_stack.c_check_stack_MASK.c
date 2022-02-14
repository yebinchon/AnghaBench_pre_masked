
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int nr_entries; int skip; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (unsigned long) ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 TYPE_1__ VAR_3 ;
 int FUNC_4 (unsigned long*) ;
 int FUNC_5 (TYPE_1__*) ;
 unsigned long* VAR_4 ;
 unsigned long* VAR_5 ;

__attribute__((used)) static inline void FUNC_6(void)
{
 unsigned long VAR_6, VAR_7;
 unsigned long *VAR_8, *VAR_9, *VAR_10;
 int VAR_11;

 VAR_6 = ((unsigned long)&VAR_6) & (VAR_0-1);
 VAR_6 = VAR_0 - VAR_6;

 if (VAR_6 <= VAR_2)
  return;


 if (!FUNC_4(&VAR_6))
  return;

 FUNC_3(VAR_7);
 FUNC_0(&VAR_1);


 if (VAR_6 <= VAR_2)
  goto out;

 VAR_2 = VAR_6;

 VAR_3.nr_entries = 0;
 VAR_3.skip = 3;

 FUNC_5(&VAR_3);




 VAR_11 = 0;
 VAR_10 = &VAR_6;
 VAR_9 = (unsigned long *)
  (((unsigned long)VAR_10 & ~(VAR_0-1)) + VAR_0);
 while (VAR_11 < VAR_3.nr_entries) {
  int VAR_12 = 0;

  VAR_4[VAR_11] = VAR_6;
  VAR_8 = VAR_10;

  for (; VAR_8 < VAR_9 && VAR_11 < VAR_3.nr_entries; VAR_8++) {
   if (*VAR_8 == VAR_5[VAR_11]) {
    VAR_6 = VAR_4[VAR_11++] =
     (VAR_9 - VAR_8) * sizeof(unsigned long);
    VAR_12 = 1;

    VAR_10 = VAR_8 + 1;
   }
  }

  if (!VAR_12)
   VAR_11++;
 }

 out:
 FUNC_1(&VAR_1);
 FUNC_2(VAR_7);
}
