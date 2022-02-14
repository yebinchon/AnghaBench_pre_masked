
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct peer {int flash; scalar_t__ status; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static int
FUNC_0(
 struct peer *VAR_6
 )
{
 int VAR_7;





 VAR_7 = 0;
 if (!(VAR_6->flash & VAR_2))
  VAR_7++;
 if (!(VAR_6->flash & VAR_5))
  VAR_7++;
 if (!(VAR_6->flash & VAR_4))
  VAR_7++;
 if (!(VAR_6->flash & VAR_3))
  VAR_7++;
 if (VAR_6->status >= VAR_1)
  VAR_7++;
 if (VAR_6->status != VAR_0)
  VAR_7++;
 return (VAR_7);
}
