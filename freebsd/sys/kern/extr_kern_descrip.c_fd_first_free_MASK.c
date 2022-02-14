
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct filedesc {int* fd_map; } ;
typedef int NDSLOTTYPE ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;

__attribute__((used)) static int
FUNC_3(struct filedesc *VAR_1, int VAR_2, int VAR_3)
{
 NDSLOTTYPE *VAR_4 = VAR_1->fd_map;
 NDSLOTTYPE VAR_5;
 int VAR_6, VAR_7;

 if (VAR_2 >= VAR_3)
  return (VAR_2);

 VAR_6 = FUNC_0(VAR_2);
 if (VAR_2 % VAR_0) {
  VAR_5 = ~(~(NDSLOTTYPE)0 >> (VAR_0 - (VAR_2 % VAR_0)));
  if ((VAR_5 &= ~VAR_4[VAR_6]) != 0UL)
   return (VAR_6 * VAR_0 + FUNC_2(VAR_5) - 1);
  ++VAR_6;
 }
 for (VAR_7 = FUNC_1(VAR_3); VAR_6 < VAR_7; ++VAR_6)
  if (VAR_4[VAR_6] != ~0UL)
   return (VAR_6 * VAR_0 + FUNC_2(~VAR_4[VAR_6]) - 1);
 return (VAR_3);
}
