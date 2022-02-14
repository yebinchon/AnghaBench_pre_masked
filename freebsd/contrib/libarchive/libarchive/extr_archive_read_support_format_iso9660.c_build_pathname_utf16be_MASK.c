
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file_info {scalar_t__ utf16be_bytes; int utf16be_name; struct file_info* parent; } ;


 int FUNC_0 (unsigned char*,int ,size_t) ;

__attribute__((used)) static int
FUNC_1(unsigned char *VAR_0, size_t VAR_1, size_t *VAR_2,
    struct file_info *VAR_3)
{
 if (VAR_3->parent != ((void*)0) && VAR_3->parent->utf16be_bytes > 0) {
  if (FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3->parent) != 0)
   return (-1);
  VAR_0[*VAR_2] = 0;
  VAR_0[*VAR_2 + 1] = '/';
  *VAR_2 += 2;
 }
 if (VAR_3->utf16be_bytes == 0) {
  if (*VAR_2 + 2 > VAR_1)
   return (-1);
  VAR_0[*VAR_2] = 0;
  VAR_0[*VAR_2 + 1] = '.';
  *VAR_2 += 2;
 } else {
  if (*VAR_2 + VAR_3->utf16be_bytes > VAR_1)
   return (-1);
  FUNC_0(VAR_0 + *VAR_2, VAR_3->utf16be_name, VAR_3->utf16be_bytes);
  *VAR_2 += VAR_3->utf16be_bytes;
 }
 return (0);
}
