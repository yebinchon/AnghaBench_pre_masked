
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int DBusMessage ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ,char const**,int ) ;
 int * FUNC_1 (int *,int ,char*) ;

DBusMessage * FUNC_2(DBusMessage *VAR_3,
       const char *VAR_4)
{
 DBusMessage *VAR_5;

 VAR_5 = FUNC_1(
  VAR_3, VAR_2,
  "Did not receive correct message arguments.");
 if (VAR_4 != ((void*)0))
  FUNC_0(VAR_5, VAR_1, &VAR_4,
      VAR_0);

 return VAR_5;
}
