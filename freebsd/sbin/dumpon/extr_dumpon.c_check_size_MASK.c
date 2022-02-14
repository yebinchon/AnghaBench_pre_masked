
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uintmax_t ;
typedef int physmem ;
typedef scalar_t__ off_t ;
typedef int minidump ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int,int ,scalar_t__*) ;
 size_t FUNC_3 (int*) ;
 int FUNC_4 (char*,char const*) ;
 scalar_t__ FUNC_5 (int*,size_t,unsigned long*,size_t*,int *,int ) ;
 scalar_t__ FUNC_6 (char*,int*,size_t*,int *,int ) ;
 scalar_t__ VAR_5 ;

__attribute__((used)) static void
FUNC_7(int VAR_6, const char *VAR_7)
{
 int VAR_8[] = { VAR_0, VAR_4 };
 size_t VAR_9 = FUNC_3(VAR_8);
 unsigned long VAR_10;
 size_t VAR_11;
 off_t VAR_12;
 int VAR_13;

 VAR_11 = sizeof(VAR_13);
 if (FUNC_6("debug.minidump", &VAR_13, &VAR_11, ((void*)0), 0) == 0 &&
     VAR_13 == 1)
  return;
 VAR_11 = sizeof(VAR_10);
 if (FUNC_5(VAR_8, VAR_9, &VAR_10, &VAR_11, ((void*)0), 0) != 0)
  FUNC_0(VAR_3, "can't get memory size");
 if (FUNC_2(VAR_6, VAR_1, &VAR_12) != 0)
  FUNC_0(VAR_3, "%s: can't get size", VAR_7);
 if ((uintmax_t)VAR_12 < (uintmax_t)VAR_10) {
  if (VAR_5)
   FUNC_4("%s is smaller than physical memory\n", VAR_7);
  FUNC_1(VAR_2);
 }
}
