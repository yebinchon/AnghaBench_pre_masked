
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct siosc {int dummy; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct siosc* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,int,struct siosc*) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_2)
{
 struct siosc *VAR_3;
 int VAR_4;


 if (FUNC_1(VAR_2) != 0)
  return (VAR_1);





 VAR_3 = FUNC_0(VAR_2);
 VAR_4 = FUNC_2(VAR_2, 1, VAR_3);
 if (VAR_4 != 0)
  return (VAR_4);
 return (VAR_0);
}
