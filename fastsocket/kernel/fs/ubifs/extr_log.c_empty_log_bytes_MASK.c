
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubifs_info {long long leb_size; long long lhead_offs; long long log_bytes; scalar_t__ ltail_lnum; scalar_t__ lhead_lnum; } ;



__attribute__((used)) static inline long long FUNC_0(const struct ubifs_info *VAR_0)
{
 long long VAR_1, VAR_2;

 VAR_1 = (long long)VAR_0->lhead_lnum * VAR_0->leb_size + VAR_0->lhead_offs;
 VAR_2 = (long long)VAR_0->ltail_lnum * VAR_0->leb_size;

 if (VAR_1 >= VAR_2)
  return VAR_0->log_bytes - VAR_1 + VAR_2;
 else
  return VAR_2 - VAR_1;
}
