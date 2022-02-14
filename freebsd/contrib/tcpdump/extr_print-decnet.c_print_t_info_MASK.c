
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int netdissect_options ;


 int FUNC_0 (int *) ;
 int VAR_0 ;



 int VAR_1 ;

__attribute__((used)) static void
FUNC_1(netdissect_options *VAR_2,
             int VAR_3)
{
 int VAR_4 = VAR_3 & 3;
 switch (VAR_4) {
 case 0: FUNC_0((VAR_2, "reserved-ntype? ")); break;
 case 128: FUNC_0((VAR_2, "l2rout ")); break;
 case 129: FUNC_0((VAR_2, "l1rout ")); break;
 case 130: FUNC_0((VAR_2, "endnode ")); break;
 }
 if (VAR_3 & VAR_1)
     FUNC_0((VAR_2, "verif "));
 if (VAR_3 & VAR_0)
     FUNC_0((VAR_2, "blo "));
}
