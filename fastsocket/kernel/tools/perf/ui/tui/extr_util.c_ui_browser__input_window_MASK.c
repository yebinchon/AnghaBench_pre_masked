
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,int,int,int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (char*,int) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (unsigned char*,int,int,int,int,int) ;
 int VAR_4 ;
 int VAR_5 ;
 char* FUNC_8 (char const*,char) ;
 int FUNC_9 (char*,char*,int) ;
 int FUNC_10 (int) ;
 int FUNC_11 (char*) ;

int FUNC_12(const char *VAR_6, const char *VAR_7, char *VAR_8,
        const char *VAR_9, int VAR_10)
{
 int VAR_11, VAR_12, VAR_13, VAR_14;
 int VAR_15 = 60, VAR_16 = 0;
 static char VAR_17[50];
 const char *VAR_18;

 VAR_18 = VAR_7;
 while (1) {
  const char *VAR_19 = FUNC_8(VAR_18, '\n');

  if (VAR_19 == ((void*)0))
   VAR_19 = FUNC_8(VAR_18, '\0');
  VAR_13 = VAR_19 - VAR_18;
  if (VAR_15 < VAR_13)
   VAR_15 = VAR_13;
  ++VAR_16;
  if (*VAR_19 == '\0')
   break;
  VAR_18 = VAR_19 + 1;
 }

 VAR_15 += 2;
 VAR_16 += 8;
 VAR_12 = VAR_5 / 2 - VAR_16 / 2;
 VAR_11 = VAR_4 / 2 - VAR_15 / 2;

 FUNC_3(0);
 FUNC_0(VAR_12, VAR_11++, VAR_16, VAR_15);
 if (VAR_6) {
  FUNC_1(VAR_12, VAR_11 + 1);
  FUNC_6((char *)VAR_6);
 }
 FUNC_1(++VAR_12, VAR_11);
 VAR_16 -= 7;
 VAR_15 -= 2;
 FUNC_7((unsigned char *)VAR_7, VAR_12, VAR_11,
       VAR_16, VAR_15, 1);
 VAR_12 += VAR_16;
 VAR_13 = 5;
 while (VAR_13--) {
  FUNC_1(VAR_12 + VAR_13 - 1, VAR_11);
  FUNC_5((char *)" ", VAR_15);
 }
 FUNC_0(VAR_12++, VAR_11 + 1, 3, VAR_15 - 2);

 FUNC_1(VAR_12 + 3, VAR_11);
 FUNC_5((char *)VAR_9, VAR_15);
 FUNC_2();

 VAR_11 += 2;
 VAR_13 = 0;
 VAR_14 = FUNC_10(VAR_10);
 while (VAR_14 != VAR_3 && VAR_14 != VAR_1 && VAR_14 != VAR_2) {
  if (VAR_14 == VAR_0) {
   if (VAR_13 == 0)
    goto next_key;
   FUNC_1(VAR_12, VAR_11 + --VAR_13);
   FUNC_4(' ');
  } else {
   VAR_17[VAR_13] = VAR_14;
   FUNC_1(VAR_12, VAR_11 + VAR_13++);
   FUNC_4(VAR_14);
  }
  FUNC_2();


  if (VAR_13 == sizeof(VAR_17) - 1) {
   FUNC_11("maximum size of symbol name reached!");
   VAR_14 = VAR_1;
   break;
  }
next_key:
  VAR_14 = FUNC_10(VAR_10);
 }

 VAR_17[VAR_13] = '\0';
 FUNC_9(VAR_8, VAR_17, VAR_13+1);
 return VAR_14;
}
