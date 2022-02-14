
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct cuse_alloc_info {int page_count; int alloc_nr; } ;
typedef int info ;
struct TYPE_2__ {int size; int * ptr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 scalar_t__ VAR_4 ;
 void* VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 TYPE_1__* VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (scalar_t__,int ,struct cuse_alloc_info*) ;
 int FUNC_4 (struct cuse_alloc_info*,int ,int) ;
 void* FUNC_5 (int *,int,int,int ,scalar_t__,int) ;

void *
FUNC_6(int VAR_13)
{
 struct cuse_alloc_info VAR_14;
 void *VAR_15;
 int VAR_16;
 int VAR_17;

 if (VAR_12 < 0)
  return (((void*)0));

 FUNC_4(&VAR_14, 0, sizeof(VAR_14));

 if (VAR_13 < 1)
  return (((void*)0));

 VAR_14.page_count = FUNC_2(VAR_13, VAR_7);

 FUNC_0();
 for (VAR_17 = 0; VAR_17 != VAR_1; VAR_17++) {

  if (VAR_10[VAR_17].ptr != ((void*)0))
   continue;

  VAR_10[VAR_17].ptr = ((uint8_t *)1);
  VAR_10[VAR_17].size = 0;

  FUNC_1();

  VAR_14.alloc_nr = VAR_17;

  VAR_16 = FUNC_3(VAR_12, VAR_2, &VAR_14);

  if (VAR_16) {

   FUNC_0();

   VAR_10[VAR_17].ptr = ((void*)0);

   if (VAR_11 == VAR_4)
    continue;
   else
    break;
  }
  VAR_15 = FUNC_5(((void*)0), VAR_14.page_count * VAR_7,
      VAR_8 | VAR_9,
      VAR_6, VAR_12, VAR_0 *
      VAR_7 * VAR_17);

  if (VAR_15 == VAR_5) {

   VAR_16 = FUNC_3(VAR_12, VAR_3, &VAR_14);

   if (VAR_16) {

   }
   FUNC_0();

   VAR_10[VAR_17].ptr = ((void*)0);

   break;
  }
  FUNC_0();
  VAR_10[VAR_17].ptr = VAR_15;
  VAR_10[VAR_17].size = VAR_13;
  FUNC_1();

  return (VAR_15);
 }
 FUNC_1();
 return (((void*)0));
}
