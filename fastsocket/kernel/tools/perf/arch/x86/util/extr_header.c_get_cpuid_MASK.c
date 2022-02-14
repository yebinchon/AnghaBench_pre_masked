
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,unsigned int*,unsigned int*,unsigned int*,unsigned int*) ;
 int FUNC_1 (char*,size_t,char*,char*,int,int,int) ;
 scalar_t__ FUNC_2 (char*,char) ;
 int FUNC_3 (char*,char*,int) ;

int
FUNC_4(char *VAR_0, size_t VAR_1)
{
 unsigned int VAR_2, VAR_3, VAR_4, VAR_5, VAR_6;
 int VAR_7 = -1, VAR_8 = -1, VAR_9 = -1;
 int VAR_10;
 char VAR_11[16];

 FUNC_0(0, &VAR_6, &VAR_3, &VAR_4, &VAR_5);
 FUNC_3(&VAR_11[0], (char *)(&VAR_3), 4);
 FUNC_3(&VAR_11[4], (char *)(&VAR_5), 4);
 FUNC_3(&VAR_11[8], (char *)(&VAR_4), 4);
 VAR_11[12] = '\0';

 if (VAR_6 >= 1) {
  FUNC_0(1, &VAR_2, &VAR_3, &VAR_4, &VAR_5);

  VAR_7 = (VAR_2 >> 8) & 0xf;
  VAR_8 = (VAR_2 >> 4) & 0xf;
  VAR_9 = VAR_2 & 0xf;


  if (VAR_7 == 0xf)
   VAR_7 += (VAR_2 >> 20) & 0xff;


  if (VAR_7 >= 0x6)
   VAR_8 += ((VAR_2 >> 16) & 0xf) << 4;
 }
 VAR_10 = FUNC_1(VAR_0, VAR_1, "%s,%u,%u,%u$", VAR_11, VAR_7, VAR_8, VAR_9);


 if (FUNC_2(VAR_0, '$')) {
  VAR_0[VAR_10-1] = '\0';
  return 0;
 }
 return -1;
}
