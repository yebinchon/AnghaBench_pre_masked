
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct archive {int dummy; } ;
typedef int archive_skip_callback ;
typedef int archive_read_callback ;
typedef int archive_open_callback ;
typedef int archive_close_callback ;


 int VAR_0 ;
 int FUNC_0 (struct archive*) ;
 int FUNC_1 (struct archive*) ;
 struct archive* FUNC_2 () ;
 int FUNC_3 (struct archive*,int *,int *,int *,int *,int *) ;
 int FUNC_4 (struct archive*) ;
 int FUNC_5 (int,int ) ;
 int FUNC_6 (char const*,int ) ;

__attribute__((used)) static void
FUNC_7(int VAR_1, archive_open_callback *VAR_2, archive_read_callback *VAR_3,
    archive_skip_callback *VAR_4, archive_close_callback *VAR_5,
    int VAR_6, const char *VAR_7)
{
 struct archive* VAR_8 = FUNC_2();
 if (VAR_1)
     FUNC_5(VAR_0,
  FUNC_4(VAR_8));
 FUNC_5(VAR_6,
     FUNC_3(VAR_8, ((void*)0), VAR_2, VAR_3, VAR_4, VAR_5));
 FUNC_6(VAR_7, FUNC_0(VAR_8));
 FUNC_1(VAR_8);
}
