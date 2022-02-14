
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int* const,int) ;

__attribute__((used)) static int
FUNC_1(int *const VAR_0, int *const VAR_1, const int VAR_2)
{
 int VAR_3;

 VAR_3 = (*VAR_1 >= 0) ?
  (*VAR_1 / VAR_2) :
  (-1 - (-1 - *VAR_1) / VAR_2);
 *VAR_1 -= VAR_3 * VAR_2;
 return FUNC_0(VAR_0, VAR_3);
}
