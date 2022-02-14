
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef scalar_t__ uint64_t ;
typedef scalar_t__ uint32_t ;
struct pt_section {scalar_t__ offset; scalar_t__ size; int memsize; int read; int unmap; struct pt_sec_windows_mapping* mapping; } ;
struct pt_sec_windows_mapping {int fd; int * end; int * begin; int * base; scalar_t__ mh; } ;
typedef scalar_t__ HANDLE ;
typedef scalar_t__ DWORD ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__,int *,int ,int ,int ,int *) ;
 int VAR_0 ;
 int * FUNC_2 (scalar_t__,int ,scalar_t__,scalar_t__,scalar_t__) ;
 int VAR_1 ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int) ;
 scalar_t__ FUNC_5 () ;
 struct pt_sec_windows_mapping* FUNC_6 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

int FUNC_7(struct pt_section *VAR_8, int VAR_9)
{
 struct pt_sec_windows_mapping *VAR_10;
 uint64_t VAR_11, VAR_12, VAR_13;
 HANDLE VAR_14, VAR_15;
 DWORD VAR_16;
 uint8_t *VAR_17;
 int VAR_18;

 if (!VAR_8)
  return -VAR_6;

 VAR_11 = VAR_8->offset;
 VAR_12 = VAR_8->size;

 VAR_13 = VAR_11 % FUNC_5();

 VAR_11 -= VAR_13;
 VAR_12 += VAR_13;




 if (VAR_12 < VAR_8->size)
  return -VAR_6;

 VAR_16 = (DWORD) VAR_12;
 if ((uint64_t) VAR_16 != VAR_12)
  return -VAR_6;

 VAR_14 = (HANDLE) FUNC_4(VAR_9);

 VAR_15 = FUNC_1(VAR_14, ((void*)0), VAR_1, 0, 0, ((void*)0));
 if (!VAR_15)
  return -VAR_5;

 VAR_17 = FUNC_2(VAR_15, VAR_0, (DWORD) (VAR_11 >> 32),
        (DWORD) (uint32_t) VAR_11, VAR_16);
 if (!VAR_17) {
  VAR_18 = -VAR_5;
  goto out_mh;
 }

 VAR_10 = FUNC_6(sizeof(*VAR_10));
 if (!VAR_10) {
  VAR_18 = -VAR_7;
  goto out_map;
 }

 VAR_10->fd = VAR_9;
 VAR_10->mh = VAR_15;
 VAR_10->base = VAR_17;
 VAR_10->begin = VAR_17 + VAR_13;
 VAR_10->end = VAR_17 + VAR_12;

 VAR_8->mapping = VAR_10;
 VAR_8->unmap = VAR_4;
 VAR_8->read = VAR_3;
 VAR_8->memsize = VAR_2;

 return 0;

out_map:
 FUNC_3(VAR_17);

out_mh:
 FUNC_0(VAR_15);
 return VAR_18;
}
