
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pevent {scalar_t__ host_bigendian; scalar_t__ file_bigendian; } ;



__attribute__((used)) static inline unsigned int
FUNC_0(struct pevent *VAR_0, unsigned int VAR_1)
{
 unsigned int VAR_2;

 if (VAR_0->host_bigendian == VAR_0->file_bigendian)
  return VAR_1;

 VAR_2 = ((VAR_1 & 0xffULL) << 24) |
  ((VAR_1 & (0xffULL << 8)) << 8) |
  ((VAR_1 & (0xffULL << 16)) >> 8) |
  ((VAR_1 & (0xffULL << 24)) >> 24);

 return VAR_2;
}
