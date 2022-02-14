
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uintmax_t ;
typedef int u_int ;
struct bhnd_resource {int res; } ;
struct bhnd_nvram_io {int * iops; } ;
struct bhnd_nvram_iores {int bus_width; struct bhnd_nvram_io io; scalar_t__ size; scalar_t__ offset; struct bhnd_resource* res; } ;
typedef scalar_t__ rman_res_t ;
typedef scalar_t__ bus_size_t ;


 int FUNC_0 (char*,int,...) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 struct bhnd_nvram_iores* FUNC_1 (int,int ,int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;

struct bhnd_nvram_io *
FUNC_4(struct bhnd_resource *VAR_5, bus_size_t VAR_6,
    bus_size_t VAR_7, u_int VAR_8)
{
 struct bhnd_nvram_iores *VAR_9;
 rman_res_t VAR_10, VAR_11;


 switch (VAR_8) {
 case 1:
 case 2:
 case 4:

  break;
 default:
  FUNC_0("invalid bus width %u\n", VAR_8);
  return (((void*)0));
 }




 if (VAR_7 > VAR_3 || VAR_6 > VAR_3) {
  FUNC_0("offset %#jx+%#jx exceeds SIZE_MAX\n",
      (uintmax_t)VAR_6, (uintmax_t)VAR_6);
  return (((void*)0));
 }

 if (VAR_7 > VAR_0 || VAR_6 > VAR_0)
 {
  FUNC_0("offset %#jx+%#jx exceeds BUS_SPACE_MAXSIZE\n",
      (uintmax_t)VAR_6, (uintmax_t)VAR_6);
  return (((void*)0));
 }


 VAR_11 = FUNC_2(VAR_5->res);
 VAR_10 = FUNC_3(VAR_5->res);
 if (VAR_11 < VAR_6 || VAR_11 < VAR_7 || VAR_11 - VAR_7 < VAR_6)
  return (((void*)0));


 if ((VAR_10 + VAR_6) % VAR_8 != 0) {
  FUNC_0("base address %#jx+%#jx not aligned to bus width "
      "%u\n", (uintmax_t)VAR_10, (uintmax_t)VAR_6, VAR_8);
  return (((void*)0));
 }

 if (VAR_7 % VAR_8 != 0) {
  FUNC_0("size %#jx not aligned to bus width %u\n",
      (uintmax_t)VAR_7, VAR_8);
  return (((void*)0));
 }


 VAR_9 = FUNC_1(sizeof(*VAR_9), VAR_1, VAR_2);
 VAR_9->io.iops = &VAR_4;
 VAR_9->res = VAR_5;
 VAR_9->offset = VAR_6;
 VAR_9->size = VAR_7;
 VAR_9->bus_width = VAR_8;

 return (&VAR_9->io);
}
