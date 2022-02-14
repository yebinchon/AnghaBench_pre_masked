
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct archive_read {int archive; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,char*) ;

__attribute__((used)) static const void *
FUNC_1(struct archive_read *VAR_2, ssize_t *VAR_3)
{
 *VAR_3 = VAR_1;
 FUNC_0(&VAR_2->archive, VAR_0,
     "libarchive compiled without deflate support (no libz)");
 return (((void*)0));
}
