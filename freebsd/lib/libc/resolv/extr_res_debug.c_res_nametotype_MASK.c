
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long u_int16_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (unsigned char) ;
 scalar_t__ FUNC_1 (char const*,char*,int) ;
 unsigned long FUNC_2 (char const*,char**,int) ;
 unsigned long FUNC_3 (int ,char const*,int*) ;

u_int16_t
FUNC_4(const char *VAR_2, int *VAR_3) {
 unsigned long VAR_4;
 char *VAR_5;
 int VAR_6;

 VAR_4 = FUNC_3(VAR_0, VAR_2, &VAR_6);
 if (VAR_6)
  goto done;

 if (FUNC_1(VAR_2, "type", 4) != 0 ||
     !FUNC_0((unsigned char)VAR_2[4]))
  goto done;
 VAR_1 = 0;
 VAR_4 = FUNC_2(VAR_2 + 4, &VAR_5, 10);
 if (VAR_1 == 0 && *VAR_5 == '\0' && VAR_4 <= 0xffffU)
  VAR_6 = 1;
 done:
 if (VAR_3)
  *VAR_3 = VAR_6;
 return (VAR_4);
}
