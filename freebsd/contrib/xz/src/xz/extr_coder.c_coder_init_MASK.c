
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


typedef int uint32_t ;
typedef scalar_t__ lzma_ret ;
struct TYPE_17__ {int src_name; } ;
typedef TYPE_1__ file_pair ;
typedef enum format_type { ____Placeholder_format_type } format_type ;
typedef enum coder_init_ret { ____Placeholder_coder_init_ret } coder_init_ret ;
struct TYPE_19__ {int options; } ;
struct TYPE_18__ {scalar_t__ avail_out; int * next_out; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;




 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (int ) ;
 int VAR_14 ;
 TYPE_5__* VAR_15 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 scalar_t__ FUNC_5 (TYPE_2__*,int ) ;
 scalar_t__ FUNC_6 (TYPE_2__*,int ) ;
 scalar_t__ FUNC_7 (TYPE_2__*,int ) ;
 int FUNC_8 (TYPE_2__*) ;
 scalar_t__ FUNC_9 (TYPE_2__*,TYPE_5__*) ;
 scalar_t__ FUNC_10 (TYPE_2__*,TYPE_5__*) ;
 scalar_t__ FUNC_11 (TYPE_2__*,int ,int ) ;
 scalar_t__ FUNC_12 (TYPE_2__*,TYPE_5__*,int ) ;
 scalar_t__ FUNC_13 (TYPE_2__*,int *) ;
 int FUNC_14 (char*,int ,int ) ;
 int FUNC_15 (int ,int ) ;
 int FUNC_16 (scalar_t__) ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 TYPE_2__ VAR_23 ;

__attribute__((used)) static enum coder_init_ret
FUNC_17(file_pair *VAR_24)
{
 lzma_ret VAR_25 = VAR_8;

 if (VAR_20 == VAR_11) {
 } else {
 }

 if (VAR_25 != VAR_7) {
  FUNC_14("%s: %s", VAR_24->src_name, FUNC_16(VAR_25));
  if (VAR_25 == VAR_6)
   FUNC_15(VAR_13, FUNC_8(&VAR_23));

  return VAR_0;
 }

 return VAR_1;
}
