
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char u8 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 char* FUNC_1 (int) ;
 int FUNC_2 (char*,char const*,size_t) ;
 int FUNC_3 (char*,int ,int) ;
 int FUNC_4 (char**,char*,char*,char**,char*) ;

__attribute__((used)) static int FUNC_5(char *VAR_2, size_t VAR_3, const u8 *VAR_4,
     size_t VAR_5, size_t VAR_6)
{

 const char *VAR_7 = "\x04_tcp\x05local\x00\x00\x0C\x00\x01"
  "\x04_udp\xC0\x11\x00\x0C\x00\x01";
 u8 *VAR_8, *VAR_9, *VAR_10;
 char *VAR_11, *VAR_12;
 int VAR_13 = 0;

 if (VAR_3 < 2)
  return -1;
 if (VAR_6 > VAR_5)
  return -1;

 VAR_8 = FUNC_1(VAR_0 + VAR_1 + VAR_5);
 if (VAR_8 == ((void*)0))
  return -1;
 VAR_10 = VAR_8 + VAR_0 + VAR_1;
 VAR_9 = VAR_10 + VAR_5;
 VAR_10 += VAR_6;

 FUNC_3(VAR_8, 0, VAR_0);
 FUNC_2(VAR_8 + VAR_0, VAR_7, VAR_1);
 FUNC_2(VAR_8 + VAR_0 + VAR_1, VAR_4, VAR_5);

 VAR_11 = VAR_2;
 VAR_12 = VAR_2 + VAR_3;

 VAR_13 = FUNC_4(&VAR_11, VAR_12, VAR_8, &VAR_10, VAR_9);
 if (VAR_13) {
  FUNC_0(VAR_8);
  return VAR_13;
 }

 if (VAR_11 == VAR_2) {
  VAR_11[0] = '.';
  VAR_11[1] = '\0';
 } else if (VAR_11[-1] == '.')
  VAR_11[-1] = '\0';

 FUNC_0(VAR_8);
 return 0;
}
