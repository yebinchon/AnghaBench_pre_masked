
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mt_status_data {int entries; } ;
typedef int * XML_Parser ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,char*,int ,int) ;
 int * FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_1 ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,int ,int ) ;
 int FUNC_6 (int *,struct mt_status_data*) ;
 int FUNC_7 (struct mt_status_data*,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_8 (char*) ;

int
FUNC_9(char *VAR_6, struct mt_status_data *VAR_7)
{
 XML_Parser VAR_8;
 int VAR_9;

 FUNC_7(VAR_7, sizeof(*VAR_7));
 FUNC_0(&VAR_7->entries);

 VAR_8 = FUNC_2(((void*)0));
 if (VAR_8 == ((void*)0)) {
  VAR_2 = VAR_0;
  return (VAR_1);
 }

 FUNC_6(VAR_8, VAR_7);
 FUNC_5(VAR_8, VAR_5, VAR_4);
 FUNC_4(VAR_8, VAR_3);

 VAR_9 = FUNC_1(VAR_8, VAR_6, FUNC_8(VAR_6), 1);
 FUNC_3(VAR_8);
 return (VAR_9);
}
