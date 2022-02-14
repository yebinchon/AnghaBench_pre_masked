
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct _region {int dummy; } ;
struct _citrus_esdb {int dummy; } ;
typedef int path ;
typedef int buf2 ;
typedef int buf1 ;


 int VAR_0 ;
 char* VAR_1 ;
 char* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 char* VAR_5 ;
 char* FUNC_0 (char*,char const*,char*,int,int ) ;
 char* FUNC_1 (char*,char const*,char*,int,int ) ;
 int FUNC_2 (struct _region*,char*) ;
 int FUNC_3 (struct _region*) ;
 int FUNC_4 (struct _citrus_esdb*,struct _region*) ;
 int FUNC_5 (char*,int,char*,char*,char const*) ;

int
FUNC_6(struct _citrus_esdb *VAR_6, const char *VAR_7)
{
 struct _region VAR_8;
 const char *VAR_9, *VAR_10;
 char VAR_11[VAR_3], VAR_12[VAR_3], VAR_13[VAR_3];
 int VAR_14;

 FUNC_5(VAR_13, sizeof(VAR_13), "%s/%s", VAR_5, VAR_1);
 VAR_9 = FUNC_0(VAR_13, VAR_7, VAR_11, sizeof(VAR_11),
     VAR_4);

 FUNC_5(VAR_13, sizeof(VAR_13), "%s/%s", VAR_5, VAR_2);
 VAR_10 = FUNC_1(VAR_13, VAR_9, VAR_12, sizeof(VAR_12),
     VAR_4);
 if (VAR_10 == ((void*)0))
  return (VAR_0);


 FUNC_5(VAR_13, sizeof(VAR_13), "%s/%s", VAR_5, VAR_10);
 VAR_14 = FUNC_2(&VAR_8, VAR_13);
 if (VAR_14)
  return (VAR_14);

 VAR_14 = FUNC_4(VAR_6, &VAR_8);

 FUNC_3(&VAR_8);

 return (VAR_14);
}
