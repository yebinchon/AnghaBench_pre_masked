
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct archive_read {int header_position; } ;
struct archive {int dummy; } ;
typedef int la_int64_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct archive*,int ,int ,char*) ;

la_int64_t
FUNC_1(struct archive *VAR_2)
{
 struct archive_read *VAR_3 = (struct archive_read *)VAR_2;
 FUNC_0(VAR_2, VAR_0,
     VAR_1, "archive_read_header_position");
 return (VAR_3->header_position);
}
