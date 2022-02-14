
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int daddr_t ;
struct TYPE_2__ {int * device; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_1__ VAR_6 ;
 scalar_t__ FUNC_0 (int *,int ,int ,size_t,char*) ;
 scalar_t__ FUNC_1 (int *,int ,int ,size_t,char*) ;

__attribute__((used)) static int
FUNC_2(void *VAR_7, int VAR_8, daddr_t VAR_9, size_t VAR_10,
    char *VAR_11, size_t *VAR_12)
{
 if (VAR_6.device == ((void*)0))
  return (VAR_1);
 if (VAR_12 != ((void*)0))
  *VAR_12 = 0;

 VAR_8 &= VAR_3;
 if (VAR_8 == VAR_5) {
  if (FUNC_1(VAR_6.device, 0, VAR_9, VAR_10 >> 9, VAR_11) != 0)
   return (VAR_0);
 } else if (VAR_8 == VAR_4) {
  if (FUNC_0(VAR_6.device, 0, VAR_9, VAR_10 >> 9, VAR_11) != 0)
   return (VAR_0);
 } else {
  return (VAR_2);
 }

 if (VAR_12 != ((void*)0))
  *VAR_12 = VAR_10;
 return (0);
}
