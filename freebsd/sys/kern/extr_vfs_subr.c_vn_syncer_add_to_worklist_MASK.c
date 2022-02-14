
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bufobj {int bo_flag; } ;


 int FUNC_0 (struct bufobj*) ;
 int VAR_0 ;
 int FUNC_1 (int *,struct bufobj*,int ) ;
 int FUNC_2 (struct bufobj*,int ) ;
 int VAR_1 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int * VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static void
FUNC_5(struct bufobj *VAR_8, int VAR_9)
{
 int VAR_10;

 FUNC_0(VAR_8);

 FUNC_3(&VAR_2);
 if (VAR_8->bo_flag & VAR_0)
  FUNC_2(VAR_8, VAR_1);
 else {
  VAR_8->bo_flag |= VAR_0;
  VAR_7++;
 }

 if (VAR_9 > VAR_5 - 2)
  VAR_9 = VAR_5 - 2;
 VAR_10 = (VAR_3 + VAR_9) & VAR_4;

 FUNC_1(&VAR_6[VAR_10], VAR_8, VAR_1);
 FUNC_4(&VAR_2);
}
