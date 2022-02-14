
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct open_file {scalar_t__ f_fsdata; } ;
struct file {scalar_t__ f_off; scalar_t__ f_size; } ;


 int FUNC_0 (char*,char*,size_t) ;
 int FUNC_1 (struct open_file*,char**,size_t*) ;

__attribute__((used)) static int
FUNC_2(struct open_file *VAR_0, void *VAR_1, size_t VAR_2, size_t *VAR_3)
{
 struct file *VAR_4 = (struct file *)VAR_0->f_fsdata;
 char *VAR_5, *VAR_6;
 size_t VAR_7, VAR_8;
 int VAR_9 = 0;

 VAR_6 = VAR_1;
 while (VAR_2) {
  if (VAR_4->f_off < 0 || VAR_4->f_off >= VAR_4->f_size)
   break;

  VAR_9 = FUNC_1(VAR_0, &VAR_5, &VAR_7);
  if (VAR_9)
   break;

  VAR_8 = VAR_2 > VAR_7 ? VAR_7 : VAR_2;
  FUNC_0(VAR_5, VAR_6, VAR_8);

  VAR_4->f_off += VAR_8;
  VAR_6 += VAR_8;
  VAR_2 -= VAR_8;
 }
 if (VAR_3)
  *VAR_3 = VAR_2;
 return (VAR_9);
}
