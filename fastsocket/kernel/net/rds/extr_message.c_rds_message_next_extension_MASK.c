
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u8 ;
struct rds_header {unsigned int* h_exthdr; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (void*,unsigned int*,unsigned int) ;
 unsigned int* VAR_3 ;

int FUNC_1(struct rds_header *VAR_4,
  unsigned int *VAR_5, void *VAR_6, unsigned int *VAR_7)
{
 unsigned int VAR_8, VAR_9, VAR_10;
 u8 *VAR_11 = VAR_4->h_exthdr;

 VAR_8 = *VAR_5;
 if (VAR_8 >= VAR_1)
  goto none;



 VAR_9 = VAR_11[VAR_8++];

 if (VAR_9 == VAR_0 || VAR_9 >= VAR_2)
  goto none;
 VAR_10 = VAR_3[VAR_9];
 if (VAR_8 + VAR_10 > VAR_1)
  goto none;

 *VAR_5 = VAR_8 + VAR_10;
 if (VAR_10 < *VAR_7)
  *VAR_7 = VAR_10;
 FUNC_0(VAR_6, VAR_11 + VAR_8, *VAR_7);
 return VAR_9;

none:
 *VAR_5 = VAR_1;
 *VAR_7 = 0;
 return VAR_0;
}
