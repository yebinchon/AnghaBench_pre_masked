
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef scalar_t__ u16 ;
struct ecore_ptt {int dummy; } ;
struct ecore_hwfn {int dummy; } ;
struct dbg_idle_chk_rule {int dummy; } ;
struct TYPE_3__ {int data; } ;
struct dbg_idle_chk_cond_hdr {int data_size; TYPE_1__ mode; } ;
struct TYPE_4__ {int size_in_dwords; int * ptr; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int VAR_3 ;
 int FUNC_1 (struct ecore_hwfn*,struct ecore_ptt*,int*,int,int) ;
 int FUNC_2 (int*,int,int) ;
 int FUNC_3 (int*,int,char*,int) ;
 int FUNC_4 (int*,int,char*,int) ;
 int FUNC_5 (int*,int,char*,char*) ;
 int FUNC_6 (struct ecore_hwfn*,struct ecore_ptt*,int*,int,struct dbg_idle_chk_rule const*,int,int*) ;
 int FUNC_7 (struct ecore_hwfn*,scalar_t__*) ;
 TYPE_2__* VAR_4 ;

__attribute__((used)) static u32 FUNC_8(struct ecore_hwfn *VAR_5,
          struct ecore_ptt *VAR_6,
          u32 *VAR_7,
          bool VAR_8)
{
 u32 VAR_9, VAR_10 = 0, VAR_11 = 0, VAR_12 = 0;


 VAR_10 += FUNC_1(VAR_5, VAR_6, VAR_7 + VAR_10, VAR_8, 1);
 VAR_10 += FUNC_5(VAR_7 + VAR_10, VAR_8, "dump-type", "idle-chk");


 VAR_10 += FUNC_4(VAR_7 + VAR_10, VAR_8, "idle_chk", 1);
 VAR_9 = VAR_10;
 VAR_10 += FUNC_3(VAR_7 + VAR_10, VAR_8, "num_rules", 0);

 while (VAR_11 < VAR_4[VAR_0].size_in_dwords) {
  const struct dbg_idle_chk_cond_hdr *VAR_13 = (const struct dbg_idle_chk_cond_hdr *)&VAR_4[VAR_0].ptr[VAR_11++];
  bool VAR_14, VAR_15 = 1;
  u32 VAR_16;
  u16 VAR_17;


  VAR_14 = FUNC_0(VAR_13->mode.data, VAR_1) > 0;
  if (VAR_14) {
   VAR_17 = FUNC_0(VAR_13->mode.data, VAR_2);
   VAR_15 = FUNC_7(VAR_5, &VAR_17);
  }

  if (VAR_15) {
   VAR_10 += FUNC_6(VAR_5, VAR_6, VAR_7 + VAR_10, VAR_8, (const struct dbg_idle_chk_rule *)&VAR_4[VAR_0].ptr[VAR_11], VAR_13->data_size / VAR_3, &VAR_16);
   VAR_12 += VAR_16;
  }

  VAR_11 += VAR_13->data_size;
 }


 if (VAR_8)
  FUNC_3(VAR_7 + VAR_9, VAR_8, "num_rules", VAR_12);


 VAR_10 += FUNC_2(VAR_7, VAR_10, VAR_8);

 return VAR_10;
}
