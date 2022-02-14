
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char u8 ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (char const*,char*,int,char*) ;
 int FUNC_2 (char const*,char*,int,char*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,char const*,int) ;
 int FUNC_5 (char*,int ,int) ;
 int FUNC_6 (char const*) ;
 char* FUNC_7 (int) ;

__attribute__((used)) static int FUNC_8(const u8 *VAR_0, size_t VAR_1,
     const char *VAR_2, const u8 *VAR_3,
     int VAR_4, int VAR_5, u8 *VAR_6)
{
 const int VAR_7 = 128;
 const int VAR_8 = 8;
 int VAR_9, VAR_10;
 int VAR_11, VAR_12, VAR_13, VAR_14;
 u8 *VAR_15;

 if (VAR_1 != 128 && VAR_1 != 256)
  return -1;

 VAR_11 = FUNC_6(VAR_2);
 VAR_12 = (VAR_4 + 7) / 8;
 VAR_13 = ((VAR_5 & 0xffff) + 7) / 8;
 VAR_14 = VAR_11 + VAR_12 + 4;

 FUNC_5(VAR_6, 0, VAR_13);

 VAR_10 = (VAR_5 + VAR_7 - 1) / VAR_7;
 if (VAR_10 > ((0x1 << VAR_8) - 1))
  return -1;

 VAR_15 = FUNC_7(VAR_14);
 if (VAR_15 == ((void*)0))
  return -1;

 FUNC_4(VAR_15 + 1, VAR_2, VAR_11);
 FUNC_4(VAR_15 + VAR_11 + 2, VAR_3, VAR_12);
 FUNC_0(&VAR_15[VAR_14 - 2], VAR_5);

 for (VAR_9 = 0; VAR_9 < VAR_10; VAR_9++) {
  int VAR_16;

  VAR_15[0] = (u8) (VAR_9 + 1);
  if (VAR_1 == 128)
   VAR_16 = FUNC_1(VAR_0, VAR_15, VAR_14, VAR_6);
  else
   VAR_16 = FUNC_2(VAR_0, VAR_15, VAR_14, VAR_6);
  if (VAR_16) {
   FUNC_3(VAR_15);
   return -1;
  }
  VAR_6 = VAR_6 + VAR_7 / 8;
 }
 FUNC_3(VAR_15);
 return 0;
}
