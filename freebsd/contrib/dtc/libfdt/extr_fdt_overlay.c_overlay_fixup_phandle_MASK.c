
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* FUNC_0 (void*,int,char const**,int*) ;
 void* FUNC_1 (char const*,char,int) ;
 int FUNC_2 (void*,void*,int,char const*,int,char const*,int,int,char const*) ;
 int FUNC_3 (char*,char**,int) ;

__attribute__((used)) static int FUNC_4(void *VAR_3, void *VAR_4, int VAR_5,
     int VAR_6)
{
 const char *VAR_7;
 const char *VAR_8;
 int VAR_9;

 VAR_7 = FUNC_0(VAR_4, VAR_6,
          &VAR_8, &VAR_9);
 if (!VAR_7) {
  if (VAR_9 == -VAR_2)
   return -VAR_1;

  return VAR_9;
 }

 do {
  const char *VAR_10, *VAR_11, *VAR_12;
  const char *VAR_13 = VAR_7;
  uint32_t VAR_14, VAR_15;
  uint32_t VAR_16;
  char *VAR_17, *VAR_18;
  int VAR_19, VAR_20;

  VAR_12 = FUNC_1(VAR_7, '\0', VAR_9);
  if (!VAR_12)
   return -VAR_0;
  VAR_16 = VAR_12 - VAR_13;

  VAR_9 -= VAR_16 + 1;
  VAR_7 += VAR_16 + 1;

  VAR_10 = VAR_13;
  VAR_17 = FUNC_1(VAR_13, ':', VAR_16);
  if (!VAR_17 || *VAR_17 != ':')
   return -VAR_0;

  VAR_14 = VAR_17 - VAR_10;
  if (VAR_14 == (VAR_16 - 1))
   return -VAR_0;

  VAR_16 -= VAR_14 + 1;
  VAR_11 = VAR_17 + 1;
  VAR_17 = FUNC_1(VAR_11, ':', VAR_16);
  if (!VAR_17 || *VAR_17 != ':')
   return -VAR_0;

  VAR_15 = VAR_17 - VAR_11;
  if (!VAR_15)
   return -VAR_0;

  VAR_19 = FUNC_3(VAR_17 + 1, &VAR_18, 10);
  if ((*VAR_18 != '\0') || (VAR_18 <= (VAR_17 + 1)))
   return -VAR_0;

  VAR_20 = FUNC_2(VAR_3, VAR_4, VAR_5,
      VAR_10, VAR_14, VAR_11, VAR_15,
      VAR_19, VAR_8);
  if (VAR_20)
   return VAR_20;
 } while (VAR_9 > 0);

 return 0;
}
