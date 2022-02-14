
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iw_point {int length; } ;
typedef int __u16 ;


 int VAR_0 ;
 int VAR_1 ;
 int* VAR_2 ;

__attribute__((used)) static int FUNC_0(__u16 VAR_3, struct iw_point *VAR_4)
{
 int VAR_5 = VAR_4->length;
 int VAR_6 = VAR_3 & VAR_0;
 int VAR_7 = (VAR_3 & VAR_1) >> 12;


 if (VAR_6 < VAR_5)
  VAR_5 = VAR_6;

 return VAR_5 * VAR_2[VAR_7];
}
