
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 char* FUNC_0 (int ) ;
 char* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,int ,long) ;
 scalar_t__ FUNC_3 (int*,char const*,int*,char*,int *) ;
 scalar_t__ FUNC_4 (char const*,int,char*,long*) ;
 int FUNC_5 (char const*,int,char*,char const**) ;
 scalar_t__ FUNC_6 (char const*,char*) ;

void
FUNC_7(device_t VAR_4, device_t VAR_5, const char *VAR_6, int *VAR_7)
{
 const char *VAR_8;
 long VAR_9;
 int VAR_10, VAR_11, VAR_12;

 VAR_10 = 0;
 for (;;) {
  if (FUNC_3(&VAR_10, VAR_6, &VAR_12, "at", ((void*)0)) != 0)
   break;


  FUNC_5(VAR_6, VAR_12, "at", &VAR_8);
  if (!(FUNC_6(VAR_8, FUNC_1(VAR_4)) == 0 ||
      FUNC_6(VAR_8, FUNC_0(VAR_4)) == 0))
   continue;
  VAR_11 = 0;
  if (FUNC_4(VAR_6, VAR_12, "port", &VAR_9) == 0) {
   if (FUNC_6(VAR_6, "fdc") == 0)
    VAR_9 += 2;
   if (FUNC_2(VAR_5, VAR_1,
       VAR_9))
    VAR_11++;
   else
    continue;
  }
  if (FUNC_4(VAR_6, VAR_12, "maddr", &VAR_9) == 0) {
   if (FUNC_2(VAR_5, VAR_3,
       VAR_9))
    VAR_11++;
   else
    continue;
  }
  if (VAR_11 > 0)
   goto matched;
  if (FUNC_4(VAR_6, VAR_12, "irq", &VAR_9) == 0) {
   if (FUNC_2(VAR_5, VAR_2, VAR_9))
    VAR_11++;
   else
    continue;
  }
  if (FUNC_4(VAR_6, VAR_12, "drq", &VAR_9) == 0) {
   if (FUNC_2(VAR_5, VAR_0, VAR_9))
    VAR_11++;
   else
    continue;
  }

 matched:
  if (VAR_11 > 0) {

   *VAR_7 = VAR_12;
   break;
  }
 }
}
