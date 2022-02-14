
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct archive {int dummy; } ;
typedef int archive_read_callback ;
typedef int archive_open_callback ;
typedef int archive_close_callback ;


 int FUNC_0 (struct archive*) ;
 int FUNC_1 (struct archive*,void*) ;
 int FUNC_2 (struct archive*,int *) ;
 int FUNC_3 (struct archive*,int *) ;
 int FUNC_4 (struct archive*,int *) ;

int
FUNC_5(struct archive *VAR_0, void *VAR_1,
    archive_open_callback *VAR_2, archive_read_callback *VAR_3,
    archive_close_callback *VAR_4)
{


 FUNC_3(VAR_0, VAR_2);
 FUNC_4(VAR_0, VAR_3);
 FUNC_2(VAR_0, VAR_4);
 FUNC_1(VAR_0, VAR_1);
 return FUNC_0(VAR_0);
}
