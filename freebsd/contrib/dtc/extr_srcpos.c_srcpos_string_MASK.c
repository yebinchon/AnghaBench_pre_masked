
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct srcpos {int first_column; int first_line; int last_column; int last_line; TYPE_1__* file; } ;
struct TYPE_2__ {char* name; } ;


 int FUNC_0 (char**,char*,char const*,int ,int ,...) ;

char *
FUNC_1(struct srcpos *VAR_0)
{
 const char *VAR_1 = "<no-file>";
 char *VAR_2;

 if (VAR_0->file && VAR_0->file->name)
  VAR_1 = VAR_0->file->name;


 if (VAR_0->first_line != VAR_0->last_line)
  FUNC_0(&VAR_2, "%s:%d.%d-%d.%d", VAR_1,
     VAR_0->first_line, VAR_0->first_column,
     VAR_0->last_line, VAR_0->last_column);
 else if (VAR_0->first_column != VAR_0->last_column)
  FUNC_0(&VAR_2, "%s:%d.%d-%d", VAR_1,
     VAR_0->first_line, VAR_0->first_column,
     VAR_0->last_column);
 else
  FUNC_0(&VAR_2, "%s:%d.%d", VAR_1,
     VAR_0->first_line, VAR_0->first_column);

 return VAR_2;
}
