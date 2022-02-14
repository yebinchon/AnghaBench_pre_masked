
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rds_header {unsigned char* h_exthdr; } ;


 unsigned char VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (unsigned char*,void const*,unsigned int) ;
 unsigned int* VAR_3 ;

int FUNC_1(struct rds_header *VAR_4, unsigned int VAR_5,
         const void *VAR_6, unsigned int VAR_7)
{
 unsigned int VAR_8 = sizeof(u8) + VAR_7;
 unsigned char *VAR_9;


 if (VAR_4->h_exthdr[0] != VAR_0)
  return 0;

 if (VAR_5 >= VAR_2
  || VAR_7 != VAR_3[VAR_5])
  return 0;

 if (VAR_8 >= VAR_1)
  return 0;
 VAR_9 = VAR_4->h_exthdr;

 *VAR_9++ = VAR_5;
 FUNC_0(VAR_9, VAR_6, VAR_7);

 VAR_9[VAR_7] = VAR_0;
 return 1;
}
