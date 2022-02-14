
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct floatformat {int sign_start; int totalsize; int byteorder; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (unsigned char*,int ,int ,int ,int) ;

int
FUNC_2 (const struct floatformat *VAR_0, char *VAR_1)
{
  unsigned char *VAR_2 = (unsigned char *) VAR_1;
  FUNC_0 (VAR_0 != ((void*)0));
  return FUNC_1 (VAR_2, VAR_0->byteorder, VAR_0->totalsize, VAR_0->sign_start, 1);
}
