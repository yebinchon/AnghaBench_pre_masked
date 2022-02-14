
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct if_clonereq {scalar_t__ ifcr_count; int ifcr_total; char* ifcr_buffer; } ;
struct if_clone {int ifc_name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 struct if_clone* FUNC_2 (int *) ;
 struct if_clone* FUNC_3 (struct if_clone*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (char*,char*,int) ;
 int FUNC_5 (char*,int ) ;
 int VAR_7 ;
 char* FUNC_6 (int,int ,int) ;
 int FUNC_7 (char*,int ,int) ;

int
FUNC_8(struct if_clonereq *VAR_8)
{
 char *VAR_9, *VAR_10, *VAR_11 = ((void*)0);
 struct if_clone *VAR_12;
 int VAR_13, VAR_14, VAR_15 = 0;

 if (VAR_8->ifcr_count < 0)
  return (VAR_0);

 FUNC_0();
 VAR_13 = (VAR_6 < VAR_8->ifcr_count) ?
     VAR_6 : VAR_8->ifcr_count;
 FUNC_1();

 VAR_11 = FUNC_6(VAR_1*VAR_13, VAR_2, VAR_3 | VAR_4);

 FUNC_0();

 VAR_8->ifcr_total = VAR_6;
 if ((VAR_10 = VAR_8->ifcr_buffer) == ((void*)0)) {

  goto done;
 }
 VAR_14 = (VAR_6 < VAR_13) ?
     VAR_6 : VAR_13;

 for (VAR_12 = FUNC_2(&VAR_5), VAR_9 = VAR_11;
     VAR_12 != ((void*)0) && VAR_14 != 0;
     VAR_12 = FUNC_3(VAR_12, VAR_7), VAR_14--, VAR_9 += VAR_1) {
  FUNC_7(VAR_9, VAR_12->ifc_name, VAR_1);
 }

done:
 FUNC_1();
 if (VAR_15 == 0 && VAR_10 != ((void*)0))
  VAR_15 = FUNC_4(VAR_11, VAR_10, VAR_13*VAR_1);
 if (VAR_11 != ((void*)0))
  FUNC_5(VAR_11, VAR_2);
 return (VAR_15);
}
