
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct archive_write_filter {char const* name; } ;
struct archive {int dummy; } ;


 struct archive_write_filter* FUNC_0 (struct archive*,int) ;

__attribute__((used)) static const char *
FUNC_1(struct archive *VAR_0, int VAR_1)
{
 struct archive_write_filter *VAR_2 = FUNC_0(VAR_0, VAR_1);
 return VAR_2 != ((void*)0) ? VAR_2->name : ((void*)0);
}
