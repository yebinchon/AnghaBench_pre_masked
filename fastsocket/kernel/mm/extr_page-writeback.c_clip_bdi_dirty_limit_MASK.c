
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct backing_dev_info {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (struct backing_dev_info*,int ) ;
 unsigned long FUNC_1 (int ) ;
 unsigned long FUNC_2 (unsigned long,unsigned long) ;

__attribute__((used)) static void FUNC_3(struct backing_dev_info *VAR_6,
  unsigned long VAR_7, unsigned long *VAR_8)
{
 unsigned long VAR_9;

 VAR_9 = FUNC_1(VAR_2) +
   FUNC_1(VAR_4) +
   FUNC_1(VAR_3) +
   FUNC_1(VAR_5);

 if (VAR_9 < VAR_7)
  VAR_9 = VAR_7 - VAR_9;
 else
  VAR_9 = 0;

 VAR_9 += FUNC_0(VAR_6, VAR_0) +
  FUNC_0(VAR_6, VAR_1);

 *VAR_8 = FUNC_2(*VAR_8, VAR_9);
}
