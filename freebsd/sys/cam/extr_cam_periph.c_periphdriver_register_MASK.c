
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct periph_driver {int flags; int (* init ) () ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct periph_driver**,struct periph_driver**,int) ;
 int FUNC_1 (struct periph_driver**,int ) ;
 int VAR_3 ;
 struct periph_driver** FUNC_2 (int,int ,int ) ;
 int VAR_4 ;
 struct periph_driver** VAR_5 ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 () ;

void
FUNC_6(void *VAR_6)
{
 struct periph_driver *VAR_7 = (struct periph_driver *)VAR_6;
 struct periph_driver **VAR_8, **VAR_9;
 int VAR_10;

again:
 VAR_10 = VAR_4 + 2;
 VAR_8 = FUNC_2(sizeof(*VAR_8) * VAR_10, VAR_1,
       VAR_2);
 FUNC_4();
 if (VAR_10 != VAR_4 + 2) {



  FUNC_5();
  FUNC_1(VAR_8, VAR_1);
  goto again;
 }
 if (VAR_5)
  FUNC_0(VAR_5, VAR_8,
        sizeof(*VAR_8) * VAR_4);
 VAR_8[VAR_4] = VAR_7;
 VAR_8[VAR_4 + 1] = ((void*)0);
 VAR_9 = VAR_5;
 VAR_5 = VAR_8;
 VAR_4++;
 FUNC_5();
 if (VAR_9)
  FUNC_1(VAR_9, VAR_1);

 if (((VAR_7->flags & VAR_0) != 0 && VAR_3 > 0) ||
     VAR_3 > 1)
  (*VAR_7->init)();
}
