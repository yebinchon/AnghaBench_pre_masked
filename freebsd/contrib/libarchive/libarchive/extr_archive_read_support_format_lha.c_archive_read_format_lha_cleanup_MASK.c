
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct lha {int ws; int gname; int uname; int filename; int dirname; int strm; } ;
struct archive_read {TYPE_1__* format; } ;
struct TYPE_2__ {int * data; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct lha*) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int
FUNC_4(struct archive_read *VAR_1)
{
 struct lha *VAR_2 = (struct lha *)(VAR_1->format->data);

 FUNC_3(&(VAR_2->strm));
 FUNC_0(&(VAR_2->dirname));
 FUNC_0(&(VAR_2->filename));
 FUNC_0(&(VAR_2->uname));
 FUNC_0(&(VAR_2->gname));
 FUNC_1(&(VAR_2->ws));
 FUNC_2(VAR_2);
 (VAR_1->format->data) = ((void*)0);
 return (VAR_0);
}
