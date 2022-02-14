
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int et_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int ,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_2 (TYPE_1__*,int) ;
 int VAR_7 ;
 int VAR_8 ;
 TYPE_1__* VAR_9 ;
 int VAR_10 ;

__attribute__((used)) static void
FUNC_3(void)
{
 int VAR_11;

 if (VAR_4 && (VAR_9->et_flags & VAR_1) == 0)
  VAR_4 = 0;
 else if (!VAR_4 && (VAR_9->et_flags & VAR_0) == 0)
  VAR_4 = 1;
 VAR_7 = FUNC_1(FUNC_0(VAR_7, 1), 20);
 VAR_11 = VAR_3 * VAR_7;
 while (VAR_11 < (VAR_6 ? VAR_5 : VAR_8))
  VAR_11 += VAR_3;
 VAR_11 = FUNC_2(VAR_9, VAR_11);
 VAR_10 = VAR_2 / VAR_11;
}
