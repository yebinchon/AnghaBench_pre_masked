
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {unsigned long recsrc; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 TYPE_1__ VAR_8 ;
 scalar_t__ FUNC_1 (TYPE_1__*,int ,int ,int ) ;
 scalar_t__ FUNC_2 (int ,int *) ;

__attribute__((used)) static unsigned long FUNC_3(unsigned long VAR_9)
{
 if (VAR_8.recsrc == VAR_9)
  return VAR_8.recsrc;




 else
  VAR_8.recsrc ^= VAR_9;


 if (VAR_8.recsrc & VAR_6) {
  if (FUNC_1(&VAR_8, 0, 0, VAR_1) == 0)
   FUNC_0(&VAR_8, VAR_4);
 }
 else if (VAR_8.recsrc & VAR_7) {
  if (FUNC_1(&VAR_8, 0, 0, VAR_3) == 0)
   FUNC_0(&VAR_8, VAR_4);
 }
 else if ((VAR_8.recsrc & VAR_5) && FUNC_2(VAR_0, &VAR_8.flags)) {
  if (FUNC_1(&VAR_8, 0, 0, VAR_2) == 0)
         FUNC_0(&VAR_8, VAR_4);
 }
 else {




  VAR_8.recsrc = VAR_6;
  if (FUNC_1(&VAR_8, 0, 0, VAR_1) == 0)
   FUNC_0(&VAR_8, VAR_4);

 }


 return VAR_8.recsrc;
}
