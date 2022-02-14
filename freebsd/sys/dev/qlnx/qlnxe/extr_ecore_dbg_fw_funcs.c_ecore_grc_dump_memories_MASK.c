
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef size_t u32 ;
struct ecore_ptt {int dummy; } ;
struct ecore_hwfn {int dummy; } ;
struct dbg_dump_split_hdr {int hdr; } ;
struct dbg_array {size_t size_in_dwords; int * ptr; } ;
struct TYPE_2__ {size_t size_in_dwords; int * ptr; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ecore_hwfn*,int,char*) ;
 void* FUNC_1 (int ,int ) ;

 size_t FUNC_2 (struct ecore_hwfn*,struct ecore_ptt*,struct dbg_array,size_t*,int) ;
 TYPE_1__* VAR_3 ;

__attribute__((used)) static u32 FUNC_3(struct ecore_hwfn *VAR_4,
           struct ecore_ptt *VAR_5,
           u32 *VAR_6,
           bool VAR_7)
{
 u32 VAR_8 = 0, VAR_9 = 0;

 while (VAR_9 < VAR_3[VAR_0].size_in_dwords) {
  const struct dbg_dump_split_hdr *VAR_10;
  struct dbg_array VAR_11;
  u32 VAR_12;
  u8 VAR_13;

  VAR_10 = (const struct dbg_dump_split_hdr *)&VAR_3[VAR_0].ptr[VAR_9++];
  VAR_13 = FUNC_1(VAR_10->hdr, VAR_2);
  VAR_12 = FUNC_1(VAR_10->hdr, VAR_1);
  VAR_11.ptr = &VAR_3[VAR_0].ptr[VAR_9];
  VAR_11.size_in_dwords = VAR_12;

  switch (VAR_13) {
  case 128:
   VAR_8 += FUNC_2(VAR_4, VAR_5, VAR_11, VAR_6 + VAR_8, VAR_7);
   break;

  default:
   FUNC_0(VAR_4, 1, "Dumping split memories is currently not supported\n");
   break;
  }

  VAR_9 += VAR_12;
 }

 return VAR_8;
}
