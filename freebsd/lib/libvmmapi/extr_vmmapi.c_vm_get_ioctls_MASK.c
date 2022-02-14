
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_ioctl_cmds ;
typedef int const cap_ioctl_t ;
 int FUNC_0 (int const*,int const*,int) ;
 int const* FUNC_1 (int) ;
 size_t FUNC_2 (int const*) ;

const cap_ioctl_t *
FUNC_3(size_t *VAR_0)
{
 cap_ioctl_t *VAR_1;

 static const cap_ioctl_t VAR_2[] = { 140, 130, 147,
     180, 173, 150, 150,
     151, 137, 172,
     135, 170,
     136, 171,
     165, 155, 154,
     153, 163, 162,
     160, 161, 159,
     158, 157, 156,
     139, 178, 179,
     128, 152, 149,
     148, 164, 132, 131,
     133, 168,
     175, 176, 167,
     166,
     181, 177, 129, 145,
     138, 174,
     141, 143, 142, 144,
     146, 134, 169 };

 if (VAR_0 == ((void*)0)) {
  VAR_1 = FUNC_1(sizeof(VAR_2));
  if (VAR_1 == ((void*)0))
   return (((void*)0));
  FUNC_0(VAR_2, VAR_1, sizeof(VAR_2));
  return (VAR_1);
 }

 *VAR_0 = FUNC_2(VAR_2);
 return (((void*)0));
}
