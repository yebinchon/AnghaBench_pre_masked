
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int file_ptr ;



__attribute__((used)) static inline file_ptr
FUNC_0 (file_ptr VAR_0, int VAR_1)
{
  return (VAR_0 + VAR_1 - 1) & ~(VAR_1 - 1);
}
