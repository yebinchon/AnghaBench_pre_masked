
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct delta_read_baton {unsigned char const* md5_digest; } ;



__attribute__((used)) static const unsigned char *
FUNC_0(void *VAR_0)
{
  struct delta_read_baton *VAR_1 = VAR_0;
  return VAR_1->md5_digest;
}
