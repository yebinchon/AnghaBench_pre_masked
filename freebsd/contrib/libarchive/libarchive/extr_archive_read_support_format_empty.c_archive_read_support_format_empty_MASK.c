
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct archive_read {int dummy; } ;
struct archive {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct archive_read*,int *,int *,int ,int *,int ,int ,int *,int *,int *,int *,int *) ;
 int FUNC_1 (struct archive*,int ,int ,char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

int
FUNC_2(struct archive *VAR_5)
{
 struct archive_read *VAR_6 = (struct archive_read *)VAR_5;
 int VAR_7;

 FUNC_1(VAR_5, VAR_0,
     VAR_1, "archive_read_support_format_empty");

 VAR_7 = FUNC_0(VAR_6,
     ((void*)0),
     ((void*)0),
     VAR_2,
     ((void*)0),
     VAR_4,
     VAR_3,
     ((void*)0),
     ((void*)0),
     ((void*)0),
     ((void*)0),
     ((void*)0));

 return (VAR_7);
}
