
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
struct TYPE_2__ {int * vendor_elems; } ;
struct p2p_device {TYPE_1__ info; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (int const*) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int const*,int) ;
 scalar_t__ FUNC_3 (int **,int) ;

__attribute__((used)) static void FUNC_4(struct p2p_device *VAR_6, const u8 *VAR_7,
      size_t VAR_8)
{
 const u8 *VAR_9, *VAR_10;
 u8 VAR_11, VAR_12;

 FUNC_1(VAR_6->info.vendor_elems);
 VAR_6->info.vendor_elems = ((void*)0);

 VAR_10 = VAR_7 + VAR_8;

 for (VAR_9 = VAR_7; VAR_10 - VAR_9 > 1; VAR_9 += VAR_12) {
  VAR_11 = *VAR_9++;
  VAR_12 = *VAR_9++;

  if (VAR_12 > VAR_10 - VAR_9)
   break;

  if (VAR_11 != VAR_2 || VAR_12 < 3)
   continue;

  if (VAR_12 >= 4) {
   u32 VAR_13 = FUNC_0(VAR_9);

   if (VAR_13 == VAR_4 ||
       VAR_13 == VAR_3 ||
       VAR_13 == VAR_5 ||
       VAR_13 == VAR_0 ||
       VAR_13 == VAR_1)
    continue;
  }


  if (FUNC_3(&VAR_6->info.vendor_elems, 2 + VAR_12) < 0)
   break;
  FUNC_2(VAR_6->info.vendor_elems, VAR_9 - 2, 2 + VAR_12);
 }
}
