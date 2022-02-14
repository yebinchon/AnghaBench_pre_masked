
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int u_int ;
struct bhnd_erom_iores {int * mapped; } ;
struct bhnd_erom_io {int dummy; } ;
typedef int bhnd_size_t ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (char*,...) ;

__attribute__((used)) static uint32_t
FUNC_4(struct bhnd_erom_io *VAR_0, bhnd_size_t VAR_1, u_int VAR_2)
{
 struct bhnd_erom_iores *VAR_3 = (struct bhnd_erom_iores *)VAR_0;

 if (VAR_3->mapped == ((void*)0))
  FUNC_3("read with invalid mapping");

 switch (VAR_2) {
 case 1:
  return (FUNC_0(VAR_3->mapped, VAR_1));
 case 2:
  return (FUNC_1(VAR_3->mapped, VAR_1));
 case 4:
  return (FUNC_2(VAR_3->mapped, VAR_1));
 default:
  FUNC_3("invalid width %u", VAR_2);
 }
}
