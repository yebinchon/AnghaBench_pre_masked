
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
typedef size_t u_char ;
typedef int title ;
struct sshkey {int dummy; } ;
typedef int hash ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int ) ;
 size_t FUNC_1 (size_t,size_t) ;
 char* FUNC_2 (int,int) ;
 int FUNC_3 (char*,char*,size_t) ;
 int FUNC_4 (size_t**,int ,int) ;
 int FUNC_5 (char*,int,char*,char const*,...) ;
 int FUNC_6 (struct sshkey const*) ;
 char* FUNC_7 (struct sshkey const*) ;
 int FUNC_8 (char*) ;

__attribute__((used)) static char *
FUNC_9(const char *VAR_2, u_char *VAR_3, size_t VAR_4,
    const struct sshkey *VAR_5)
{




 char *VAR_6 = " .o+=*BOX@%&#/^SE";
 char *VAR_7, *VAR_8, VAR_9[VAR_0], VAR_10[VAR_0];
 u_char VAR_11[VAR_0][VAR_1];
 size_t VAR_12, VAR_13, VAR_14;
 u_int VAR_15;
 int VAR_16, VAR_17, VAR_18;
 size_t VAR_19 = FUNC_8(VAR_6) - 1;

 if ((VAR_7 = FUNC_2((VAR_0 + 3), (VAR_1 + 2))) == ((void*)0))
  return ((void*)0);


 FUNC_4(VAR_11, 0, VAR_0 * VAR_1 * sizeof(char));
 VAR_16 = VAR_0 / 2;
 VAR_17 = VAR_1 / 2;


 for (VAR_12 = 0; VAR_12 < VAR_4; VAR_12++) {
  int VAR_20;

  VAR_20 = VAR_3[VAR_12];
  for (VAR_15 = 0; VAR_15 < 4; VAR_15++) {

   VAR_16 += (VAR_20 & 0x1) ? 1 : -1;
   VAR_17 += (VAR_20 & 0x2) ? 1 : -1;


   VAR_16 = FUNC_0(VAR_16, 0);
   VAR_17 = FUNC_0(VAR_17, 0);
   VAR_16 = FUNC_1(VAR_16, VAR_0 - 1);
   VAR_17 = FUNC_1(VAR_17, VAR_1 - 1);


   if (VAR_11[VAR_16][VAR_17] < VAR_19 - 2)
    VAR_11[VAR_16][VAR_17]++;
   VAR_20 = VAR_20 >> 2;
  }
 }


 VAR_11[VAR_0 / 2][VAR_1 / 2] = VAR_19 - 1;
 VAR_11[VAR_16][VAR_17] = VAR_19;


 VAR_18 = FUNC_5(VAR_9, sizeof(VAR_9), "[%s %u]",
  FUNC_7(VAR_5), FUNC_6(VAR_5));

 if (VAR_18 < 0 || VAR_18 > (int)sizeof(VAR_9))
  VAR_18 = FUNC_5(VAR_9, sizeof(VAR_9), "[%s]", FUNC_7(VAR_5));
 VAR_13 = (VAR_18 <= 0) ? 0 : FUNC_8(VAR_9);


 VAR_18 = FUNC_5(VAR_10, sizeof(VAR_10), "[%s]", VAR_2);
 VAR_14 = (VAR_18 <= 0) ? 0 : FUNC_8(VAR_10);


 VAR_8 = VAR_7;
 *VAR_8++ = '+';
 for (VAR_12 = 0; VAR_12 < (VAR_0 - VAR_13) / 2; VAR_12++)
  *VAR_8++ = '-';
 FUNC_3(VAR_8, VAR_9, VAR_13);
 VAR_8 += VAR_13;
 for (VAR_12 += VAR_13; VAR_12 < VAR_0; VAR_12++)
  *VAR_8++ = '-';
 *VAR_8++ = '+';
 *VAR_8++ = '\n';


 for (VAR_17 = 0; VAR_17 < VAR_1; VAR_17++) {
  *VAR_8++ = '|';
  for (VAR_16 = 0; VAR_16 < VAR_0; VAR_16++)
   *VAR_8++ = VAR_6[FUNC_1(VAR_11[VAR_16][VAR_17], VAR_19)];
  *VAR_8++ = '|';
  *VAR_8++ = '\n';
 }


 *VAR_8++ = '+';
 for (VAR_12 = 0; VAR_12 < (VAR_0 - VAR_14) / 2; VAR_12++)
  *VAR_8++ = '-';
 FUNC_3(VAR_8, VAR_10, VAR_14);
 VAR_8 += VAR_14;
 for (VAR_12 += VAR_14; VAR_12 < VAR_0; VAR_12++)
  *VAR_8++ = '-';
 *VAR_8++ = '+';

 return VAR_7;
}
