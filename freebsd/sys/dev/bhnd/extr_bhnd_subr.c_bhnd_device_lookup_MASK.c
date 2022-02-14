
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct bhnd_device {int device_flags; int core; } ;
typedef scalar_t__ device_t ;
typedef scalar_t__ bhnd_attach_type ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct bhnd_device const*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__,int *) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__) ;

const struct bhnd_device *
FUNC_5(device_t VAR_5, const struct bhnd_device *VAR_6,
    size_t VAR_7)
{
 const struct bhnd_device *VAR_8;
 device_t VAR_9, VAR_10;
 bhnd_attach_type VAR_11;
 uint32_t VAR_12;

 VAR_10 = FUNC_4(VAR_5);
 VAR_9 = FUNC_1(VAR_10);
 VAR_11 = FUNC_3(VAR_5);

 for (VAR_8 = VAR_6; !FUNC_0(VAR_8); VAR_8 =
     (const struct bhnd_device *) ((const char *) VAR_8 + VAR_7))
 {

  if (!FUNC_2(VAR_5, &VAR_8->core))
   continue;


  VAR_12 = VAR_8->device_flags;


  if (VAR_12 & VAR_3)
   VAR_12 |= VAR_2;

  if (VAR_12 & VAR_2)
   if (VAR_11 != VAR_0)
    continue;

  if (VAR_12 & VAR_3)
   if (VAR_5 != VAR_9)
    continue;

  if (VAR_12 & VAR_4)
   if (VAR_11 != VAR_1)
    continue;


  return (VAR_8);
 }


 return (((void*)0));
}
