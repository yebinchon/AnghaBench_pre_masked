
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct file {int dummy; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ,int ,int ,int *) ;
 int FUNC_1 (struct file*,unsigned long,unsigned long,unsigned long,unsigned long,unsigned long) ;
 int FUNC_2 () ;
 int FUNC_3 (struct file*,unsigned long,int) ;
 scalar_t__ VAR_5 ;

__attribute__((used)) static int FUNC_4(struct file *VAR_6, unsigned long VAR_7,
        unsigned long VAR_8, unsigned long VAR_9,
        unsigned long VAR_10, unsigned long VAR_11)
{
 int VAR_12 = 0;
 u32 VAR_13 = FUNC_2();







 if (VAR_10 < VAR_0) {
  VAR_12 = FUNC_0(VAR_13, VAR_13, VAR_4,
      VAR_3, ((void*)0));
  if (VAR_12)
   return VAR_12;
 }


 VAR_12 = FUNC_1(VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11);
 if (VAR_12 || VAR_11)
  return VAR_12;

 if (VAR_5)
  VAR_8 = VAR_7;

 return FUNC_3(VAR_6, VAR_8,
       (VAR_9 & VAR_2) == VAR_1);
}
