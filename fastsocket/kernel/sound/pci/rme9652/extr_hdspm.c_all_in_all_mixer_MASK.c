
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hdspm {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct hdspm*,int,int,unsigned int) ;
 int FUNC_1 (struct hdspm*,int,int,unsigned int) ;

__attribute__((used)) static void FUNC_2(struct hdspm * VAR_2, int VAR_3)
{
 int VAR_4, VAR_5;
 unsigned int VAR_6;

 if (VAR_3 > VAR_1)
  VAR_6 = VAR_1;
 else if (VAR_3 < 0)
  VAR_6 = 0;
 else
  VAR_6 = VAR_3;

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++)
  for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
   FUNC_0(VAR_2, VAR_4, VAR_5, VAR_6);
   FUNC_1(VAR_2, VAR_4, VAR_5, VAR_6);
  }
}
