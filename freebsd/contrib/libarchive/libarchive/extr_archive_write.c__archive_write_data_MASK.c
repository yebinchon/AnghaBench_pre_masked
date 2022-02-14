
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct archive_write {int (* format_write_data ) (struct archive_write*,void const*,size_t) ;int archive; } ;
struct archive {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (int *,int ,int ,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct archive_write*,void const*,size_t) ;

__attribute__((used)) static ssize_t
FUNC_3(struct archive *VAR_3, const void *VAR_4, size_t VAR_5)
{
 struct archive_write *VAR_6 = (struct archive_write *)VAR_3;
 const size_t VAR_7 = VAR_2;

 FUNC_0(&VAR_6->archive, VAR_1,
     VAR_0, "archive_write_data");

 if (VAR_5 > VAR_7)
  VAR_5 = VAR_7;
 FUNC_1(&VAR_6->archive);
 return ((VAR_6->format_write_data)(VAR_6, VAR_4, VAR_5));
}
