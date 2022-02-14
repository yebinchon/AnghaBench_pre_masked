
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int caddr_t ;
typedef int boolean_t ;
struct TYPE_4__ {int a_type; } ;
typedef TYPE_1__ aclent_t ;
typedef int ace_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int) ;
 int * FUNC_1 (int *,int,int) ;
 int VAR_3 ;
 int FUNC_2 (int ,int,int,int ) ;
 int FUNC_3 (TYPE_1__*,int,int **,int*,int ) ;
 int FUNC_4 (int *,int *,int) ;

__attribute__((used)) static int
FUNC_5(aclent_t *VAR_4, int VAR_5, boolean_t VAR_6,
    ace_t **VAR_7, int *VAR_8)
{
 ace_t *VAR_9;
 ace_t *VAR_10;
 int VAR_11 = 0;
 int VAR_12 = 0;
 int VAR_13 = 0;
 int VAR_14 = 0;
 aclent_t *VAR_15;
 int VAR_16;
 int VAR_17;
 int VAR_18, VAR_19;

 FUNC_2((caddr_t)VAR_4, VAR_5, sizeof (aclent_t), VAR_3);

 for (VAR_16 = 0, VAR_15 = VAR_4; VAR_16 < VAR_5; VAR_15++, VAR_16++) {
  if (VAR_15->a_type & VAR_0)
   break;
 }

 if (VAR_16 < VAR_5) {
  VAR_13 = VAR_16;
  VAR_14 = VAR_5 - VAR_16;
 }

 if (VAR_14 && !VAR_6) {
  return (VAR_1);
 }

 VAR_17 = FUNC_3(VAR_4, VAR_16, &VAR_9, &VAR_11, VAR_6);
 if (VAR_17)
  return (VAR_17);

 if (VAR_14) {
  VAR_17 = FUNC_3(&VAR_4[VAR_13], VAR_14,
      &VAR_10, &VAR_12, VAR_6);
  if (VAR_17) {
   if (VAR_9) {
    FUNC_0(VAR_9, VAR_11 * sizeof (ace_t));
   }
   return (VAR_17);
  }
 }

 if (VAR_12 != 0) {
  VAR_18 = sizeof (ace_t) * VAR_11;
  VAR_19 = sizeof (ace_t) * VAR_12;
  VAR_9 = FUNC_1(VAR_9, VAR_18, VAR_18 + VAR_19);
  if (VAR_9 == ((void*)0))
   return (VAR_2);
  if (VAR_14) {
   (void) FUNC_4(VAR_9 + VAR_11, VAR_10, VAR_19);
  }
 }
 if (VAR_14)
  FUNC_0(VAR_10, VAR_12 * sizeof (ace_t));

 *VAR_8 = VAR_11 + VAR_12;
 *VAR_7 = VAR_9;
 return (0);
}
