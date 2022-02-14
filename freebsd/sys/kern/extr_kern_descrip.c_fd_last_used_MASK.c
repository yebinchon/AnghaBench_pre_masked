
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct filedesc {int* fd_map; } ;
typedef int NDSLOTTYPE ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;

__attribute__((used)) static int
FUNC_2(struct filedesc *VAR_1, int VAR_2)
{
 NDSLOTTYPE *VAR_3 = VAR_1->fd_map;
 NDSLOTTYPE VAR_4;
 int VAR_5, VAR_6;

 VAR_5 = FUNC_0(VAR_2);
 if (VAR_2 % VAR_0) {
  VAR_4 = ~(~(NDSLOTTYPE)0 << (VAR_2 % VAR_0));
  if ((VAR_4 &= VAR_3[VAR_5]) != 0)
   return (VAR_5 * VAR_0 + FUNC_1(VAR_4) - 1);
  --VAR_5;
 }
 for (VAR_6 = FUNC_0(0); VAR_5 >= VAR_6; --VAR_5)
  if (VAR_3[VAR_5] != 0)
   return (VAR_5 * VAR_0 + FUNC_1(VAR_3[VAR_5]) - 1);
 return (-1);
}
