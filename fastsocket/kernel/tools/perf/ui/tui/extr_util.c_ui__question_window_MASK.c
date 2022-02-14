
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,int ,int,int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*,int) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (unsigned char*,int,int,int,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_7 (char const*,char) ;
 int FUNC_8 (int) ;

int FUNC_9(const char *VAR_2, const char *VAR_3,
   const char *VAR_4, int VAR_5)
{
 int VAR_6, VAR_7;
 int VAR_8 = 0, VAR_9 = 0;
 const char *VAR_10;

 VAR_10 = VAR_3;
 while (1) {
  const char *VAR_11 = FUNC_7(VAR_10, '\n');
  int VAR_12;

  if (VAR_11 == ((void*)0))
   VAR_11 = FUNC_7(VAR_10, '\0');
  VAR_12 = VAR_11 - VAR_10;
  if (VAR_8 < VAR_12)
   VAR_8 = VAR_12;
  ++VAR_9;
  if (*VAR_11 == '\0')
   break;
  VAR_10 = VAR_11 + 1;
 }

 VAR_8 += 2;
 VAR_9 += 4;
 VAR_7 = VAR_1 / 2 - VAR_9 / 2,
 VAR_6 = VAR_0 / 2 - VAR_8 / 2;

 FUNC_3(0);
 FUNC_0(VAR_7, VAR_6++, VAR_9, VAR_8);
 if (VAR_2) {
  FUNC_1(VAR_7, VAR_6 + 1);
  FUNC_5((char *)VAR_2);
 }
 FUNC_1(++VAR_7, VAR_6);
 VAR_9 -= 2;
 VAR_8 -= 2;
 FUNC_6((unsigned char *)VAR_3, VAR_7, VAR_6,
       VAR_9, VAR_8, 1);
 FUNC_1(VAR_7 + VAR_9 - 2, VAR_6);
 FUNC_4((char *)" ", VAR_8);
 FUNC_1(VAR_7 + VAR_9 - 1, VAR_6);
 FUNC_4((char *)VAR_4, VAR_8);
 FUNC_2();
 return FUNC_8(VAR_5);
}
