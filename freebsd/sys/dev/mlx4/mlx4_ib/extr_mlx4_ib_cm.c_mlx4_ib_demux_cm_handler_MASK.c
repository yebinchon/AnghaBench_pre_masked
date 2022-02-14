
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ interface_id; } ;
union ib_gid {TYPE_1__ global; } ;
typedef scalar_t__ u32 ;
struct id_map_entry {int slave_id; int sl_cm_id; } ;
struct TYPE_4__ {scalar_t__ attr_id; } ;
struct ib_mad {TYPE_2__ mad_hdr; } ;
struct ib_device {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (struct ib_mad*) ;
 union ib_gid FUNC_1 (struct ib_device*,struct ib_mad*) ;
 int FUNC_2 (struct ib_device*,int) ;
 struct id_map_entry* FUNC_3 (struct ib_device*,int*,int,int) ;
 int FUNC_4 (struct ib_device*,int,scalar_t__) ;
 int FUNC_5 (struct ib_device*,char*,unsigned long long) ;
 int FUNC_6 (char*,scalar_t__) ;
 int FUNC_7 (struct ib_device*,struct id_map_entry*) ;
 int FUNC_8 (struct ib_mad*,int ) ;

int FUNC_9(struct ib_device *VAR_6, int VAR_7, int *VAR_8,
        struct ib_mad *VAR_9)
{
 u32 VAR_10;
 struct id_map_entry *VAR_11;

 if (VAR_9->mad_hdr.attr_id == VAR_3 ||
     VAR_9->mad_hdr.attr_id == VAR_4) {
  union ib_gid VAR_12;

  if (!VAR_8)
   return 0;

  VAR_12 = FUNC_1(VAR_6, VAR_9);
  *VAR_8 = FUNC_4(VAR_6, VAR_7, VAR_12.global.interface_id);
  if (*VAR_8 < 0) {
   FUNC_5(VAR_6, "failed matching slave_id by gid (0x%llx)\n",
     (unsigned long long)VAR_12.global.interface_id);
   return -VAR_5;
  }
  return 0;
 }

 VAR_10 = FUNC_0(VAR_9);
 VAR_11 = FUNC_3(VAR_6, (int *)&VAR_10, -1, -1);

 if (!VAR_11) {
  FUNC_6("Couldn't find an entry for pv_cm_id 0x%x\n", VAR_10);
  return -VAR_5;
 }

 if (VAR_8)
  *VAR_8 = VAR_11->slave_id;
 FUNC_8(VAR_9, VAR_11->sl_cm_id);

 if (VAR_9->mad_hdr.attr_id == VAR_1)
  FUNC_7(VAR_6, VAR_11);
 else if (VAR_9->mad_hdr.attr_id == VAR_2 ||
   VAR_9->mad_hdr.attr_id == VAR_0) {
  FUNC_2(VAR_6, (int) VAR_10);
 }

 return 0;
}
