
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned long s_addr; } ;
struct sockaddr_in {int sin_port; int sin_family; TYPE_1__ sin_addr; } ;


 int VAR_0 ;
 int FUNC_0 (char*,char*,int) ;
 int FUNC_1 (char*,char*,unsigned long*,unsigned long*,unsigned long*,unsigned long*,unsigned long*,unsigned long*) ;

__attribute__((used)) static int FUNC_2(char *VAR_1, struct sockaddr_in *VAR_2)
{
 unsigned char VAR_3[2];
 int VAR_4;
 unsigned long VAR_5[6];

 VAR_4 = FUNC_1(VAR_1, "%lu.%lu.%lu.%lu.%lu.%lu", &VAR_5[0], &VAR_5[1], &VAR_5[2],
      &VAR_5[3], &VAR_5[4], &VAR_5[5]);

 if (VAR_4 < 6)
  return(1);

 for (VAR_4 = 0; VAR_4 < 4; VAR_4++)
  VAR_2->sin_addr.s_addr |= (VAR_5[VAR_4] & 0x000000FF) << (8 * VAR_4);

 VAR_3[0] = (unsigned char)VAR_5[4] & 0x000000FF;
 VAR_3[1] = (unsigned char)VAR_5[5] & 0x000000FF;

 VAR_2->sin_family = VAR_0;
 FUNC_0((char *)&VAR_3, (char *)&VAR_2->sin_port, 2);

 return (0);
}
