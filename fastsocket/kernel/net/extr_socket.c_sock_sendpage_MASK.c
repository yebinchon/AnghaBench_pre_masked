
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {int dummy; } ;
struct page {int dummy; } ;
struct file {int f_flags; struct socket* private_data; } ;
typedef int ssize_t ;
typedef int loff_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct socket*,struct page*,int,size_t,int) ;

ssize_t FUNC_1(struct file *VAR_3, struct page *VAR_4,
        int VAR_5, size_t VAR_6, loff_t *VAR_7, int VAR_8)
{
 struct socket *VAR_9;
 int VAR_10;

 VAR_9 = VAR_3->private_data;

 VAR_10 = !(VAR_3->f_flags & VAR_2) ? 0 : VAR_0;
 if (VAR_8)
  VAR_10 |= VAR_1;

 return FUNC_0(VAR_9, VAR_4, VAR_5, VAR_6, VAR_10);
}
