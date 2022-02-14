
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct syscall {TYPE_2__* tp_format; } ;
struct format_field {int name; struct format_field* next; } ;
struct TYPE_3__ {struct format_field* fields; } ;
struct TYPE_4__ {TYPE_1__ format; } ;


 scalar_t__ FUNC_0 (char*,size_t,char*,char*,int,unsigned long) ;

__attribute__((used)) static size_t FUNC_1(struct syscall *VAR_0, char *VAR_1, size_t VAR_2,
          unsigned long *VAR_3)
{
 int VAR_4 = 0;
 size_t VAR_5 = 0;

 if (VAR_0->tp_format != ((void*)0)) {
  struct format_field *VAR_6;


  for (VAR_6 = VAR_0->tp_format->format.fields; VAR_6; VAR_6 = VAR_6->next) {
   VAR_5 += FUNC_0(VAR_1 + VAR_5, VAR_2 - VAR_5,
          "%s%s: %ld", VAR_5 ? ", " : "",
          VAR_6->name, VAR_3[VAR_4++]);
  }
 } else {
  while (VAR_4 < 6) {
   VAR_5 += FUNC_0(VAR_1 + VAR_5, VAR_2 - VAR_5,
          "%sarg%d: %ld",
          VAR_5 ? ", " : "", VAR_4, VAR_3[VAR_4]);
   ++VAR_4;
  }
 }

 return VAR_5;
}
