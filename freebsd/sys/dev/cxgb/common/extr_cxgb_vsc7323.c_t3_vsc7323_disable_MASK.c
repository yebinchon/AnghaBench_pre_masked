
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int adapter_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int,int ) ;
 int FUNC_1 (int *,int ,unsigned int) ;
 int FUNC_2 (int *,int ,unsigned int*,int) ;

int FUNC_3(adapter_t *VAR_2, int VAR_3, int VAR_4)
{
 int VAR_5;
 unsigned int VAR_6, VAR_7;

 VAR_5 = FUNC_2(VAR_2, FUNC_0(1, VAR_3, 0), &VAR_6, 1);
 if (!VAR_5) {
  VAR_7 = VAR_6;
  if (VAR_4 & VAR_1)
   VAR_6 &= ~1;
  if (VAR_4 & VAR_0)
   VAR_6 &= ~2;
  if (VAR_6 != VAR_7)
   VAR_5 = FUNC_1(VAR_2, FUNC_0(1, VAR_3, 0), VAR_6);
 }
 return VAR_5;
}
