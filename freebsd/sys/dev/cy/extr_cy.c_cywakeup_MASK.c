
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
typedef int u_int ;
struct com_s {int* delta_error_counts; int* error_counts; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 struct com_s* FUNC_4 (int) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int * VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_5 (int ,char*,int,int,int ,char*,int) ;
 int FUNC_6 (void (*) (void*),void*,scalar_t__) ;

__attribute__((used)) static void
FUNC_7(void *VAR_8)
{
 struct com_s *VAR_9;
 int VAR_10;

 VAR_4 = FUNC_6(FUNC_7, (void *)((void*)0), VAR_3);




 if (--VAR_5 > 0)
  return;
 VAR_5 = VAR_7 / VAR_3;
 for (VAR_10 = 0; VAR_10 < VAR_2; ++VAR_10) {
  int VAR_11;

  VAR_9 = FUNC_4(VAR_10);
  if (VAR_9 == ((void*)0))
   continue;
  for (VAR_11 = 0; VAR_11 < VAR_0; ++VAR_11) {
   u_int VAR_12;
   u_long VAR_13;

   FUNC_2();
   FUNC_0();
   VAR_12 = VAR_9->delta_error_counts[VAR_11];
   VAR_9->delta_error_counts[VAR_11] = 0;
   FUNC_1();
   FUNC_3();
   if (VAR_12 == 0)
    continue;
   VAR_13 = VAR_9->error_counts[VAR_11] += VAR_12;
   FUNC_5(VAR_1, "cy%d: %u more %s%s (total %lu)\n",
       VAR_10, VAR_12, VAR_6[VAR_11],
       VAR_12 == 1 ? "" : "s", VAR_13);
  }
 }
}
