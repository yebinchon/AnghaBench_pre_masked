
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int WORD ;
struct TYPE_3__ {scalar_t__ DAPQ; scalar_t__ base; int DAPF; int lock; } ;
typedef scalar_t__ LPDAQD ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int) ;
 TYPE_1__ VAR_7 ;
 int FUNC_1 (int *,scalar_t__,int) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int,scalar_t__) ;

__attribute__((used)) static __inline__ int FUNC_7(register int VAR_8)
{
 register WORD VAR_9;
 register int VAR_10 = VAR_8, VAR_11 = 0;
 LPDAQD VAR_12;

 VAR_9 = FUNC_3(VAR_7.DAPQ + VAR_6);
 while (VAR_9 != FUNC_3(VAR_7.DAPQ + VAR_5) || VAR_8) {
  register int VAR_13 = VAR_9 / FUNC_0(VAR_2);
  register int VAR_14;
  unsigned long VAR_15;


  if (VAR_10) {

   FUNC_4(&VAR_7.lock, VAR_15);
   VAR_14 = FUNC_1(
    &VAR_7.DAPF,
    VAR_7.base + VAR_13 * VAR_1,
    VAR_1);
   FUNC_5(&VAR_7.lock, VAR_15);
  } else {
   VAR_14 = FUNC_1(
    &VAR_7.DAPF,
    VAR_7.base + VAR_13 * VAR_1,
    VAR_1);
  }
  if (!VAR_14)
   break;

  if (VAR_8)
   VAR_8 = 0;


  VAR_12 = VAR_13 * VAR_2 + VAR_7.base + VAR_0;


  FUNC_6(VAR_14, VAR_12 + VAR_3);
  ++VAR_11;


  VAR_9 = (++VAR_13 % 3) * FUNC_0(VAR_2);
  FUNC_6(VAR_9, VAR_7.DAPQ + VAR_6);

  FUNC_2(&VAR_7, VAR_4);
 }
 return VAR_11;
}
