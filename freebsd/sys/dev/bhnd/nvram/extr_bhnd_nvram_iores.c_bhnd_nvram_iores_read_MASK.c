
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bhnd_nvram_iores {int bus_width; int res; scalar_t__ offset; } ;
struct bhnd_nvram_io {int dummy; } ;
typedef scalar_t__ bus_size_t ;


 int VAR_0 ;
 int FUNC_0 (int ,scalar_t__,void*,size_t) ;
 int FUNC_1 (int ,scalar_t__,void*,size_t) ;
 int FUNC_2 (int ,scalar_t__,void*,size_t) ;
 int FUNC_3 (struct bhnd_nvram_iores*,size_t,size_t*) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static int
FUNC_5(struct bhnd_nvram_io *VAR_1, size_t VAR_2, void *VAR_3,
    size_t VAR_4)
{
 struct bhnd_nvram_iores *VAR_5;
 bus_size_t VAR_6;
 size_t VAR_7;
 int VAR_8;

 VAR_5 = (struct bhnd_nvram_iores *)VAR_1;



 VAR_7 = VAR_4;
 if ((VAR_8 = FUNC_3(VAR_5, VAR_2, &VAR_7)))
  return (VAR_8);


 if (VAR_7 < VAR_4)
  return (VAR_0);


 if (VAR_4 == 0)
  return (0);


 VAR_6 = VAR_5->offset + VAR_2;
 switch (VAR_5->bus_width) {
 case 1:
  FUNC_0(VAR_5->res, VAR_6, VAR_3,
      VAR_4);
  break;
 case 2:
  FUNC_1(VAR_5->res, VAR_6, VAR_3,
      VAR_4 / 2);
  break;
 case 4:
  FUNC_2(VAR_5->res, VAR_6, VAR_3,
      VAR_4 / 4);
  break;
 default:
  FUNC_4("unreachable!");
 }

 return (0);
}
