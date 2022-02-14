
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
struct ps_prochandle {int dummy; } ;
struct TYPE_9__ {int ftps_pc; int ftps_size; scalar_t__ ftps_noffs; int* ftps_offs; int ftps_type; } ;
typedef TYPE_1__ fasttrap_probe_spec_t ;
struct TYPE_10__ {int dt_ftfd; } ;
typedef TYPE_2__ dtrace_hdl_t ;
struct TYPE_11__ {int st_size; int st_value; } ;
typedef TYPE_3__ GElf_Sym ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ps_prochandle*,int*,int,int) ;
 int VAR_3 ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (TYPE_2__*,int ) ;
 int VAR_4 ;
 int FUNC_3 (int*) ;
 scalar_t__ FUNC_4 (int ,int ,TYPE_1__*) ;
 int* FUNC_5 (int) ;
 int FUNC_6 (int ) ;

int
FUNC_7(struct ps_prochandle *VAR_5, dtrace_hdl_t *VAR_6,
    fasttrap_probe_spec_t *VAR_7, const GElf_Sym *VAR_8, uint64_t *VAR_9)
{

 uintptr_t VAR_10;
 uint32_t *VAR_11;
 int VAR_12;
 int VAR_13 = 0;

 if ((VAR_11 = FUNC_5(VAR_8->st_size + 4)) == ((void*)0)) {
  FUNC_1("mr sparkle: malloc() failed\n");
  return (VAR_1);
 }

 if (FUNC_0(VAR_5, VAR_11, VAR_8->st_size, VAR_8->st_value) != VAR_8->st_size) {
  FUNC_1("mr sparkle: Pread() failed\n");
  FUNC_3(VAR_11);
  return (VAR_1);
 }





 VAR_11[VAR_8->st_size / 4] = 0;

 VAR_7->ftps_type = VAR_0;
 VAR_7->ftps_pc = VAR_8->st_value;
 VAR_7->ftps_size = VAR_8->st_size;
 VAR_7->ftps_noffs = 0;

 for (VAR_12 = 0; VAR_12 < VAR_8->st_size / 4; VAR_12++) {

  if ((VAR_11[VAR_12] & 0xfc000001) != 0x48000000 &&
      VAR_11[VAR_12] != 0x4e800020)
   continue;





  if ((VAR_11[VAR_12] & 0xfc000000) == 0x48000000) {
   VAR_10 = (VAR_11[VAR_12] & 0x03fffffc);

   if (!(VAR_11[VAR_12] & 0x02)) {
    VAR_10 += VAR_8->st_value + VAR_12 * 4;
   }
   else {

    if (VAR_10 & 0x02000000) {
     VAR_10 |= (VAR_3 - 0x03ffffff);
    }
   }
   if (VAR_10 >= VAR_8->st_value &&
       VAR_10 <= (VAR_8->st_value + VAR_8->st_size))
    continue;
  }
  FUNC_1("return at offset %x\n", VAR_12 * 4);
  VAR_7->ftps_offs[VAR_7->ftps_noffs++] = VAR_12 * 4;
 }

 FUNC_3(VAR_11);
 if (VAR_7->ftps_noffs > 0) {
  if (FUNC_4(VAR_6->dt_ftfd, VAR_2, VAR_7) != 0) {
   FUNC_1("fasttrap probe creation ioctl failed: %s\n",
       FUNC_6(VAR_4));
   return (FUNC_2(VAR_6, VAR_4));
  }
 }


 return (VAR_7->ftps_noffs);
}
