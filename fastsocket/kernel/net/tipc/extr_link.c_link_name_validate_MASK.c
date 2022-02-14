
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct link_name {int if_peer; void* addr_peer; int if_local; void* addr_local; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,char*,int*,int*,int*,char*) ;
 char* FUNC_1 (char*,char) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,char const*,int) ;
 int FUNC_5 (char*,int ) ;
 void* FUNC_6 (int,int,int) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_7(const char *VAR_3, struct link_name *VAR_4)
{
 char VAR_5[VAR_1];
 char *VAR_6;
 char *VAR_7;
 char *VAR_8;
 char *VAR_9;
 char VAR_10;
 u32 VAR_11, VAR_12, VAR_13;
 u32 VAR_14, VAR_15, VAR_16;
 u32 VAR_17;
 u32 VAR_18;



 VAR_5[VAR_1 - 1] = 0;

 FUNC_4(VAR_5, VAR_3, VAR_1);
 if (VAR_5[VAR_1 - 1] != 0)
  return 0;



 VAR_6 = VAR_5;
 if ((VAR_7 = FUNC_1(VAR_6, ':')) == ((void*)0))
  return 0;
 *(VAR_7++) = 0;
 if ((VAR_8 = FUNC_1(VAR_7, '-')) == ((void*)0))
  return 0;
 *(VAR_8++) = 0;
 VAR_17 = VAR_8 - VAR_7;
 if ((VAR_9 = FUNC_1(VAR_8, ':')) == ((void*)0))
  return 0;
 *(VAR_9++) = 0;
 VAR_18 = FUNC_3(VAR_9) + 1;



 if ((FUNC_0(VAR_6, "%u.%u.%u%c",
      &VAR_11, &VAR_12, &VAR_13, &VAR_10) != 3) ||
     (FUNC_0(VAR_8, "%u.%u.%u%c",
      &VAR_14, &VAR_15, &VAR_16, &VAR_10) != 3) ||
     (VAR_11 > 255) || (VAR_12 > 4095) || (VAR_13 > 4095) ||
     (VAR_14 > 255) || (VAR_15 > 4095) || (VAR_16 > 4095) ||
     (VAR_17 <= 1) || (VAR_17 > VAR_0) ||
     (VAR_18 <= 1) || (VAR_18 > VAR_0) ||
     (FUNC_5(VAR_7, VAR_2) != (VAR_17 - 1)) ||
     (FUNC_5(VAR_9, VAR_2) != (VAR_18 - 1)))
  return 0;



 if (VAR_4) {
  VAR_4->addr_local = FUNC_6(VAR_11, VAR_12, VAR_13);
  FUNC_2(VAR_4->if_local, VAR_7);
  VAR_4->addr_peer = FUNC_6(VAR_14, VAR_15, VAR_16);
  FUNC_2(VAR_4->if_peer, VAR_9);
 }
 return 1;
}
