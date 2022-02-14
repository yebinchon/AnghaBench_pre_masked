
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int __u16 ;


 int FUNC_0 (char*,char*,unsigned short,unsigned short) ;

char *FUNC_1(__u16 VAR_0, char *VAR_1)
{
 unsigned short VAR_2, VAR_3;

 VAR_2 = VAR_0 & 0x03ff;
 VAR_3 = VAR_0 >> 10;
 FUNC_0(VAR_1, "%hd.%hd", VAR_3, VAR_2);

 return VAR_1;
}
