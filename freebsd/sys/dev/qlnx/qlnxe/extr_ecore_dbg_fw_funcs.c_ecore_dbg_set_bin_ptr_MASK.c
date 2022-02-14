
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
typedef int u32 ;
struct bin_buffer_hdr {int offset; int length; } ;
typedef enum dbg_status { ____Placeholder_dbg_status } dbg_status ;
struct TYPE_2__ {int size_in_dwords; int * ptr; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 size_t VAR_1 ;
 TYPE_1__* VAR_2 ;

enum dbg_status FUNC_1(const u8 * const VAR_3)
{
 struct bin_buffer_hdr *VAR_4 = (struct bin_buffer_hdr *)VAR_3;
 u8 VAR_5;


 for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++) {
  VAR_2[VAR_5].ptr = (u32 *)(VAR_3 + VAR_4[VAR_5].offset);
  VAR_2[VAR_5].size_in_dwords = FUNC_0(VAR_4[VAR_5].length);
 }

 return VAR_0;
}
