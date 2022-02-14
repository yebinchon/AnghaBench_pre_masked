
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct bgx {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct bgx*,int,scalar_t__) ;
 struct bgx** VAR_2 ;

uint64_t
FUNC_1(int VAR_3, int VAR_4, int VAR_5, int VAR_6)
{
 struct bgx *VAR_7;

 VAR_7 = VAR_2[(VAR_3 * VAR_1) + VAR_4];
 if (VAR_7 == ((void*)0))
  return (0);

 return (FUNC_0(VAR_7, VAR_5, VAR_0 + (VAR_6 * 8)));
}
