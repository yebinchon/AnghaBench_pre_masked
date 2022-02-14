
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct accept_filter {int accf_name; } ;
typedef int module_t ;


 int VAR_0 ;



 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct accept_filter*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct accept_filter*,struct accept_filter*,int) ;
 struct accept_filter* FUNC_3 (int,int ,int ) ;
 int VAR_3 ;

int
FUNC_4(module_t VAR_4, int VAR_5, void *VAR_6)
{
 struct accept_filter *VAR_7;
 struct accept_filter *VAR_8 = (struct accept_filter *) VAR_6;
 int VAR_9;

 switch (VAR_5) {
 case 130:
  VAR_7 = FUNC_3(sizeof(*VAR_7), VAR_1, VAR_2);
  FUNC_2(VAR_8, VAR_7, sizeof(*VAR_7));
  VAR_9 = FUNC_0(VAR_7);
  break;

 case 128:






  if (VAR_3 != 0) {
   VAR_9 = FUNC_1(VAR_8->accf_name);
  } else
   VAR_9 = VAR_0;
  break;

 case 129:
  VAR_9 = 0;
  break;

 default:
  VAR_9 = VAR_0;
  break;
 }

 return (VAR_9);
}
