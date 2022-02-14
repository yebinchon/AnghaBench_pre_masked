
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xz_file_info ;
typedef int lzma_index_iter ;
typedef int file_pair ;
typedef int block_header_info ;


 scalar_t__ FUNC_0 (int *,int const*,int *,int *) ;
 scalar_t__ FUNC_1 (int *,int const*) ;

__attribute__((used)) static bool
FUNC_2(file_pair *VAR_0, const lzma_index_iter *VAR_1,
  block_header_info *VAR_2, xz_file_info *VAR_3)
{
 if (FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3))
  return 1;

 if (FUNC_1(VAR_0, VAR_1))
  return 1;

 return 0;
}
