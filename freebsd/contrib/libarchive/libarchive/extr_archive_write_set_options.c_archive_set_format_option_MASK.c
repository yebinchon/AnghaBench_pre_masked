
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct archive_write {int (* format_options ) (struct archive_write*,char const*,char const*) ;int * format_name; } ;
struct archive {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (char const*,int *) ;
 int FUNC_1 (struct archive_write*,char const*,char const*) ;

__attribute__((used)) static int
FUNC_2(struct archive *VAR_2, const char *VAR_3, const char *VAR_4,
    const char *VAR_5)
{
 struct archive_write *VAR_6 = (struct archive_write *)VAR_2;

 if (VAR_6->format_name == ((void*)0))
  return (VAR_3 == ((void*)0))?VAR_0:VAR_1 - 1;


 if (VAR_3 != ((void*)0) && FUNC_0(VAR_3, VAR_6->format_name) != 0)
  return (VAR_1 - 1);
 if (VAR_6->format_options == ((void*)0))
  return (VAR_1);
 return VAR_6->format_options(VAR_6, VAR_4, VAR_5);
}
