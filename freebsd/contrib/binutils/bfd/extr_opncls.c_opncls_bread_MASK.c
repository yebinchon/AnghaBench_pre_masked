
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct opncls {scalar_t__ (* pread ) (struct bfd*,int ,void*,scalar_t__,int ) ;int where; int stream; } ;
struct bfd {struct opncls* iostream; } ;
typedef scalar_t__ file_ptr ;


 scalar_t__ FUNC_0 (struct bfd*,int ,void*,scalar_t__,int ) ;

__attribute__((used)) static file_ptr
FUNC_1 (struct bfd *VAR_0, void *VAR_1, file_ptr VAR_2)
{
  struct opncls *VAR_3 = VAR_0->iostream;
  file_ptr VAR_4 = (VAR_3->pread) (VAR_0, VAR_3->stream, VAR_1, VAR_2, VAR_3->where);
  if (VAR_4 < 0)
    return VAR_4;
  VAR_3->where += VAR_4;
  return VAR_4;
}
