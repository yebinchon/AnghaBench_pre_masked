
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct file {int dummy; } ;
struct address_space {TYPE_1__* a_ops; } ;
typedef unsigned long pgoff_t ;
struct TYPE_2__ {int readpages; int readpage; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct address_space*,struct file*,unsigned long,unsigned long,int ) ;
 unsigned long FUNC_1 (unsigned long) ;
 scalar_t__ FUNC_2 (int) ;

int FUNC_3(struct address_space *VAR_2, struct file *VAR_3,
  pgoff_t VAR_4, unsigned long VAR_5)
{
 int VAR_6 = 0;

 if (FUNC_2(!VAR_2->a_ops->readpage && !VAR_2->a_ops->readpages))
  return -VAR_0;

 VAR_5 = FUNC_1(VAR_5);
 while (VAR_5) {
  int VAR_7;

  unsigned long VAR_8 = (2 * 1024 * 1024) / VAR_1;

  if (VAR_8 > VAR_5)
   VAR_8 = VAR_5;
  VAR_7 = FUNC_0(VAR_2, VAR_3,
      VAR_4, VAR_8, 0);
  if (VAR_7 < 0) {
   VAR_6 = VAR_7;
   break;
  }
  VAR_6 += VAR_7;
  VAR_4 += VAR_8;
  VAR_5 -= VAR_8;
 }
 return VAR_6;
}
