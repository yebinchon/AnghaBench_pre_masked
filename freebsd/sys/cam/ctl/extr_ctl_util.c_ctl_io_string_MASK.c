
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union ctl_io {int dummy; } ctl_io ;
struct sbuf {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (union ctl_io*,struct sbuf*) ;
 char* FUNC_1 (struct sbuf*) ;
 int FUNC_2 (struct sbuf*) ;
 int FUNC_3 (struct sbuf*,char*,int,int ) ;

char *
FUNC_4(union ctl_io *VAR_1, char *VAR_2, int VAR_3)
{
 struct sbuf VAR_4;

 FUNC_3(&VAR_4, VAR_2, VAR_3, VAR_0);
 FUNC_0(VAR_1, &VAR_4);
 FUNC_2(&VAR_4);
 return (FUNC_1(&VAR_4));
}
