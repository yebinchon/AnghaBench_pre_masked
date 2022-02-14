
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int flags; } ;
typedef int gfp_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 struct task_struct* VAR_10 ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (struct task_struct*) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;

__attribute__((used)) static inline int
FUNC_6(gfp_t VAR_11)
{
 struct task_struct *VAR_12 = VAR_10;
 int VAR_13 = VAR_4 | VAR_0;
 const gfp_t VAR_14 = VAR_11 & VAR_9;


 FUNC_0(VAR_7 != VAR_2);







 VAR_13 |= (VAR_11 & VAR_7);

 if (!VAR_14) {




  if (!(VAR_11 & VAR_8))
   VAR_13 |= VAR_1;




  VAR_13 &= ~VAR_0;
 } else if (FUNC_5(FUNC_3(VAR_12)) && !FUNC_1())
  VAR_13 |= VAR_1;

 if (FUNC_2(!(VAR_11 & VAR_8))) {
  if (!FUNC_1() &&
      ((VAR_12->flags & VAR_5) ||
       FUNC_5(FUNC_4(VAR_6))))
   VAR_13 |= VAR_3;
 }

 return VAR_13;
}
