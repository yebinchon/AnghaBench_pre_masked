
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef scalar_t__ uint64_t ;
struct pt_mapped_section {int dummy; } ;
struct TYPE_6__ {int displacement; int is_direct; } ;
struct TYPE_7__ {TYPE_1__ branch; } ;
struct pt_insn_ext {TYPE_2__ variant; } ;
struct pt_insn {scalar_t__ mode; scalar_t__ size; int iclass; scalar_t__ ip; } ;
struct TYPE_8__ {int end_on_jump; } ;
struct TYPE_9__ {TYPE_3__ block; } ;
struct TYPE_10__ {TYPE_4__ variant; } ;
struct pt_block_decoder {TYPE_5__ flags; scalar_t__ ip; } ;
struct pt_block_cache {int dummy; } ;
struct pt_block {scalar_t__ truncated; } ;
struct pt_bcache_entry {int ninsn; scalar_t__ mode; scalar_t__ isize; scalar_t__ displacement; void* qualifier; } ;
typedef scalar_t__ int64_t ;
typedef scalar_t__ int32_t ;
typedef int bce ;


 int VAR_0 ;
 int FUNC_0 (struct pt_bcache_entry*,int ,int) ;
 int FUNC_1 (struct pt_block_cache*,scalar_t__,struct pt_bcache_entry) ;
 int FUNC_2 (struct pt_bcache_entry*,struct pt_block_cache*,scalar_t__) ;
 scalar_t__ FUNC_3 (struct pt_bcache_entry) ;
 int FUNC_4 (struct pt_bcache_entry) ;
 int FUNC_5 (struct pt_block_cache*,scalar_t__,scalar_t__) ;
 int FUNC_6 (struct pt_block_cache*,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_7 (struct pt_mapped_section const*,scalar_t__) ;
 int FUNC_8 (struct pt_block_decoder*,struct pt_block*,struct pt_insn*,struct pt_insn_ext*) ;
 int FUNC_9 (struct pt_block_decoder*,struct pt_insn*,struct pt_insn_ext*) ;
 int FUNC_10 (scalar_t__*,struct pt_insn*,struct pt_insn_ext*) ;
 scalar_t__ FUNC_11 (struct pt_mapped_section const*,scalar_t__) ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
__attribute__((used)) static int
FUNC_12(struct pt_block_decoder *VAR_8,
       struct pt_block *VAR_9,
       struct pt_block_cache *VAR_10,
       const struct pt_mapped_section *VAR_11,
       size_t VAR_12)
{
 struct pt_bcache_entry VAR_13;
 struct pt_insn_ext VAR_14;
 struct pt_insn VAR_15;
 uint64_t VAR_16, VAR_17, VAR_18, VAR_19;
 int64_t VAR_20;
 int VAR_21;

 if (!VAR_8 || !VAR_12)
  return -VAR_7;






 VAR_21 = FUNC_8(VAR_8, VAR_9, &VAR_15, &VAR_14);
 if (VAR_21 <= 0)
  return VAR_21;

 VAR_18 = FUNC_11(VAR_11, VAR_15.ip);





 VAR_21 = FUNC_10(&VAR_8->ip, &VAR_15, &VAR_14);
 if (VAR_21 < 0) {
  if (VAR_21 != -VAR_6)
   return VAR_21;

  FUNC_0(&VAR_13, 0, sizeof(VAR_13));
  VAR_13.ninsn = 1;
  VAR_13.mode = VAR_15.mode;
  VAR_13.isize = VAR_15.size;


  if ((uint8_t) VAR_13.isize != VAR_15.size)
   VAR_13.isize = 0;

  switch (VAR_15.iclass) {
  case 129:
  case 135:
  case 130:
   return -VAR_7;

  case 131:

   if (VAR_14.variant.branch.is_direct)
    return -VAR_7;

   VAR_13.qualifier = VAR_4;
   break;

  case 137:

   if (VAR_14.variant.branch.is_direct)
    return -VAR_7;

   VAR_13.qualifier = VAR_3;
   break;

  case 128:
   VAR_13.qualifier = VAR_5;
   break;

  case 136:
   VAR_13.qualifier = VAR_1;
   break;

  case 134:
  case 132:
  case 133:
   VAR_13.qualifier = VAR_4;
   break;
  }
  if (VAR_9->truncated)
   VAR_13.qualifier = VAR_2;

  VAR_21 = FUNC_1(VAR_10, VAR_18, VAR_13);
  if (VAR_21 < 0)
   return VAR_21;

  return FUNC_9(VAR_8, &VAR_15, &VAR_14);
 }


 VAR_16 = VAR_8->ip;
 VAR_19 = FUNC_11(VAR_11, VAR_16);
 switch (VAR_15.iclass) {
 case 137:
  return FUNC_5(VAR_10, VAR_18, VAR_15.mode);

 case 131:



  if (!VAR_14.variant.branch.is_direct)
   return -VAR_7;

  if (VAR_14.variant.branch.displacement < 0 ||
      VAR_8->flags.variant.block.end_on_jump)
   return FUNC_5(VAR_10, VAR_18, VAR_15.mode);

  VAR_0;
 default:
  if (!FUNC_7(VAR_11, VAR_16) || VAR_9->truncated)
   return FUNC_5(VAR_10, VAR_18, VAR_15.mode);

  break;
 }




 VAR_21 = FUNC_2(&VAR_13, VAR_10, VAR_19);
 if (VAR_21 < 0)
  return VAR_21;






 if (!FUNC_4(VAR_13)) {







  VAR_12 -= 1;
  if (!VAR_12)
   return FUNC_6(VAR_10, VAR_18, VAR_19,
           VAR_15.mode);

  VAR_21 = FUNC_12(VAR_8, VAR_9,
           VAR_10, VAR_11,
           VAR_12);
  if (VAR_21 < 0)
   return VAR_21;


  VAR_21 = FUNC_2(&VAR_13, VAR_10, VAR_19);
  if (VAR_21 < 0)
   return VAR_21;





  if (!FUNC_4(VAR_13))
   return 0;
 }





 if (FUNC_3(VAR_13) != VAR_15.mode)
  return -VAR_7;


 VAR_17 = VAR_16 + (uint64_t) (int64_t) VAR_13.displacement;
 VAR_20 = (int64_t) (VAR_17 - VAR_15.ip);
 if (!FUNC_7(VAR_11, VAR_17))
  return 0;






 VAR_13.ninsn += 1;
 VAR_13.displacement = (int32_t) VAR_20;






 if (!VAR_13.ninsn || ((int64_t) VAR_13.displacement != VAR_20))
  return FUNC_6(VAR_10, VAR_18, VAR_19, VAR_15.mode);
 return FUNC_1(VAR_10, VAR_18, VAR_13);
}
