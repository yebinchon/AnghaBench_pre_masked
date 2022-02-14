
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct archive_read {int archive; } ;
typedef int int64_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,char*) ;

__attribute__((used)) static int
FUNC_1(struct archive_read *VAR_2,
    const void **VAR_3, size_t *VAR_4, int64_t *VAR_5)
{

 (void)VAR_3;
 (void)VAR_4;
 (void)VAR_5;
 FUNC_0(&VAR_2->archive, VAR_0,
     "zisofs is not supported on this platform.");
 return (VAR_1);
}
