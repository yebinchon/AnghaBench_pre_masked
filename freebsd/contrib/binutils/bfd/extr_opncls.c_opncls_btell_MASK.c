
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct opncls {int where; } ;
struct bfd {struct opncls* iostream; } ;
typedef int file_ptr ;



__attribute__((used)) static file_ptr
FUNC_0 (struct bfd *VAR_0)
{
  struct opncls *VAR_1 = VAR_0->iostream;
  return VAR_1->where;
}
