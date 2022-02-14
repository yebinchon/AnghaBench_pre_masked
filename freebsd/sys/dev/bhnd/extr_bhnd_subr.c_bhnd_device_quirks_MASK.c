
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct bhnd_device_quirk {int quirks; int desc; } ;
struct bhnd_device {struct bhnd_device_quirk* quirks_table; } ;
typedef int device_t ;


 int FUNC_0 (struct bhnd_device_quirk const*) ;
 struct bhnd_device* FUNC_1 (int ,struct bhnd_device const*,size_t) ;
 scalar_t__ FUNC_2 (int ,int *) ;

uint32_t
FUNC_3(device_t VAR_0, const struct bhnd_device *VAR_1,
    size_t VAR_2)
{
 const struct bhnd_device *VAR_3;
 const struct bhnd_device_quirk *VAR_4, *VAR_5;
 uint32_t VAR_6;


 if ((VAR_3 = FUNC_1(VAR_0, VAR_1, VAR_2)) == ((void*)0))
  return (0);


 VAR_5 = VAR_3->quirks_table;
 if (VAR_5 == ((void*)0))
  return (0);


 VAR_6 = 0;
 for (VAR_4 = VAR_5; !FUNC_0(VAR_4); VAR_4++) {
  if (FUNC_2(VAR_0, &VAR_4->desc))
   VAR_6 |= VAR_4->quirks;
 }

 return (VAR_6);
}
