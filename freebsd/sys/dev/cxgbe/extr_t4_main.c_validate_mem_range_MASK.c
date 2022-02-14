
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct t4_range {int size; int start; } ;
struct adapter {int dummy; } ;
typedef int mem_ranges ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int) ;
 int FUNC_9 (struct t4_range*,int) ;
 scalar_t__ FUNC_10 (struct adapter*) ;
 scalar_t__ FUNC_11 (scalar_t__,scalar_t__) ;
 int FUNC_12 (struct t4_range*,struct t4_range*,int) ;
 int FUNC_13 (struct t4_range*) ;
 int FUNC_14 (struct t4_range*,int,int,int ) ;
 int VAR_11 ;
 int FUNC_15 (struct adapter*,int ) ;

__attribute__((used)) static int
FUNC_16(struct adapter *VAR_12, uint32_t VAR_13, uint32_t VAR_14)
{
 struct t4_range VAR_15[4], *VAR_16, *VAR_17;
 uint32_t VAR_18, VAR_19;
 int VAR_20, VAR_21, VAR_22;


 if (VAR_13 & 3 || VAR_14 & 3 || VAR_14 == 0)
  return (VAR_6);


 VAR_18 = FUNC_15(VAR_12, VAR_4);

 VAR_16 = &VAR_15[0];
 VAR_21 = 0;
 FUNC_9(VAR_16, sizeof(VAR_15));
 if (VAR_18 & VAR_7) {
  VAR_19 = FUNC_15(VAR_12, VAR_0);
  VAR_16->size = FUNC_1(VAR_19) << 20;
  if (VAR_16->size > 0) {
   VAR_16->start = FUNC_0(VAR_19) << 20;
   if (VAR_13 >= VAR_16->start &&
       VAR_13 + VAR_14 <= VAR_16->start + VAR_16->size)
    return (0);
   VAR_16++;
   VAR_21++;
  }
 }
 if (VAR_18 & VAR_8) {
  VAR_19 = FUNC_15(VAR_12, VAR_1);
  VAR_16->size = FUNC_3(VAR_19) << 20;
  if (VAR_16->size > 0) {
   VAR_16->start = FUNC_2(VAR_19) << 20;
   if (VAR_13 >= VAR_16->start &&
       VAR_13 + VAR_14 <= VAR_16->start + VAR_16->size)
    return (0);
   VAR_16++;
   VAR_21++;
  }
 }
 if (VAR_18 & VAR_10) {
  VAR_19 = FUNC_15(VAR_12, VAR_3);
  VAR_16->size = FUNC_7(VAR_19) << 20;
  if (VAR_16->size > 0) {
   VAR_16->start = FUNC_6(VAR_19) << 20;
   if (VAR_13 >= VAR_16->start &&
       VAR_13 + VAR_14 <= VAR_16->start + VAR_16->size)
    return (0);
   VAR_16++;
   VAR_21++;
  }
 }
 if (FUNC_10(VAR_12) && VAR_18 & VAR_9) {
  VAR_19 = FUNC_15(VAR_12, VAR_2);
  VAR_16->size = FUNC_5(VAR_19) << 20;
  if (VAR_16->size > 0) {
   VAR_16->start = FUNC_4(VAR_19) << 20;
   if (VAR_13 >= VAR_16->start &&
       VAR_13 + VAR_14 <= VAR_16->start + VAR_16->size)
    return (0);
   VAR_16++;
   VAR_21++;
  }
 }
 FUNC_8(VAR_21 <= FUNC_13(VAR_15));

 if (VAR_21 > 1) {

  FUNC_14(VAR_15, VAR_21, sizeof(struct t4_range), VAR_11);


  VAR_16 = &VAR_15[0];
  for (VAR_22 = VAR_21 - 1; VAR_22 > 0; VAR_22--, VAR_16++) {

   FUNC_8(VAR_16->size > 0);
   VAR_17 = VAR_16 + 1;
   FUNC_8(VAR_17->size > 0);

   while (VAR_16->start + VAR_16->size >= VAR_17->start) {

    VAR_16->size = FUNC_11(VAR_16->start + VAR_16->size,
        VAR_17->start + VAR_17->size) - VAR_16->start;
    VAR_21--;
    if (--VAR_22 == 0)
     goto done;
    VAR_17++;
   }
   if (VAR_17 != VAR_16 + 1) {





    FUNC_8(VAR_17->size > 0);
    FUNC_12(VAR_16 + 1, VAR_17, VAR_22 * sizeof(*VAR_16));
   }
  }
done:

  FUNC_8(VAR_21 > 0);
  VAR_16 = &VAR_15[0];
  for (VAR_20 = 0; VAR_20 < VAR_21; VAR_20++, VAR_16++) {
   if (VAR_13 >= VAR_16->start &&
       VAR_13 + VAR_14 <= VAR_16->start + VAR_16->size)
    return (0);
  }
 }

 return (VAR_5);
}
