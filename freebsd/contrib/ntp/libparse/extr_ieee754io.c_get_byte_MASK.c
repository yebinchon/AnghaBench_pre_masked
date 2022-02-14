
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int* offsets_t ;
typedef scalar_t__ bufp ;


 int VAR_0 ;
 int FUNC_0 (char*,unsigned int,int,unsigned char) ;

__attribute__((used)) static unsigned char
FUNC_1(
  unsigned char *VAR_1,
  offsets_t VAR_2,
  int *VAR_3
  )
{
  unsigned char VAR_4;

  VAR_4 = *(VAR_1 + VAR_2[*VAR_3]);




  (*VAR_3)++;
  return VAR_4;
}
