
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct raid6_calls {scalar_t__ prefer; int name; int (* gen_syndrome ) (int const,int ,void**) ;int (* valid ) () ;} ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 unsigned long VAR_3 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (char*,...) ;
 struct raid6_calls** VAR_4 ;
 struct raid6_calls VAR_5 ;
 int FUNC_4 () ;
 int FUNC_5 (int const,int ,void**) ;
 scalar_t__ FUNC_6 (unsigned long,unsigned long) ;

__attribute__((used)) static inline const struct raid6_calls *FUNC_7(
 void *(*const VAR_6)[(65536/VAR_1)+2], const int VAR_7)
{
 unsigned long VAR_8, VAR_9, VAR_10, VAR_11;
 const struct raid6_calls *const *VAR_12;
 const struct raid6_calls *VAR_13;

 for (VAR_9 = 0, VAR_13 = ((void*)0), VAR_12 = VAR_4; *VAR_12; VAR_12++) {
  if (!VAR_13 || (*VAR_12)->prefer >= VAR_13->prefer) {
   if ((*VAR_12)->valid && !(*VAR_12)->valid())
    continue;

   VAR_8 = 0;

   FUNC_1();
   VAR_10 = VAR_3;
   while ((VAR_11 = VAR_3) == VAR_10)
    FUNC_0();
   while (FUNC_6(VAR_3,
         VAR_11 + (1<<VAR_2))) {
    (*VAR_12)->gen_syndrome(VAR_7, VAR_1, *VAR_6);
    VAR_8++;
   }
   FUNC_2();

   if (VAR_8 > VAR_9) {
    VAR_9 = VAR_8;
    VAR_13 = *VAR_12;
   }
   FUNC_3("raid6: %-8s %5ld MB/s\n", (*VAR_12)->name,
          (VAR_8*VAR_0) >> (20-16+VAR_2));
  }
 }

 if (VAR_13) {
  FUNC_3("raid6: using algorithm %s (%ld MB/s)\n",
         VAR_13->name,
         (VAR_9*VAR_0) >> (20-16+VAR_2));
  VAR_5 = *VAR_13;
 } else
  FUNC_3("raid6: Yikes!  No algorithm found!\n");

 return VAR_13;
}
