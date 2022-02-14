
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sgx_softc {int enclave_size_max; } ;
struct secs_attr {scalar_t__ reserved1; scalar_t__ reserved2; scalar_t__ reserved3; int xfrm; int mode64bit; scalar_t__* reserved4; } ;
struct secs {int size; int base; scalar_t__* reserved4; scalar_t__* reserved3; scalar_t__* reserved2; scalar_t__* reserved1; struct secs_attr attributes; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static int
FUNC_0(struct sgx_softc *VAR_7, struct secs *VAR_8)
{
 struct secs_attr *VAR_9;
 int VAR_10;

 if (VAR_8->size == 0)
  return (VAR_0);


 if (VAR_8->base & (VAR_8->size - 1))
  return (VAR_0);


 if (VAR_8->size < 2 * VAR_1)
  return (VAR_0);

 if ((VAR_8->size & (VAR_8->size - 1)) != 0)
  return (VAR_0);

 VAR_9 = &VAR_8->attributes;

 if (VAR_9->reserved1 != 0 ||
     VAR_9->reserved2 != 0 ||
     VAR_9->reserved3 != 0)
  return (VAR_0);

 for (VAR_10 = 0; VAR_10 < VAR_2; VAR_10++)
  if (VAR_9->reserved4[VAR_10])
   return (VAR_0);







 if ((VAR_9->xfrm & 0x3) != 0x3)
  return (VAR_0);

 if (!VAR_9->mode64bit)
  return (VAR_0);

 if (VAR_8->size > VAR_7->enclave_size_max)
  return (VAR_0);

 for (VAR_10 = 0; VAR_10 < VAR_3; VAR_10++)
  if (VAR_8->reserved1[VAR_10])
   return (VAR_0);

 for (VAR_10 = 0; VAR_10 < VAR_4; VAR_10++)
  if (VAR_8->reserved2[VAR_10])
   return (VAR_0);

 for (VAR_10 = 0; VAR_10 < VAR_5; VAR_10++)
  if (VAR_8->reserved3[VAR_10])
   return (VAR_0);

 for (VAR_10 = 0; VAR_10 < VAR_6; VAR_10++)
  if (VAR_8->reserved4[VAR_10])
   return (VAR_0);

 return (0);
}
