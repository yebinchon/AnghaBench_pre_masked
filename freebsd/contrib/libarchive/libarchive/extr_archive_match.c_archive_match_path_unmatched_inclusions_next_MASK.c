
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct archive_match {int inclusions; } ;
struct archive {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct archive*,int ,int ,char*) ;
 int FUNC_1 (struct archive_match*,int *,int,void const**) ;

int
FUNC_2(struct archive *VAR_2,
    const char **VAR_3)
{
 struct archive_match *VAR_4;
 const void *VAR_5;
 int VAR_6;

 FUNC_0(VAR_2, VAR_0,
     VAR_1, "archive_match_unmatched_inclusions_next");
 VAR_4 = (struct archive_match *)VAR_2;

 VAR_6 = FUNC_1(VAR_4, &(VAR_4->inclusions), 1, &VAR_5);
 *VAR_3 = (const char *)VAR_5;
 return (VAR_6);
}
