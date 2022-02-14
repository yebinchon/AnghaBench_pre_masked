
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct idr_layer {scalar_t__ bitmap; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,scalar_t__*) ;

__attribute__((used)) static void FUNC_1(struct idr_layer **VAR_3, int VAR_4)
{
 struct idr_layer *VAR_5 = VAR_3[0];
 int VAR_6 = 0;

 FUNC_0(VAR_4 & VAR_2, &VAR_5->bitmap);






 while (VAR_5->bitmap == VAR_1) {
  if (!(VAR_5 = VAR_3[++VAR_6]))
   break;
  VAR_4 = VAR_4 >> VAR_0;
  FUNC_0((VAR_4 & VAR_2), &VAR_5->bitmap);
 }
}
