
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef scalar_t__ uint64_t ;
struct pt_section {scalar_t__ offset; scalar_t__ size; int memsize; int read; int unmap; struct pt_sec_posix_mapping* mapping; } ;
struct pt_sec_posix_mapping {int * end; int * begin; scalar_t__ size; int * base; } ;
typedef int off_t ;


 scalar_t__ VAR_0 ;
 int * VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 struct pt_sec_posix_mapping* FUNC_0 (int) ;
 int * FUNC_1 (int *,size_t,int ,int ,int,int ) ;
 int FUNC_2 (int *,size_t) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 long FUNC_3 (int ) ;

int FUNC_4(struct pt_section *VAR_12, int VAR_13)
{
 struct pt_sec_posix_mapping *VAR_14;
 uint64_t VAR_15, VAR_16, VAR_17;
 uint8_t *VAR_18;
 long VAR_19;
 int VAR_20;

 if (!VAR_12)
  return -VAR_10;

 VAR_15 = VAR_12->offset;
 VAR_16 = VAR_12->size;

 VAR_19 = FUNC_3(VAR_5);
 if (VAR_19 < 0)
  return -VAR_9;

 VAR_17 = VAR_15 % (uint64_t) VAR_19;

 VAR_15 -= VAR_17;
 VAR_16 += VAR_17;




 if (VAR_16 < VAR_12->size)
  return -VAR_10;

 if (VAR_4 < VAR_16)
  return -VAR_11;

 if (VAR_0 < VAR_15)
  return -VAR_11;

 VAR_18 = FUNC_1(((void*)0), (size_t) VAR_16, VAR_3, VAR_2, VAR_13,
      (off_t) VAR_15);
 if (VAR_18 == VAR_1)
  return -VAR_11;

 VAR_14 = FUNC_0(sizeof(*VAR_14));
 if (!VAR_14) {
  VAR_20 = -VAR_11;
  goto out_map;
 }

 VAR_14->base = VAR_18;
 VAR_14->size = VAR_16;
 VAR_14->begin = VAR_18 + VAR_17;
 VAR_14->end = VAR_18 + VAR_16;

 VAR_12->mapping = VAR_14;
 VAR_12->unmap = VAR_8;
 VAR_12->read = VAR_7;
 VAR_12->memsize = VAR_6;

 return 0;

out_map:
 FUNC_2(VAR_18, (size_t) VAR_16);
 return VAR_20;
}
