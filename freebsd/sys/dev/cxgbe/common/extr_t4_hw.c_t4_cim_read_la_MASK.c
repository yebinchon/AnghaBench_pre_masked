
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned int u32 ;
struct TYPE_2__ {int cim_la_size; } ;
struct adapter {TYPE_1__ params; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int FUNC_0 (unsigned int) ;
 unsigned int VAR_5 ;
 unsigned int FUNC_1 (unsigned int) ;
 scalar_t__ FUNC_2 (struct adapter*) ;
 int FUNC_3 (struct adapter*,int ,int,unsigned int*) ;
 int FUNC_4 (struct adapter*,int ,unsigned int) ;

int FUNC_5(struct adapter *VAR_6, u32 *VAR_7, unsigned int *VAR_8)
{
 int VAR_9, VAR_10;
 unsigned int VAR_11, VAR_12, VAR_13;

 VAR_10 = FUNC_3(VAR_6, VAR_0, 1, &VAR_11);
 if (VAR_10)
  return VAR_10;

 if (VAR_11 & VAR_3) {
  VAR_10 = FUNC_4(VAR_6, VAR_0, 0);
  if (VAR_10)
   return VAR_10;
 }

 VAR_10 = FUNC_3(VAR_6, VAR_0, 1, &VAR_12);
 if (VAR_10)
  goto restart;

 VAR_13 = FUNC_0(VAR_12);
 if (VAR_8)
  *VAR_8 = VAR_13;

 for (VAR_9 = 0; VAR_9 < VAR_6->params.cim_la_size; VAR_9++) {
  VAR_10 = FUNC_4(VAR_6, VAR_0,
        FUNC_1(VAR_13) | VAR_4);
  if (VAR_10)
   break;
  VAR_10 = FUNC_3(VAR_6, VAR_0, 1, &VAR_12);
  if (VAR_10)
   break;
  if (VAR_12 & VAR_4) {
   VAR_10 = -VAR_2;
   break;
  }
  VAR_10 = FUNC_3(VAR_6, VAR_1, 1, &VAR_7[VAR_9]);
  if (VAR_10)
   break;


  VAR_13 = (VAR_13 + 1) & VAR_5;




  if (FUNC_2(VAR_6))
   while ((VAR_13 & 0xf) > 9)
    VAR_13 = (VAR_13 + 1) % VAR_5;
 }
restart:
 if (VAR_11 & VAR_3) {
  int VAR_14 = FUNC_4(VAR_6, VAR_0,
          VAR_11 & ~VAR_4);
  if (!VAR_10)
   VAR_10 = VAR_14;
 }
 return VAR_10;
}
