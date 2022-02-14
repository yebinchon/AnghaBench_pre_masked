
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct eui64 {unsigned int* octet; } ;


 int VAR_0 ;
 int FUNC_0 (char const*,char*,unsigned int*,unsigned int*,unsigned int*,unsigned int*,unsigned int*,unsigned int*,...) ;

int
FUNC_1(const char *VAR_1, struct eui64 *VAR_2)
{
 int VAR_3;
 unsigned int VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11;


 VAR_3 = FUNC_0(VAR_1, "%x-%x-%x-%x-%x-%x-%x-%x",
     &VAR_4, &VAR_5, &VAR_6, &VAR_7, &VAR_8, &VAR_9, &VAR_10, &VAR_11);
 if (VAR_3 == VAR_0)
  goto good;

 VAR_3 = FUNC_0(VAR_1, "%x:%x:%x:%x:%x:%x:%x:%x",
     &VAR_4, &VAR_5, &VAR_6, &VAR_7, &VAR_8, &VAR_9, &VAR_10, &VAR_11);
 if (VAR_3 == VAR_0)
  goto good;

 VAR_3 = FUNC_0(VAR_1, "0x%2x%2x%2x%2x%2x%2x%2x%2x",
     &VAR_4, &VAR_5, &VAR_6, &VAR_7, &VAR_8, &VAR_9, &VAR_10, &VAR_11);
 if (VAR_3 == VAR_0)
  goto good;

 VAR_3 = FUNC_0(VAR_1, "%x-%x-%x-%x-%x-%x",
     &VAR_4, &VAR_5, &VAR_6, &VAR_9, &VAR_10, &VAR_11);
 if (VAR_3 == 6) {
  VAR_7 = 0xff;
  VAR_8 = 0xfe;
  goto good;
 }

 VAR_3 = FUNC_0(VAR_1, "%x:%x:%x:%x:%x:%x",
     &VAR_4, &VAR_5, &VAR_6, &VAR_9, &VAR_10, &VAR_11);
 if (VAR_3 == 6) {
  VAR_7 = 0xff;
  VAR_8 = 0xfe;
  goto good;
 }

 return (-1);

good:
        VAR_2->octet[0]=VAR_4;
 VAR_2->octet[1]=VAR_5;
 VAR_2->octet[2]=VAR_6;
 VAR_2->octet[3]=VAR_7;
 VAR_2->octet[4]=VAR_8;
 VAR_2->octet[5]=VAR_9;
 VAR_2->octet[6]=VAR_10;
 VAR_2->octet[7]=VAR_11;

        return (0);
}
