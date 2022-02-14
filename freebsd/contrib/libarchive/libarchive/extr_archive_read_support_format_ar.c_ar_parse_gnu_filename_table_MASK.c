
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct archive_read {int archive; TYPE_1__* format; } ;
struct ar {size_t strtab_size; char* strtab; } ;
struct TYPE_2__ {scalar_t__ data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ,char*) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static int
FUNC_2(struct archive_read *VAR_3)
{
 struct ar *VAR_4;
 char *VAR_5;
 size_t VAR_6;

 VAR_4 = (struct ar*)(VAR_3->format->data);
 VAR_6 = VAR_4->strtab_size;

 for (VAR_5 = VAR_4->strtab; VAR_5 < VAR_4->strtab + VAR_6 - 1; ++VAR_5) {
  if (*VAR_5 == '/') {
   *VAR_5++ = '\0';
   if (*VAR_5 != '\n')
    goto bad_string_table;
   *VAR_5 = '\0';
  }
 }




 if (VAR_5 != VAR_4->strtab + VAR_6 && *VAR_5 != '\n' && *VAR_5 != '`')
  goto bad_string_table;


 VAR_4->strtab[VAR_6 - 1] = '\0';

 return (VAR_1);

bad_string_table:
 FUNC_0(&VAR_3->archive, VAR_2,
     "Invalid string table");
 FUNC_1(VAR_4->strtab);
 VAR_4->strtab = ((void*)0);
 return (VAR_0);
}
