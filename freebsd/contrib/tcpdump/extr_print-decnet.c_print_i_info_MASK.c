
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int netdissect_options ;


 int VAR_0 ;



 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static void
FUNC_1(netdissect_options *VAR_4,
             int VAR_5)
{
 int VAR_6 = VAR_5 & VAR_2;
 switch (VAR_6) {
 case 0: FUNC_0((VAR_4, "reserved-ntype? ")); break;
 case 128: FUNC_0((VAR_4, "l2rout ")); break;
 case 129: FUNC_0((VAR_4, "l1rout ")); break;
 case 130: FUNC_0((VAR_4, "endnode ")); break;
 }
 if (VAR_5 & VAR_3)
     FUNC_0((VAR_4, "verif "));
 if (VAR_5 & VAR_1)
     FUNC_0((VAR_4, "nomcast "));
 if (VAR_5 & VAR_0)
     FUNC_0((VAR_4, "blo "));
}
