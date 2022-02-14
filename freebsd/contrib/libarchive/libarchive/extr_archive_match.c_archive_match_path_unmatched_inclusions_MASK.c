
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int unmatched_count; } ;
struct archive_match {TYPE_1__ inclusions; } ;
struct archive {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct archive*,int ,int ,char*) ;

int
FUNC_1(struct archive *VAR_2)
{
 struct archive_match *VAR_3;

 FUNC_0(VAR_2, VAR_0,
     VAR_1, "archive_match_unmatched_inclusions");
 VAR_3 = (struct archive_match *)VAR_2;

 return (VAR_3->inclusions.unmatched_count);
}
