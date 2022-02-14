
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
struct pt_section {scalar_t__ offset; scalar_t__ size; int memsize; int read; int unmap; struct pt_sec_file_mapping* mapping; } ;
struct pt_sec_file_mapping {long begin; long end; int * file; } ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (struct pt_sec_file_mapping*) ;
 int FUNC_1 (struct pt_sec_file_mapping*) ;
 int FUNC_2 (int *,int ,int ) ;
 long FUNC_3 (int *) ;
 struct pt_sec_file_mapping* FUNC_4 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

int FUNC_5(struct pt_section *VAR_7, FILE *VAR_8)
{
 struct pt_sec_file_mapping *VAR_9;
 uint64_t VAR_10, VAR_11;
 long VAR_12, VAR_13, VAR_14;
 int VAR_15;

 if (!VAR_7)
  return -VAR_5;

 VAR_9 = VAR_7->mapping;
 if (VAR_9)
  return -VAR_5;

 VAR_10 = VAR_7->offset;
 VAR_11 = VAR_7->size;

 VAR_12 = (long) VAR_10;
 VAR_13 = VAR_12 + (long) VAR_11;


 if ((uint64_t) VAR_12 != VAR_10)
  return -VAR_4;

 if ((uint64_t) VAR_13 != (VAR_10 + VAR_11))
  return -VAR_4;

 if (VAR_13 < VAR_12)
  return -VAR_4;


 VAR_15 = FUNC_2(VAR_8, 0, VAR_0);
 if (VAR_15)
  return -VAR_4;

 VAR_14 = FUNC_3(VAR_8);
 if (VAR_14 < 0)
  return -VAR_4;

 if (VAR_14 < VAR_13)
  return -VAR_4;

 VAR_9 = FUNC_4(sizeof(*VAR_9));
 if (!VAR_9)
  return -VAR_6;

 VAR_15 = FUNC_0(VAR_9);
 if (VAR_15 < 0)
  goto out_mem;

 VAR_9->file = VAR_8;
 VAR_9->begin = VAR_12;
 VAR_9->end = VAR_13;

 VAR_7->mapping = VAR_9;
 VAR_7->unmap = VAR_3;
 VAR_7->read = VAR_2;
 VAR_7->memsize = VAR_1;

 return 0;

out_mem:
 FUNC_1(VAR_9);
 return VAR_15;
}
