
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int random_bits; int max; } ;
typedef TYPE_1__ passwdqc_params_t ;
typedef int output ;
typedef int bytes ;


 int VAR_0 ;
 char* VAR_1 ;
 char** VAR_2 ;
 int FUNC_0 (int) ;
 char* FUNC_1 (char*,char,int) ;
 int FUNC_2 (char*,char*,int) ;
 int FUNC_3 (unsigned char*,int ,int) ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 (int,unsigned char*,int) ;

char *FUNC_6(passwdqc_params_t *VAR_3)
{
 static char VAR_4[0x100];
 int VAR_5;
 int VAR_6, VAR_7, VAR_8;
 unsigned int VAR_9;
 char *VAR_10, *VAR_11;
 int VAR_12;
 unsigned char VAR_13[2];

 if (!(VAR_5 = VAR_3->random_bits))
  return ((void*)0);

 VAR_7 = 1 + ((VAR_5 - 12) + 14) / 15;
 VAR_6 = ((VAR_5 + 11) / 12 != VAR_7);

 VAR_9 = VAR_7 * 7 - 1;
 if (VAR_9 >= sizeof(VAR_4) || (int)VAR_9 > VAR_3->max)
  return ((void*)0);

 if ((VAR_12 = FUNC_4("/dev/urandom", VAR_0)) < 0) return ((void*)0);

 VAR_9 = 0;
 do {
  if (FUNC_5(VAR_12, VAR_13, sizeof(VAR_13)) != sizeof(VAR_13)) {
   FUNC_0(VAR_12);
   return ((void*)0);
  }

  VAR_8 = (((int)VAR_13[1] & 0x0f) << 8) | (int)VAR_13[0];
  VAR_10 = VAR_2[VAR_8];
  VAR_11 = FUNC_1(VAR_10, '\0', 6);
  if (!VAR_11) VAR_11 = VAR_10 + 6;
  if (VAR_9 + (VAR_11 - VAR_10) >= sizeof(VAR_4) - 1) {
   FUNC_0(VAR_12);
   return ((void*)0);
  }
  FUNC_2(&VAR_4[VAR_9], VAR_10, VAR_11 - VAR_10);
  VAR_9 += VAR_11 - VAR_10;
  VAR_5 -= 12;

  if (VAR_6 && VAR_5 > 3) {
   VAR_8 = ((int)VAR_13[1] & 0x70) >> 4;
   VAR_4[VAR_9++] = VAR_1[VAR_8];
   VAR_5 -= 3;
  } else
  if (VAR_5 > 0)
   VAR_4[VAR_9++] = ' ';
 } while (VAR_5 > 0);

 FUNC_3(VAR_13, 0, sizeof(VAR_13));
 VAR_4[VAR_9] = '\0';

 FUNC_0(VAR_12);

 return VAR_4;
}
