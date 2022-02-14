
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t u8 ;
typedef size_t u32 ;
typedef void* u16 ;
struct ecore_ptt {int dummy; } ;
struct ecore_hwfn {int dummy; } ;
struct dbg_dump_mem {int dword1; int dword0; } ;
struct TYPE_4__ {int data; } ;
struct dbg_dump_cond_hdr {size_t data_size; size_t block_id; TYPE_1__ mode; } ;
struct dbg_array {size_t size_in_dwords; int * ptr; } ;
typedef enum block_id { ____Placeholder_block_id } block_id ;
struct TYPE_6__ {size_t storm_id; scalar_t__ associated_to_storm; } ;
struct TYPE_5__ {char letter; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct ecore_hwfn*,int,char*) ;
 void* FUNC_1 (int ,int ) ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 size_t VAR_12 ;
 size_t VAR_13 ;
 int VAR_14 ;
 size_t FUNC_2 (struct ecore_hwfn*,struct ecore_ptt*,size_t*,int,int ,size_t,size_t,int,int ,int,int ,int,char) ;
 size_t FUNC_3 (struct ecore_hwfn*,int ) ;
 int FUNC_4 (struct ecore_hwfn*,int,size_t) ;
 int FUNC_5 (struct ecore_hwfn*,void**) ;
 TYPE_3__** VAR_15 ;
 int * VAR_16 ;
 TYPE_2__* VAR_17 ;

__attribute__((used)) static u32 FUNC_6(struct ecore_hwfn *VAR_18,
           struct ecore_ptt *VAR_19,
           struct dbg_array VAR_20,
           u32 *VAR_21,
           bool VAR_22)
{
 u32 VAR_23, VAR_24 = 0, VAR_25 = 0;
 bool VAR_26 = 1;

 while (VAR_25 < VAR_20.size_in_dwords) {
  const struct dbg_dump_cond_hdr *VAR_27;
  u16 VAR_28;
  u32 VAR_29;
  bool VAR_30;

  VAR_27 = (const struct dbg_dump_cond_hdr *)&VAR_20.ptr[VAR_25++];
  VAR_29 = VAR_27->data_size / VAR_10;


  VAR_30 = FUNC_1(VAR_27->mode.data, VAR_6) > 0;
  if (VAR_30) {
   VAR_28 = FUNC_1(VAR_27->mode.data, VAR_7);
   VAR_26 = FUNC_5(VAR_18, &VAR_28);
  }

  if (!VAR_26) {
   VAR_25 += VAR_27->data_size;
   continue;
  }

  for (VAR_23 = 0; VAR_23 < VAR_29; VAR_23++, VAR_25 += VAR_10) {
   const struct dbg_dump_mem *VAR_31 = (const struct dbg_dump_mem *)&VAR_20.ptr[VAR_25];
   u8 VAR_32 = FUNC_1(VAR_31->dword0, VAR_2);
   bool VAR_33 = 0, VAR_34;
   char VAR_35 = 'a';
   u32 VAR_36, VAR_37;

   if (VAR_32 >= VAR_11) {
    FUNC_0(VAR_18, 1, "Invalid mem_group_id\n");
    return 0;
   }

   if (!FUNC_4(VAR_18, (enum block_id)VAR_27->block_id, VAR_32))
    continue;

   VAR_36 = FUNC_1(VAR_31->dword0, VAR_0);
   VAR_37 = FUNC_1(VAR_31->dword1, VAR_1);
   VAR_34 = FUNC_1(VAR_31->dword1, VAR_3);




   if (VAR_32 == VAR_12) {
    if (VAR_37 % VAR_8) {
     FUNC_0(VAR_18, 1, "Invalid CCFC connection memory size\n");
     return 0;
    }

    VAR_37 = FUNC_3(VAR_18, VAR_4) * (VAR_37 / VAR_8);
   }
   else if (VAR_32 == VAR_13) {
    if (VAR_37 % VAR_9) {
     FUNC_0(VAR_18, 1, "Invalid TCFC task memory size\n");
     return 0;
    }

    VAR_37 = FUNC_3(VAR_18, VAR_5) * (VAR_37 / VAR_9);
   }




   if (VAR_15[VAR_27->block_id]->associated_to_storm) {
    VAR_33 = 1;
    VAR_35 = VAR_17[VAR_15[VAR_27->block_id]->storm_id].letter;
   }


   VAR_24 += FUNC_2(VAR_18, VAR_19, VAR_21 + VAR_24, VAR_22, VAR_14, VAR_36, VAR_37, VAR_34,
    0, 0, VAR_16[VAR_32], VAR_33, VAR_35);
  }
 }

 return VAR_24;
}
