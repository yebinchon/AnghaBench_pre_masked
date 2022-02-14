
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct in_device {int dummy; } ;
typedef int __be32 ;


 int FUNC_0 (struct in_device*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct in_device*,int ,int ,int) ;

__attribute__((used)) static int FUNC_2(struct in_device *VAR_2, __be32 VAR_3, __be32 VAR_4)
{
 int VAR_5;

 switch (FUNC_0(VAR_2)) {
 case 0:
  return 0;
 case 1:
  VAR_3 = 0;
  VAR_5 = VAR_0;
  break;
 case 2:



  VAR_5 = VAR_0;
  break;
 case 3:
  VAR_3 = 0;
  VAR_5 = VAR_1;
  break;
 case 4:
 case 5:
 case 6:
 case 7:
  return 0;
 case 8:
  return 1;
 default:
  return 0;
 }
 return !FUNC_1(VAR_2, VAR_3, VAR_4, VAR_5);
}
