
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct archive_read {TYPE_1__* format; } ;
struct ar {struct ar* strtab; } ;
struct TYPE_2__ {int * data; } ;


 int VAR_0 ;
 int FUNC_0 (struct ar*) ;

__attribute__((used)) static int
FUNC_1(struct archive_read *VAR_1)
{
 struct ar *VAR_2;

 VAR_2 = (struct ar *)(VAR_1->format->data);
 FUNC_0(VAR_2->strtab);
 FUNC_0(VAR_2);
 (VAR_1->format->data) = ((void*)0);
 return (VAR_0);
}
