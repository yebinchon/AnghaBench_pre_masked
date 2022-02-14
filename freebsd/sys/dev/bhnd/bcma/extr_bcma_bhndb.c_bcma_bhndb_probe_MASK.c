
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bhnd_chipid {scalar_t__ chip_type; } ;
typedef int device_t ;


 struct bhnd_chipid* FUNC_0 (int ,int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,struct bhnd_chipid const*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int
FUNC_4(device_t VAR_2)
{
 const struct bhnd_chipid *VAR_3;
 int VAR_4;


 if ((VAR_4 = FUNC_1(VAR_2)) > 0)
  return (VAR_4);


 VAR_3 = FUNC_0(FUNC_3(VAR_2), VAR_2);
 if (VAR_3->chip_type != VAR_0)
  return (VAR_1);


 FUNC_2(VAR_2, VAR_3);

 return (VAR_4);
}
